#define MICROPY_HW_BOARD_NAME       "RECore_G431CBU"
#define MICROPY_HW_MCU_NAME         "STM32G431CBU"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)

#define MICROPY_HW_ENABLE_SERVO     (1)
#define MICROPY_HW_ENABLE_DAC       (1)

//#define MICROPY_HW_HAS_ILM6      (1)
//#define MICROPY_HW_HAS_DRV8848	(1)

// HSE is 8MHz, HSI is 16MHz CPU freq set to 170MHz
// Default source for the clock is HSE.
// For revisions of the board greater than C-01, HSE can be used as a
// clock source by removing the #define MICROPY_HW_CLK_USE_HSE line
//PLLの記述をHALでの設定に統一
//PLLRを一応追加
#define MICROPY_HW_CLK_USE_HSE (1)
#if MICROPY_HW_CLK_USE_HSI
#define MICROPY_HW_CLK_PLLM (16)
#else
#define MICROPY_HW_CLK_PLLM (RCC_PLLM_DIV2)
#endif
#define MICROPY_HW_CLK_PLLN (85)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)

// UART config
//enable uart - 1,2
//UART2がALT1なのか不明なので後で確認
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)
#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_A3)
// UART 1 connects to the VCP
// and this is exposed as a USB Serial port.
#define MICROPY_HW_UART_REPL        PYB_UART_1
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C buses
#define MICROPY_HW_I2C2_SCL (pin_C4)        // RECore D3
#define MICROPY_HW_I2C2_SDA (pin_A8)        // RECore D2

// SPI buses
//internal IMU
#define MICROPY_HW_SPI1_NSS     (pin_B12)   // RECore D26
#define MICROPY_HW_SPI1_SCK     (pin_B13)   // RECore D29
#define MICROPY_HW_SPI1_MISO    (pin_B14)   // RECore D28
#define MICROPY_HW_SPI1_MOSI    (pin_B15)   // RECore D27

//SPI2のNSSが使えないので未割当でテスト
//#define MICROPY_HW_SPI2_NSS     (pin_A1)   // RECore D9
#define MICROPY_HW_SPI2_SCK     (pin_A5)   // RECore D7
#define MICROPY_HW_SPI2_MISO    (pin_A6)   // RECore D6
#define MICROPY_HW_SPI2_MOSI    (pin_A7)   // RECore D5

// USRSW is pulled low. Pressing the button makes the input go high.
//設定半端
#define MICROPY_HW_USRSW_PIN        (pin_B6)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// LEDs
#define MICROPY_HW_LED1             (pin_B6) // Green LD2 LED on Nucleo
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// CAN buses
#define MICROPY_HW_CAN1_TX   (pin_A12) // RECore D12
#define MICROPY_HW_CAN1_RX   (pin_A11) // RECore D11

//モータードライバ、IMUは後で
