/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: MIMXRT1021xxxxx
package_id: MIMXRT1021DAG5A
mcu_data: ksdk2_0
processor_version: 8.0.2
board: MIMXRT1020-EVK
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include <pin_mux.h>
#include "fsl_common.h"
#include "fsl_iomuxc.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '101', peripheral: LPUART1, signal: RX, pin_signal: GPIO_AD_B0_07, software_input_on: Disable, open_drain: Disable}
  - {pin_num: '105', peripheral: LPUART1, signal: TX, pin_signal: GPIO_AD_B0_06, software_input_on: Disable, open_drain: Disable}
  - {pin_num: '110', peripheral: JTAG, signal: TCK, pin_signal: GPIO_AD_B0_01}
  - {pin_num: '108', peripheral: JTAG, signal: TDI, pin_signal: GPIO_AD_B0_03}
  - {pin_num: '107', peripheral: JTAG, signal: TDO, pin_signal: GPIO_AD_B0_04}
  - {pin_num: '111', peripheral: JTAG, signal: TMS, pin_signal: GPIO_AD_B0_00}
  - {pin_num: '106', peripheral: JTAG, signal: TRSTB, pin_signal: GPIO_AD_B0_05}
  - {pin_num: '93', peripheral: LPUART3, signal: RX, pin_signal: GPIO_AD_B0_15}
  - {pin_num: '94', peripheral: LPUART3, signal: TX, pin_signal: GPIO_AD_B0_14}
  - {pin_num: '79', peripheral: LPUART4, signal: RX, pin_signal: GPIO_AD_B1_11}
  - {pin_num: '80', peripheral: LPUART4, signal: TX, pin_signal: GPIO_AD_B1_10}
  - {pin_num: '75', peripheral: LPI2C1, signal: SCL, pin_signal: GPIO_AD_B1_14}
  - {pin_num: '74', peripheral: LPI2C1, signal: SDA, pin_signal: GPIO_AD_B1_15}
  - {pin_num: '82', peripheral: LPI2C2, signal: SCL, pin_signal: GPIO_AD_B1_08}
  - {pin_num: '81', peripheral: LPI2C2, signal: SDA, pin_signal: GPIO_AD_B1_09}
  - {pin_num: '100', peripheral: LPI2C3, signal: SCL, pin_signal: GPIO_AD_B0_08}
  - {pin_num: '99', peripheral: LPI2C3, signal: SDA, pin_signal: GPIO_AD_B0_09}
  - {pin_num: '95', peripheral: LPSPI1, signal: SDI, pin_signal: GPIO_AD_B0_13}
  - {pin_num: '96', peripheral: LPSPI1, signal: SDO, pin_signal: GPIO_AD_B0_12}
  - {pin_num: '98', peripheral: LPSPI1, signal: SCK, pin_signal: GPIO_AD_B0_10}
  - {pin_num: '97', peripheral: LPSPI1, signal: PCS0, pin_signal: GPIO_AD_B0_11}
  - {pin_num: '88', peripheral: LPSPI1, signal: PCS1, pin_signal: GPIO_AD_B1_04}
  - {pin_num: '87', peripheral: LPSPI1, signal: PCS2, pin_signal: GPIO_AD_B1_05}
  - {pin_num: '84', peripheral: LPSPI1, signal: PCS3, pin_signal: GPIO_AD_B1_06}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_00_JTAG_TMS,          /* GPIO_AD_B0_00 is configured as JTAG_TMS */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_01_JTAG_TCK,          /* GPIO_AD_B0_01 is configured as JTAG_TCK */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_03_JTAG_TDI,          /* GPIO_AD_B0_03 is configured as JTAG_TDI */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_04_JTAG_TDO,          /* GPIO_AD_B0_04 is configured as JTAG_TDO */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_05_JTAG_TRSTB,        /* GPIO_AD_B0_05 is configured as JTAG_TRSTB */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_06_LPUART1_TX,        /* GPIO_AD_B0_06 is configured as LPUART1_TX */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_07_LPUART1_RX,        /* GPIO_AD_B0_07 is configured as LPUART1_RX */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_08_LPI2C3_SCL,        /* GPIO_AD_B0_08 is configured as LPI2C3_SCL */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_09_LPI2C3_SDA,        /* GPIO_AD_B0_09 is configured as LPI2C3_SDA */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_10_LPSPI1_SCK,        /* GPIO_AD_B0_10 is configured as LPSPI1_SCK */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_11_LPSPI1_PCS0,       /* GPIO_AD_B0_11 is configured as LPSPI1_PCS0 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_12_LPSPI1_SDO,        /* GPIO_AD_B0_12 is configured as LPSPI1_SDO */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_13_LPSPI1_SDI,        /* GPIO_AD_B0_13 is configured as LPSPI1_SDI */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_14_LPUART3_TX,        /* GPIO_AD_B0_14 is configured as LPUART3_TX */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_15_LPUART3_RX,        /* GPIO_AD_B0_15 is configured as LPUART3_RX */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_04_LPSPI1_PCS1,       /* GPIO_AD_B1_04 is configured as LPSPI1_PCS1 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_05_LPSPI1_PCS2,       /* GPIO_AD_B1_05 is configured as LPSPI1_PCS2 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_06_LPSPI1_PCS3,       /* GPIO_AD_B1_06 is configured as LPSPI1_PCS3 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_08_LPI2C2_SCL,        /* GPIO_AD_B1_08 is configured as LPI2C2_SCL */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_09_LPI2C2_SDA,        /* GPIO_AD_B1_09 is configured as LPI2C2_SDA */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_10_LPUART4_TX,        /* GPIO_AD_B1_10 is configured as LPUART4_TX */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_11_LPUART4_RX,        /* GPIO_AD_B1_11 is configured as LPUART4_RX */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_14_LPI2C1_SCL,        /* GPIO_AD_B1_14 is configured as LPI2C1_SCL */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_15_LPI2C1_SDA,        /* GPIO_AD_B1_15 is configured as LPI2C1_SDA */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B0_06_LPUART1_TX,        /* GPIO_AD_B0_06 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B0_07_LPUART1_RX,        /* GPIO_AD_B0_07 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/