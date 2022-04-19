/* ARM Cortex Mx Processor NVIC Interrupt Clear-Enable Register Addresses */
#define NVIC_ICER	((volatile unsigned int *) 0xE000E180)
#define NVIC_ICER0	((volatile unsigned int *) 0xE000E180)
#define NVIC_ICER1	((volatile unsigned int *) 0xE000E184)
#define NVIC_ICER2	((volatile unsigned int *) 0xE000E188)
#define NVIC_ICER3	((volatile unsigned int *) 0xE000E18C)
#define NVIC_ICER4	((volatile unsigned int *) 0xE000E190)
#define NVIC_ICER5	((volatile unsigned int *) 0xE000E194)
#define NVIC_ICER6	((volatile unsigned int *) 0xE000E198)
#define NVIC_ICER7	((volatile unsigned int *) 0xE000E19C)

/* External Interrupt Registers */  
#define EXTI_BASE_ADDR		0x40013C00

typedef struct
{
	unsigned int IMR;
	unsigned int EMR;
	unsigned int RTSR;
	unsigned int FTSR;
	unsigned int SWIER;
	unsigned int PR;
} EXTIRegDef;

#define EXTI		((EXTIRegDef *) EXTI_BASE_ADDR)

CC = arm-none-eabi-
MCPU = cortex-m4
BOARD = STM32F4-Discovery
MCU = STM32F407VG

out.elf: ${OBJS}
	$(CC)gcc $(LDFLAGS) $(ARCH_FLAGS) -o $@ $^

out.bin: out.elf
	$(CC)objcopy -S -O binary out.elf out.bin


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
ENTRY(reset_handler)

SECTIONS
{
	.text :
	{
		*(.interrupt_vector)
		*(.text)
		*(.text.*)
		*(.init)
		*(.fini)
		*(.rodata)
		*(.rodata.*)
		. = ALIGN(4);
		_etext = .;
	}> FLASH

	_la_data = LOADADDR(.data);

	.data :
	{
		_sdata = .;
		*(.data)
		*(.data.*)
		. = ALIGN(4);
		_edata = .;

	.bss :
	{
		_sbss = .;
		__bss_start__ = _sbss;
		*(.bss)
		*(.bss.*)
		*(COMMON)
		. = ALIGN(4);
		_ebss = .;
		__bss_end__ = _ebss;
		. = ALIGN(4); 
		end = .;
		__end__ = .;
	}> SRAM
}

void gpiox_clear(GPIORegDef *gpiox, int pin)
{
}

void gpiox_write(GPIORegDef *gpiox, int pin, int value)
{
}

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

#define GPIO_SPEED_LOW	0x00000000 /* IO works at 2 MHz, please refer to the product datasheet */
#define GPIO_SPEED_MED	0x00000001 /* range 12,5 MHz to 50 MHz, please refer to the product datasheet */
#define GPIO_SPEED_HIGH	0x00000002 /* range 25 MHz to 100 MHz, please refer to the product datasheet  */
#define GPIO_SPEED_VERY_HIGH0x00000003 /* range 50 MHz to 200 MHz, please refer to the product datasheet  */

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
#ifndef RCC_H
#define RCC_H

void config_rcc(void *ptr);

#endif
#include <stdint.h>

#define SRAM_START  0x20000000U
#define SRAM_SIZE   (128U * 1024U) // 128KB
#define SRAM_END    ((SRAM_START) + (SRAM_SIZE))

#define STACK_START   SRAM_END

extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _la_data;

extern uint32_t _sbss;
extern uint32_t _ebss;

// Prototype of main

MEMORY
{
	FLASH(rx):ORIGIN =0x08000000,LENGTH =1024K
	SRAM(rwx):ORIGIN =0x20000000,LENGTH =128K
}


int main(void);

/* Function prototypes of STM32F407x system exception and IRQ handlers */

void reset_handler(void);

void nmi_handler 		(void) __attribute__ ((weak, alias("default_handler")));
void hardfault_handler 		(void) __attribute__ ((weak, alias("default_handler")));
void memmanage_handler 		(void) __attribute__ ((weak, alias("default_handler")));
void busfault_handler 		(void) __attribute__ ((weak, alias("default_handler")));
void usagefault_handler 	(void) __attribute__ ((weak, alias("default_handler")));
void svc_handler 		(void) __attribute__ ((weak, alias("default_handler")));
void debugmon_handler 		(void) __attribute__ ((weak, alias("default_handler")));
void pendsv_handler   		(void) __attribute__ ((weak, alias("default_handler")));
void systick_handler  		(void) __attribute__ ((weak, alias("default_handler")));
void wwdg_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void pvd_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));             
void tamp_stamp_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));      
void rtc_wkup_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));                               
void rcc_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));             
void exti0_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));           
void exti1_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));           
void exti2_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));           
void exti3_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));           
void exti4_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));           
void dma1_stream0_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));    
void dma1_stream1_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));    
void dma1_stream2_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));    
void dma1_stream3_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));    
void dma1_stream4_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));    
void dma1_stream5_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));    
void dma1_stream6_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));    
void adc_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));             
void can1_tx_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));         
void can1_rx0_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));        
void can1_rx1_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));        
void can1_sce_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));        
void exti9_5_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));         
void tim1_brk_tim9_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));   
void tim1_up_tim10_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));   
void tim1_trg_com_tim11_irqhandler (void) __attribute__ ((weak, alias("default_handler")));
void tim1_cc_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));         
void tim2_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));            
void tim3_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));            
void tim4_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));            
void i2c1_ev_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));         
void i2c1_er_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));         
void i2c2_ev_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));         
void i2c2_er_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));         
void spi1_irqhandler  		(void) __attribute__ ((weak, alias("default_handler")));           
void spi2_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));            
void usart1_irqhandler  	(void) __attribute__ ((weak, alias("default_handler")));         
void usart2_irqhandler  	(void) __attribute__ ((weak, alias("default_handler")));        
void usart3_irqhandler   	(void) __attribute__ ((weak, alias("default_handler")));        
void exti15_10_irqhandler   	(void) __attribute__ ((weak, alias("default_handler")));     
void rtc_alarm_irqhandler    	(void) __attribute__ ((weak, alias("default_handler")));    
void otg_fs_wkup_irqhandler     (void) __attribute__ ((weak, alias("default_handler"))); 
void tim8_brk_tim12_irqhandler   (void) __attribute__ ((weak, alias("default_handler")));
void tim8_up_tim13_irqhandler    (void) __attribute__ ((weak, alias("default_handler")));
void tim8_trg_com_tim14_irqhandler (void) __attribute__ ((weak, alias("default_handler")));
void tim8_cc_irqhandler          (void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream7_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void fsmc_irqhandler             (void) __attribute__ ((weak, alias("default_handler")));
void sdio_irqhandler             (void) __attribute__ ((weak, alias("default_handler")));
void tim5_irqhandler             (void) __attribute__ ((weak, alias("default_handler")));
void spi3_irqhandler             (void) __attribute__ ((weak, alias("default_handler")));
void uart4_irqhandler            (void) __attribute__ ((weak, alias("default_handler")));
void uart5_irqhandler            (void) __attribute__ ((weak, alias("default_handler")));
void tim6_dac_irqhandler         (void) __attribute__ ((weak, alias("default_handler")));
void tim7_irqhandler             (void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream0_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream1_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream2_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream3_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream4_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void eth_irqhandler              (void) __attribute__ ((weak, alias("default_handler")));
void eth_wkup_irqhandler         (void) __attribute__ ((weak, alias("default_handler")));
void can2_tx_irqhandler          (void) __attribute__ ((weak, alias("default_handler")));
void can2_rx0_irqhandler         (void) __attribute__ ((weak, alias("default_handler")));
void can2_rx1_irqhandler         (void) __attribute__ ((weak, alias("default_handler")));
void can2_sce_irqhandler         (void) __attribute__ ((weak, alias("default_handler")));
void otg_fs_irqhandler           (void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream5_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream6_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream7_irqhandler     (void) __attribute__ ((weak, alias("default_handler")));
void usart6_irqhandler           (void) __attribute__ ((weak, alias("default_handler")));
void i2c3_ev_irqhandler          (void) __attribute__ ((weak, alias("default_handler")));
void i2c3_er_irqhandler          (void) __attribute__ ((weak, alias("default_handler")));
void otg_hs_ep1_out_irqhandler   (void) __attribute__ ((weak, alias("default_handler")));
void otg_hs_ep1_in_irqhandler    (void) __attribute__ ((weak, alias("default_handler")));
void otg_hs_wkup_irqhandler      (void) __attribute__ ((weak, alias("default_handler")));
void otg_hs_irqhandler           (void) __attribute__ ((weak, alias("default_handler")));
void dcmi_irqhandler             (void) __attribute__ ((weak, alias("default_handler")));
void cryp_irqhandler             (void) __attribute__ ((weak, alias("default_handler")));
void hash_rng_irqhandler         (void) __attribute__ ((weak, alias("default_handler")));
void fpu_irqhandler              (void) __attribute__ ((weak, alias("default_handler")));                          
gpiox->MODER = (gpiox->MODER & ~(0x3 << (pin * 2))) | ((mode & 0x3) << (pin * 2));
gpiox->OSPEEDR = (gpiox->OSPEEDR & ~(0x3 << (pin * 2))) | (speed << (pin * 2));

uint32_t vectors[] __attribute__((section(".interrupt_vector"))) = {
	STACK_START,
	(uint32_t) nmi_handler,
	(uint32_t) reset_handler,
	(uint32_t) hardfault_handler,
	(uint32_t) memmanage_handler,
	(uint32_t) busfault_handler,
	(uint32_t) usagefault_handler,
	0,
	0,
	0,
	0,
	(uint32_t) svc_handler,
	(uint32_t) debugmon_handler,
	0,
	(uint32_t) pendsv_handler,
	(uint32_t) systick_handler,
	(uint32_t) wwdg_irqhandler,
	(uint32_t) pvd_irqhandler,         
	(uint32_t) tamp_stamp_irqhandler,  
	(uint32_t) rtc_wkup_irqhandler,    
	0,                      
	(uint32_t) rcc_irqhandler,         
	(uint32_t) exti0_irqhandler,       
	(uint32_t) exti1_irqhandler,       
	(uint32_t) exti2_irqhandler,       
	(uint32_t) exti3_irqhandler,       
	(uint32_t) exti4_irqhandler,       
	(uint32_t) dma1_stream0_irqhandler,
	(uint32_t) dma1_stream1_irqhandler,
	(uint32_t) dma1_stream2_irqhandler,
	(uint32_t) dma1_stream3_irqhandler,
	(uint32_t) dma1_stream4_irqhandler,
	(uint32_t) dma1_stream5_irqhandler,
	(uint32_t) dma1_stream6_irqhandler,
	(uint32_t) adc_irqhandler,         
	(uint32_t) can1_tx_irqhandler,     
	(uint32_t) can1_rx0_irqhandler,    
	(uint32_t) can1_rx1_irqhandler,    
	(uint32_t) can1_sce_irqhandler,    
	(uint32_t) exti9_5_irqhandler,     
	(uint32_t) tim1_brk_tim9_irqhandler,
	(uint32_t) tim1_up_tim10_irqhandler,
	(uint32_t) tim1_trg_com_tim11_irqhandler,
	(uint32_t) tim1_cc_irqhandler,     
	(uint32_t) tim2_irqhandler,        
	(uint32_t) tim3_irqhandler,        
	(uint32_t) tim4_irqhandler,        
	(uint32_t) i2c1_ev_irqhandler,     
	(uint32_t) i2c1_er_irqhandler,     
	(uint32_t) i2c2_ev_irqhandler,     
	(uint32_t) i2c2_er_irqhandler,     
	(uint32_t) spi1_irqhandler,        
	(uint32_t) spi2_irqhandler,        
	(uint32_t) usart1_irqhandler,      
	(uint32_t) usart2_irqhandler,      
	(uint32_t) usart3_irqhandler,      
	(uint32_t) exti15_10_irqhandler,   
	(uint32_t) rtc_alarm_irqhandler,   
	(uint32_t) otg_fs_wkup_irqhandler, 
	(uint32_t) tim8_brk_tim12_irqhandler,
	(uint32_t) tim8_up_tim13_irqhandler,
	(uint32_t) tim8_trg_com_tim14_irqhandler,
	(uint32_t) tim8_cc_irqhandler,     
	(uint32_t) dma1_stream7_irqhandler,
	(uint32_t) fsmc_irqhandler,        
	(uint32_t) sdio_irqhandler,        
	(uint32_t) tim5_irqhandler,        
	(uint32_t) spi3_irqhandler,        
	(uint32_t) uart4_irqhandler,       
	(uint32_t) uart5_irqhandler,       
	(uint32_t) tim6_dac_irqhandler,    
	(uint32_t) tim7_irqhandler,        
	(uint32_t) dma2_stream0_irqhandler,
	(uint32_t) dma2_stream1_irqhandler,
	(uint32_t) dma2_stream2_irqhandler,
	(uint32_t) dma2_stream3_irqhandler,
	(uint32_t) dma2_stream4_irqhandler,
	(uint32_t) eth_irqhandler,         
	(uint32_t) eth_wkup_irqhandler,    
	(uint32_t) can2_tx_irqhandler,     
	(uint32_t) can2_rx0_irqhandler,    
	(uint32_t) can2_rx1_irqhandler,    
	(uint32_t) can2_sce_irqhandler,    
	(uint32_t) otg_fs_irqhandler,      
	(uint32_t) dma2_stream5_irqhandler,
	(uint32_t) dma2_stream6_irqhandler,
	(uint32_t) dma2_stream7_irqhandler,
	(uint32_t) usart6_irqhandler,      
	(uint32_t) i2c3_ev_irqhandler,     
	(uint32_t) i2c3_er_irqhandler,     
	(uint32_t) otg_hs_ep1_out_irqhandler,
	(uint32_t) otg_hs_ep1_in_irqhandler,
	(uint32_t) otg_hs_wkup_irqhandler, 
	(uint32_t) otg_hs_irqhandler,      
	(uint32_t) dcmi_irqhandler,        
	(uint32_t) cryp_irqhandler,        
	(uint32_t) hash_rng_irqhandler,    
	(uint32_t) fpu_irqhandler,         
};

void default_handler(void)
{
	while(1);
}

#ifndef STM324XX_H
#define STM324XX_H

/* ARM Cortex Mx specific defines */

/* ARM Cortex Mx Processor NVIC Interrupt Set-Enable Register Addresses */
#define NVIC_ISER	((volatile unsigned int *) 0xE000E100)
#define NVIC_ISER0	((volatile unsigned int *) 0xE000E100)
#define NVIC_ISER1	((volatile unsigned int *) 0xE000E104)
#define NVIC_ISER2	((volatile unsigned int *) 0xE000E108)
#define NVIC_ISER3	((volatile unsigned int *) 0xE000E10C)
#define NVIC_ISER4	((volatile unsigned int *) 0xE000E110)
#define NVIC_ISER5	((volatile unsigned int *) 0xE000E114)
#define NVIC_ISER6	((volatile unsigned int *) 0xE000E118)
#define NVIC_ISER7	((volatile unsigned int *) 0xE000E11C)

/* ARM Cortex Mx Processor NVIC Interrupt Set-Pending Register Addresses */
#define NVIC_ISPR0	((volatile unsigned int *) 0xE000E200)
#define NVIC_ISPR1	((volatile unsigned int *) 0xE000E204)
#define NVIC_ISPR2	((volatile unsigned int *) 0xE000E208)
#define NVIC_ISPR3	((volatile unsigned int *) 0xE000E20C)
#define NVIC_ISPR4	((volatile unsigned int *) 0xE000E210)
#define NVIC_ISPR5	((volatile unsigned int *) 0xE000E214)
#define NVIC_ISPR6	((volatile unsigned int *) 0xE000E218)
#define NVIC_ISPR7	((volatile unsigned int *) 0xE000E21C)

/* ARM Cortex Mx Processor NVIC Interrupt Clear-Pending Register Addresses */
#define NVIC_ICPR0	((volatile unsigned int *) 0xE000E280)
#define NVIC_ICPR1	((volatile unsigned int *) 0xE000E284)
#define NVIC_ICPR2	((volatile unsigned int *) 0xE000E288)
#define NVIC_ICPR3	((volatile unsigned int *) 0xE000E28C)
#define NVIC_ICPR4	((volatile unsigned int *) 0xE000E290)
#define NVIC_ICPR5	((volatile unsigned int *) 0xE000E294)
#define NVIC_ICPR6	((volatile unsigned int *) 0xE000E298)
#define NVIC_ICPR7	((volatile unsigned int *) 0xE000E29C)

/* ARM Cortex Mx Processor NVIC Interrupt Active Bit Register Addresses */
#define NVIC_IABR0	((volatile unsigned int *) 0xE000E300)
#define NVIC_IABR1	((volatile unsigned int *) 0xE000E304)
#define NVIC_IABR2	((volatile unsigned int *) 0xE000E308)
#define NVIC_IABR3	((volatile unsigned int *) 0xE000E30C)
#define NVIC_IABR4	((volatile unsigned int *) 0xE000E310)
#define NVIC_IABR5	((volatile unsigned int *) 0xE000E314)
#define NVIC_IABR6	((volatile unsigned int *) 0xE000E318)
#define NVIC_IABR7	((volatile unsigned int *) 0xE000E31C)

void exti0_irqhandler(void)
{
	if (EXTI->PR & (1 << PIN_0))
	{
	}
}

/* ARM Cortex Mx Processor NVIC Interrupt Priority Register Addresses */
#define NVIC_IPR_BASE_ADDRESS((volatile unsigned int *) 0xE000E400)
#define NVIC_IPR0	((volatile unsigned int *) 0xE000E400)

/* STM32F4XX Specific defines */

/* Refer reference manual (RM0090 Rev 19) page 371 section 12.1.1 */
#define NO_PR_BITS_IMPLEMENTED4

/* IRQ (Interrupt Request) Numbers for STM32F407X MCU */
/* Refer vector table from STM32F407X Datasheet */
#define IRQ_NO_EXTI0	6
#define IRQ_NO_EXTI1	7

#define NVIC_IRQ_PR_LVL_00

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

SRCS := $(wildcard *.c)
INCS := $(wildcard *.h)
OBJS := $(SRCS:.c=.o)

TARGET = out.bin

ARCH_FLAGS = -mcpu=$(MCPU) -mthumb -mfloat-abi=soft
CFLAGS = -c
LDFLAGS = -T linker_file.ld -Wl,-Map=out.map -nostdlib

%.o: %.c ${INCS}
	$(CC)gcc $(CFLAGS) $(ARCH_FLAGS) $^

#define GPIOA		((GPIORegDef *) GPIOA_BASE_ADDR)
#define GPIOD		((GPIORegDef *) GPIOD_BASE_ADDR)


#define RCC		((RCCRegDef *) RCC_BASE_ADDR)

#endif

burn: ${TARGET}
STM32_Programmer_CLI.exe -c port=SWD reset=HWrst freq=4000 -w $(TARGET) 0x08000000 -v -HardRst

clean:
rm -rf *.o *.elf *.gch *.bin

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
