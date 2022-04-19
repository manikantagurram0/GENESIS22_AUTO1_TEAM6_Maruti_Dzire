


#ifndef GPIO_H
#define GPIO_H

#include "stm32f4xx.h"
//#include "stm32f4xx.h"

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


#define PIN_0		0
#define PIN_1		1
#define PIN_2		2
#define PIN_3		3
#define PIN_4		4
#define PIN_5		5
#define PIN_6		6
#define PIN_7		7
#define PIN_8		8
#define PIN_9		9
#define PIN_10		10
#define PIN_11		11
#define PIN_12		12
#define PIN_13		13
#define PIN_14		14
#define PIN_15		15

#--------------------------------------------------

#define GPIO_INPUT	0x00000000 /* Input Floating Mode */
#define GPIO_INPUT_PU	0x00000010 /* Input Pull Up */
#define GPIO_INPUT_PD	0x00000020 /* Input Pull Down */
#define GPIO_OUTPUT_PP	0x00000001 /* Output Push Pull Mode */
#define GPIO_OUTPUT_OD	0x00000011 /* Output Open Drain Mode */
#define GPIO_AF_PP	0x00000002 /* Alternate Function Push Pull Mode */
#define GPIO_AF_OD	0x00000012 /* Alternate Function Open Drain Mode */
#define GPIO_ANALOG	0x00000003 /* Analog Mode */

#define GPIO_IT_RISING	0x00001100 /* Ext Int with Rising edge trigger detection */
#define GPIO_IT_FALLING	0x00002100 /* Ext Int Falling edge trigger detection */
#define GPIO_IT_RISING_FALLING0x00003100 /* Ext Int Rising/Falling edge trigger detection */
#define GPIO_EVT_RISING	0x00001200 /* Ext Event Rising edge trigger detection */
#define GPIO_EVT_FALLING0x00002200 /* Ext Event Falling edge trigger detection */
#define GPIO_EVT_RISING_FALLING0x00003200 /* Ext Event Rising/Falling edge trigger detection */
#define GPIO_SWT_INT	0x00003300 /* Sotfware Interrupt */

typedef struct
{
	unsigned int OSPEEDR;
	unsigned int PUPDR;
	unsigned int IDR;
	unsigned int ODR;
	unsigned int MODER;
	unsigned int OTYPER;
	unsigned int BSRR;
	unsigned int LCKR;
	unsigned int AFRL;
	unsigned int AFRH;
} GPIORegDef; 


/* Output Functions */
void gpiox_set(GPIORegDef *gpiox, int pin);
void gpiox_clear(GPIORegDef *gpiox, int pin);
void gpiox_write(GPIORegDef *gpiox, int pin, int value);
void gpiox_toggle(GPIORegDef *gpiox, int pin);

/* GPIO Registers */
#define GPIOA_BASE_ADDR	0x40020000
#define GPIOB_BASE_ADDR	0x40020400
#define GPIOC_BASE_ADDR	0x40020800
#define GPIOD_BASE_ADDR	0x40020C00
#define GPIOE_BASE_ADDR	0x40021000
#define GPIOF_BASE_ADDR	0x40021400
#define GPIOG_BASE_ADDR	0x40021800
#define GPIOH_BASE_ADDR	0x40021C00
#define GPIOI_BASE_ADDR	0x40022000
#define GPIOJ_BASE_ADDR	0x40022400
#define GPIOK_BASE_ADDR	0x40022800

/* RCC Registers */
#define RCC_BASE_ADDR	0x40023800

typedef struct
{
	unsigned int CR;
	unsigned int PLLCFGR;
	unsigned int CFGR;
	unsigned int CIR;
	unsigned int AHB1RSTR;
	unsigned int AHB2RSTR;
	unsigned int AHB3RSTR;
	unsigned int : 32;
	unsigned int APB1RSTR;
	unsigned int APB2RSTR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1ENR;
	unsigned int AHB2ENR;
	unsigned int AHB3ENR;
	unsigned int : 32;
	unsigned int APB1ENR;
	unsigned int APB2ENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1LPENR;
	unsigned int AHB2LPENR;
	unsigned int AHB3LPENR;
	unsigned int : 32;
	unsigned int APB1LPENR;
	unsigned int APB2LPENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int BDCR;
	unsigned int CSR;
	unsigned int : 32;
	unsigned int SSCGR;
	unsigned int PLLI2SCFGR;
} RCCRegDef;

}> SRAM AT> FLASH

--------------------------
gpiox->MODER = (gpiox->MODER & ~(0x3 << (pin * 2))) | ((mode & 0x3) << (pin * 2));
gpiox->OSPEEDR = (gpiox->OSPEEDR & ~(0x3 << (pin * 2))) | (speed << (pin * 2));

#ifndef STM324XX_H
#define STM324XX_H





#define GPIOA		((GPIORegDef *) GPIOA_BASE_ADDR)
#define GPIOD		((GPIORegDef *) GPIOD_BASE_ADDR)


#define RCC		((RCCRegDef *) RCC_BASE_ADDR)

#endif

------------------------------------------------
#define LEVEL	0
#define STATE	1

#define ENABLE	1
#define DISABLE	0

/* Configuration Functions */
void config_gpiox(GPIORegDef *gpiox, int pin, int mode, int speed);

/* Input Functions */
int gpiox_read_pin(GPIORegDef *gpiox, int pin, int mode);

/* Interrupt Related Functions */
void config_gpio_irq_priority(unsigned char irq_number, unsigned char irq_priority);
void config_gpio_interrupt(unsigned char irq_number, unsigned char state);
void gpiox_set(GPIORegDef *gpiox, int pin)
{
}

void gpiox_toggle(GPIORegDef *gpiox, int pin)
{
}

int gpiox_read_pin(GPIORegDef *gpiox, int pin, int mode)
{
}


void gpiox_clear(GPIORegDef *gpiox, int pin)
{
}

void gpiox_write(GPIORegDef *gpiox, int pin, int value)
{
}

typedef struct
{
	unsigned int IMR;
	unsigned int EMR;
	unsigned int RTSR;
	unsigned int FTSR;
	unsigned int SWIER;
	unsigned int PR;
} EXTIRegDef;

#endif

