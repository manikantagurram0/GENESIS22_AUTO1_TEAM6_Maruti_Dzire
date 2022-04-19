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

#endif