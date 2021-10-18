#ifndef MICROPY_INCLUDED_STM32G4XX_HAL_CONF_BASE_H
#define MICROPY_INCLUDED_STM32G4XX_HAL_CONF_BASE_H

// Include various HAL modules for convenience
#include "stm32g4xx_hal_dma.h"
#include "stm32g4xx_hal_adc.h"
#include "stm32g4xx_hal_can.h"
#include "stm32g4xx_hal_cortex.h"
#include "stm32g4xx_hal_crc.h"
#include "stm32g4xx_hal_dac.h"
#include "stm32g4xx_hal_dcmi.h"
#include "stm32g4xx_hal_eth.h"
#include "stm32g4xx_hal_flash.h"
#include "stm32g4xx_hal_gpio.h"
#include "stm32g4xx_hal_hash.h"
#include "stm32g4xx_hal_hcd.h"
#include "stm32g4xx_hal_i2c.h"
#include "stm32g4xx_hal_i2s.h"
#include "stm32g4xx_hal_iwdg.h"
#include "stm32g4xx_hal_pcd.h"
#include "stm32g4xx_hal_pwr.h"
#include "stm32g4xx_hal_rcc.h"
#include "stm32g4xx_hal_rtc.h"
#include "stm32g4xx_hal_sd.h"
#include "stm32g4xx_hal_sdram.h"
#include "stm32g4xx_hal_spi.h"
#include "stm32g4xx_hal_tim.h"
#include "stm32g4xx_hal_uart.h"
#include "stm32g4xx_hal_usart.h"
#include "stm32g4xx_hal_wwdg.h"
#include "stm32g4xx_ll_adc.h"
#include "stm32g4xx_ll_pwr.h"
#include "stm32g4xx_ll_rtc.h"
#include "stm32g4xx_ll_usart.h"

// Enable various HAL modules
#define HAL_ADC_MODULE_ENABLED
#define HAL_CAN_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_CRC_MODULE_ENABLED
#define HAL_DAC_MODULE_ENABLED
#define HAL_DCMI_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_ETH_MODULE_ENABLED
#define HAL_FLASH_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_HASH_MODULE_ENABLED
#define HAL_HCD_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_I2S_MODULE_ENABLED
#define HAL_IWDG_MODULE_ENABLED
#define HAL_PCD_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_RTC_MODULE_ENABLED
#define HAL_SD_MODULE_ENABLED
#define HAL_SDRAM_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_USART_MODULE_ENABLED
#define HAL_WWDG_MODULE_ENABLED

// Oscillator values in Hz
#define HSI_VALUE (16000000)
#define LSI_VALUE (32000)

// SysTick has the highest priority
#define TICK_INT_PRIORITY (0x00)

// Miscellaneous HAL settings
#define DATA_CACHE_ENABLE           1
#define INSTRUCTION_CACHE_ENABLE    1
#define PREFETCH_ENABLE             1
#define USE_RTOS                    0

// HAL parameter assertions are disabled
#define assert_param(expr) ((void)0)

#endif // MICROPY_INCLUDED_STM32G4XX_HAL_CONF_BASE_H
