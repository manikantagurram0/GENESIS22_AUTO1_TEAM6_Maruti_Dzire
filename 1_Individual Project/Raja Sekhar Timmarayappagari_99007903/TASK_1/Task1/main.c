#include "stm32f4xx.h"
#include "gpio.h"
#include "rcc.h"

#define LOOP_CYCLES	2000

static int key_press_flag;

static void init_config(void)
{
	config_rcc(GPIOD);
	config_gpiox(GPIOD, PIN_12, GPIO_OUTPUT_PP, GPIO_SPEED_VERY_HIGH);

	config_rcc(GPIOA);
	config_gpiox(GPIOA, PIN_0, GPIO_IT_FALLING, GPIO_SPEED_VERY_HIGH);

	config_gpio_irq_priority(IRQ_NO_EXTI0, NVIC_IRQ_PR_LVL_0);
	config_gpio_interrupt(IRQ_NO_EXTI0, ENABLE);
}

int main(void)
{
	int wait = LOOP_CYCLES;

	init_config();

	while (1)
	{
		if (key_press_flag)
		{
			if (!wait--)
			{
				wait = LOOP_CYCLES;
				gpiox_toggle(GPIOD, PIN_12);
				key_press_flag = 0;
			}
		}
	}
}

void reset_handler(void)
{
	// Copy .data section to SRAM
	uint32_t size = (uint32_t) &_edata - (uint32_t) &_sdata;

	uint8_t *dest = (uint8_t *) &_sdata; // SRAM
	uint8_t *src = (uint8_t *) &_la_data; // Flash

	for(uint32_t i =0 ; i < size ; i++)
	{
		*dest++ = *src++;
	}

	// Init. the .bss section to zero in SRAM
	size = (uint32_t) &_ebss - (uint32_t) &_sbss;
	dest = (uint8_t *) &_sbss;
	for(uint32_t i = 0 ; i < size ; i++)
	{
		*dest++ = 0;
	}

	main();
}

#include "stm32f4xx.h"
#include "gpio.h"

void config_gpiox(GPIORegDef *gpiox, int pin, int mode, int speed)
{
	switch (mode & 0x3)
	{
		case e_gpi:
			/* Please refer the stm32f4xx.h for more info */
			if (mode & 0x30) /* Configure normal Pull Up / Down mode */
			{
				gpiox->PUPDR = (gpiox->PUPDR & ~(0x3 << (pin * 2))) | ((mode >> 0x4) << (pin * 2));
			}
			else /* Check for External Interrupt configuration */
			{
				/* Select if Interrupt of Event */
				switch ((mode >> 8) & 0x3)
				{
					case e_exti_int:
						EXTI->IMR = EXTI->IMR | (1 << pin);
						break;
					case e_exti_event:
						EXTI->EMR = EXTI->EMR | (1 << pin);
						break;	
					case e_exti_swi:
						EXTI->SWIER = EXTI->SWIER | (1 << pin);
						break;	
				}

				/* Select the Edges for detection */
				if ((mode >> 12) & 1)
				{
					EXTI->RTSR = EXTI->RTSR | (1 << pin);
				}
				if ((mode >> 13) & 1)
				{
					EXTI->FTSR = EXTI->FTSR | (1 << pin);
				}
			}
			break;
		case e_gpo:
			gpiox->OTYPER = (gpiox->OTYPER & ~(0x1 << pin)) | ((mode >> 0x4) << pin);
			break;
		case e_alt_func:
			break;
		case e_analog:
			break;
	}
}

void gpiox_set(GPIORegDef *gpiox, int pin)
{
}

void gpiox_toggle(GPIORegDef *gpiox, int pin)
{
}

int gpiox_read_pin(GPIORegDef *gpiox, int pin, int mode)
{
}

void config_gpio_interrupt(unsigned char irq_number, unsigned char state)
{
	if (state == ENABLE)
	{
		if (irq_number <= 31)
		{
			*NVIC_ISER0 = *NVIC_ISER0 | (1 << irq_number);
		}
		else if (irq_number <= 63)
		{
			*NVIC_ISER1 = *NVIC_ISER1 | (1 << (irq_number % 32));
		}
		else if (irq_number <= 95)
		{
			*NVIC_ISER1 = *NVIC_ISER1 | (1 << (irq_number % 32));
		}
	}
	else
	{
		if (irq_number <= 31)
		{
			*NVIC_ICER0 = *NVIC_ICER0 | (1 << irq_number);
		}
		else if (irq_number <= 63)
		{
			*NVIC_ICER1 = *NVIC_ICER1 | (1 << (irq_number % 32));
		}
		else if (irq_number <= 95)
		{
			*NVIC_ICER1 = *NVIC_ICER1 | (1 << (irq_number % 32));
		}
	}
}

#ifndef GPIO_H
#define GPIO_H

#include "stm32f4xx.h"

typedef enum
{
	e_gpi,
	e_gpo,
	e_alt_func,
	e_analog,
	/* Please refer the stm32f4xx.h for more info on mode */
	e_exti_int = 1,
	e_exti_event,
	e_exti_swi
} Modes;

#include "stm32f4xx.h"

void config_rcc(void *ptr)
{
	if ((GPIORegDef *) ptr == GPIOD)
	{
		RCC->AHB1ENR = RCC->AHB1ENR | 0x8;
	}

	if ((GPIORegDef *) ptr == GPIOA)
	{
		RCC->AHB1ENR = RCC->AHB1ENR | 0x1;
	}
}

