#ifndef HAL_CONF
#define HAL_CONF

#define HAL_MODULE_ENABLED
//#define HAL_ADC_MODULE_ENABLED
//#define HAL_CAN_MODULE_ENABLED
//#define HAL_CRC_MODULE_ENABLED
//#define HAL_CRYP_MODULE_ENABLED
//#define HAL_DAC_MODULE_ENABLED
//#define HAL_DCMI_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_DMA2D_MODULE_ENABLED
//#define HAL_ETH_MODULE_ENABLED
//#define HAL_FLASH_MODULE_ENABLED
//#define HAL_NAND_MODULE_ENABLED
//#define HAL_NOR_MODULE_ENABLED
//#define HAL_PCCARD_MODULE_ENABLED
//#define HAL_SRAM_MODULE_ENABLED
#define HAL_SDRAM_MODULE_ENABLED
//#define HAL_HASH_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
//#define HAL_I2S_MODULE_ENABLED
//#define HAL_IWDG_MODULE_ENABLED
#define HAL_LTDC_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
//#define HAL_RNG_MODULE_ENABLED
//#define HAL_RTC_MODULE_ENABLED
//#define HAL_SAI_MODULE_ENABLED
//#define HAL_SD_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
//#define HAL_TIM_MODULE_ENABLED
//#define HAL_UART_MODULE_ENABLED
//#define HAL_USART_MODULE_ENABLED
//#define HAL_IRDA_MODULE_ENABLED
//#define HAL_SMARTCARD_MODULE_ENABLED
//#define HAL_WWDG_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
//#define HAL_PCD_MODULE_ENABLED
//#define HAL_HCD_MODULE_ENABLED

// External High Speed oscillator (HSE)
#define HSE_VALUE                 (8000000U)
#define HSE_STARTUP_TIMEOUT       (100U)

// Internal High Speed oscillator (HSI)
#define HSI_VALUE                 (16000000U)

// Internal Low Speed oscillator
#define LSI_VALUE                 (32000U)

// External Low Speed oscillator
#define LSE_VALUE                 (32768U)
#define LSE_STARTUP_TIMEOUT       (100U)

// External clock source for I2S peripheral
#define EXTERNAL_CLOCK_VALUE      (12288000U)

#define VDD_VALUE                 (3300U)
#define TICK_INT_PRIORITY         (0x0FU)
#define USE_RTOS                  0
#define PREFETCH_ENABLE           1
#define INSTRUCTION_CACHE_ENABLE  1
#define DATA_CACHE_ENABLE         1
#define USE_SPI_CRC               1U

#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_dma.h"
#include "stm32f4xx_hal_cortex.h"
#include "stm32f4xx_hal_adc.h"
#include "stm32f4xx_hal_can.h"
#include "stm32f4xx_hal_crc.h"
#include "stm32f4xx_hal_cryp.h"
#include "stm32f4xx_hal_dma2d.h"
#include "stm32f4xx_hal_dac.h"
#include "stm32f4xx_hal_dcmi.h"
#include "stm32f4xx_hal_eth.h"
#include "stm32f4xx_hal_flash.h"
#include "stm32f4xx_hal_sram.h"
#include "stm32f4xx_hal_nor.h"
#include "stm32f4xx_hal_nand.h"
#include "stm32f4xx_hal_pccard.h"
#include "stm32f4xx_hal_sdram.h"
#include "stm32f4xx_hal_hash.h"
#include "stm32f4xx_hal_i2c.h"
#include "stm32f4xx_hal_i2s.h"
#include "stm32f4xx_hal_iwdg.h"
#include "stm32f4xx_hal_ltdc.h"
#include "stm32f4xx_hal_pwr.h"
#include "stm32f4xx_hal_rng.h"
#include "stm32f4xx_hal_rtc.h"
#include "stm32f4xx_hal_sai.h"
#include "stm32f4xx_hal_sd.h"
#include "stm32f4xx_hal_spi.h"
#include "stm32f4xx_hal_tim.h"
#include "stm32f4xx_hal_uart.h"
#include "stm32f4xx_hal_usart.h"
#include "stm32f4xx_hal_irda.h"
#include "stm32f4xx_hal_smartcard.h"
#include "stm32f4xx_hal_wwdg.h"
#include "stm32f4xx_hal_pcd.h"
#include "stm32f4xx_hal_hcd.h"

#include <stm32_assert.h>

#endif // HAL_CONF

