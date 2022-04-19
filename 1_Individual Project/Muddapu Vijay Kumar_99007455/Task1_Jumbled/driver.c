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

------------------------------------------------------------

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

void config_gpio_irq_priority(unsigned char irq_number, unsigned char irq_priority)
{
	// https://developer.arm.com/documentation/dui0497/a/cortex-m0-peripherals/nested-vectored-interrupt-controller/interrupt-priority-registers
	unsigned char ipr_no = irq_number / 4;
	unsigned char byte_offset  = irq_number % 4;
	unsigned char position = (8 * byte_offset) + (8 - NO_PR_BITS_IMPLEMENTED);

	NVIC_IPR_BASE_ADDRESS[ipr_no] |=  (irq_priority << position); 
}

--------------------------------------
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

----------------------------------------

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
