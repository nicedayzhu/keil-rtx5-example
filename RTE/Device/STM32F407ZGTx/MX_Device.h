/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 12/07/2019 20:47:20
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLCLKFreq_Value                     168000000
#define MX_SYSCLKFreq_VALUE                     168000000
#define MX_HCLKFreq_Value                       168000000
#define MX_FCLKCortexFreq_Value                 168000000
#define MX_CortexFreq_Value                     168000000
#define MX_AHBFreq_Value                        168000000
#define MX_APB1Freq_Value                       42000000
#define MX_APB2Freq_Value                       84000000
#define MX_APB1TimFreq_Value                    84000000
#define MX_APB2TimFreq_Value                    168000000
#define MX_48MHZClocksFreq_Value                84000000
#define MX_EthernetFreq_Value                   168000000
#define MX_I2SClocksFreq_Value                  192000000
#define MX_RTCFreq_Value                        32000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    168000000

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/* Pin PA13 */
#define MX_SYS_JTMS-SWDIO_Pin                   PA13

/* Pin PA14 */
#define MX_SYS_JTCK-SWCLK_Pin                   PA14

/*-------------------------------- USART1     --------------------------------*/

#define MX_USART1                               1

#define MX_USART1_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PA9 */
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_Pin                        PA9
#define MX_USART1_TX_GPIOx                      GPIOA
#define MX_USART1_TX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA10 */
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_Pin                        PA10
#define MX_USART1_RX_GPIOx                      GPIOA
#define MX_USART1_RX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PF10 */
#define MX_PF10_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PF10_Pin                             PF10
#define MX_PF10_GPIOx                           GPIOF
#define MX_PF10_PinState                        GPIO_PIN_RESET
#define MX_PF10_GPIO_PuPd                       GPIO_NOPULL
#define MX_LED_G                                PF10
#define MX_PF10_GPIO_Pin                        GPIO_PIN_10
#define MX_PF10_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PF9 */
#define MX_PF9_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PF9_Pin                              PF9
#define MX_PF9_GPIOx                            GPIOF
#define MX_PF9_PinState                         GPIO_PIN_RESET
#define MX_PF9_GPIO_PuPd                        GPIO_NOPULL
#define MX_LED_R                                PF9
#define MX_PF9_GPIO_Pin                         GPIO_PIN_9
#define MX_PF9_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

#endif  /* __MX_DEVICE_H */

