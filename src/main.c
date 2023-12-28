#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>

void SysTick_Handler(void) {
  static int counter = 0;
  HAL_IncTick();
  counter++;
  if (!(counter & 0xFF)) {
    BSP_LED_Toggle(LED3);
    BSP_LED_Toggle(LED4);
  }
}

void Error_Handler(void) {
  for (;;) {}
}

static void SystemClock_Config(void) {
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_OscInitTypeDef RCC_OscInitStruct;

  /* Enable Power Control clock */
  __HAL_RCC_PWR_CLK_ENABLE();

  /* The voltage scaling allows optimizing the power consumption when the device is
     clocked below the maximum system frequency, to update the voltage scaling value
     regarding system frequency refer to product datasheet.  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /* Enable HSE Oscillator and activate PLL with HSE as source */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 360;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if(HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    /* Initialization Error */
    Error_Handler();
  }

#ifdef HAL_PWR_MODULE_ENABLED
  if(HAL_PWREx_EnableOverDrive() != HAL_OK) {
    Error_Handler();
  }
#endif

  /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
     clocks dividers */
  RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
  if(HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK) {
    /* Initialization Error */
    Error_Handler();
  }
}

void _init() {
}

int main(void) {
  SystemClock_Config();
  HAL_Init();

  BSP_LED_Init(LED3);
  BSP_LED_Init(LED4);
  BSP_LED_Off(LED3);
  BSP_LED_On(LED4);

  BSP_LCD_Init();
  BSP_LCD_LayerDefaultInit(0, LCD_FRAME_BUFFER);
  BSP_LCD_SelectLayer(0);
  BSP_LCD_DisplayOn();
  BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
  BSP_LCD_SetBackColor(LCD_COLOR_BLACK);
  BSP_LCD_SetFont(&Font12);
  BSP_LCD_Clear(LCD_COLOR_WHITE);
  BSP_LCD_DisplayStringAt(0, 16, (uint8_t*)"Ready", CENTER_MODE);  // cppcheck-suppress cstyleCast

  for (;;) {}
}

