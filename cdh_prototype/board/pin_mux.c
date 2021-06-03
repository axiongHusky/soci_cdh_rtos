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

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

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
  - {pin_num: '83', peripheral: GPIO1, signal: 'gpio_io, 23', pin_signal: GPIO_AD_B1_07}
  - {pin_num: '142', peripheral: SEMC, signal: 'ADDR, 00', pin_signal: GPIO_EMC_16}
  - {pin_num: '141', peripheral: SEMC, signal: 'ADDR, 01', pin_signal: GPIO_EMC_17}
  - {pin_num: '140', peripheral: SEMC, signal: 'ADDR, 02', pin_signal: GPIO_EMC_18}
  - {pin_num: '139', peripheral: SEMC, signal: 'ADDR, 03', pin_signal: GPIO_EMC_19}
  - {pin_num: '138', peripheral: SEMC, signal: 'ADDR, 04', pin_signal: GPIO_EMC_20}
  - {pin_num: '137', peripheral: SEMC, signal: 'ADDR, 05', pin_signal: GPIO_EMC_21}
  - {pin_num: '136', peripheral: SEMC, signal: 'ADDR, 06', pin_signal: GPIO_EMC_22}
  - {pin_num: '133', peripheral: SEMC, signal: 'ADDR, 07', pin_signal: GPIO_EMC_23}
  - {pin_num: '132', peripheral: SEMC, signal: 'ADDR, 08', pin_signal: GPIO_EMC_24}
  - {pin_num: '131', peripheral: SEMC, signal: 'ADDR, 09', pin_signal: GPIO_EMC_25}
  - {pin_num: '143', peripheral: SEMC, signal: 'ADDR, 10', pin_signal: GPIO_EMC_15}
  - {pin_num: '130', peripheral: SEMC, signal: 'ADDR, 11', pin_signal: GPIO_EMC_26}
  - {pin_num: '129', peripheral: SEMC, signal: 'ADDR, 12', pin_signal: GPIO_EMC_27}
  - {pin_num: '2', peripheral: SEMC, signal: 'BA, 0', pin_signal: GPIO_EMC_13}
  - {pin_num: '1', peripheral: SEMC, signal: 'BA, 1', pin_signal: GPIO_EMC_14}
  - {pin_num: '7', peripheral: SEMC, signal: semc_cas, pin_signal: GPIO_EMC_10}
  - {pin_num: '127', peripheral: SEMC, signal: semc_cke, pin_signal: GPIO_EMC_29}
  - {pin_num: '126', peripheral: SEMC, signal: semc_clk, pin_signal: GPIO_EMC_30}
  - {pin_num: '3', peripheral: SEMC, signal: 'CS, 0', pin_signal: GPIO_EMC_12}
  - {pin_num: '91', peripheral: SEMC, signal: 'CSX, 0', pin_signal: GPIO_AD_B1_01}
  - {pin_num: '18', peripheral: SEMC, signal: 'DATA, 00', pin_signal: GPIO_EMC_00}
  - {pin_num: '17', peripheral: SEMC, signal: 'DATA, 01', pin_signal: GPIO_EMC_01}
  - {pin_num: '16', peripheral: SEMC, signal: 'DATA, 02', pin_signal: GPIO_EMC_02}
  - {pin_num: '15', peripheral: SEMC, signal: 'DATA, 03', pin_signal: GPIO_EMC_03}
  - {pin_num: '14', peripheral: SEMC, signal: 'DATA, 04', pin_signal: GPIO_EMC_04}
  - {pin_num: '13', peripheral: SEMC, signal: 'DATA, 05', pin_signal: GPIO_EMC_05}
  - {pin_num: '12', peripheral: SEMC, signal: 'DATA, 06', pin_signal: GPIO_EMC_06}
  - {pin_num: '10', peripheral: SEMC, signal: 'DATA, 07', pin_signal: GPIO_EMC_07}
  - {pin_num: '124', peripheral: SEMC, signal: 'DATA, 08', pin_signal: GPIO_EMC_32}
  - {pin_num: '123', peripheral: SEMC, signal: 'DATA, 09', pin_signal: GPIO_EMC_33}
  - {pin_num: '122', peripheral: SEMC, signal: 'DATA, 10', pin_signal: GPIO_EMC_34}
  - {pin_num: '121', peripheral: SEMC, signal: 'DATA, 11', pin_signal: GPIO_EMC_35}
  - {pin_num: '120', peripheral: SEMC, signal: 'DATA, 12', pin_signal: GPIO_EMC_36}
  - {pin_num: '119', peripheral: SEMC, signal: 'DATA, 13', pin_signal: GPIO_EMC_37}
  - {pin_num: '118', peripheral: SEMC, signal: 'DATA, 14', pin_signal: GPIO_EMC_38}
  - {pin_num: '117', peripheral: SEMC, signal: 'DATA, 15', pin_signal: GPIO_EMC_39}
  - {pin_num: '9', peripheral: SEMC, signal: 'DM, 0', pin_signal: GPIO_EMC_08}
  - {pin_num: '125', peripheral: SEMC, signal: 'DM, 1', pin_signal: GPIO_EMC_31}
  - {pin_num: '128', peripheral: SEMC, signal: semc_dqs, pin_signal: GPIO_EMC_28}
  - {pin_num: '4', peripheral: SEMC, signal: semc_ras, pin_signal: GPIO_EMC_11}
  - {pin_num: '92', peripheral: SEMC, signal: semc_rdy, pin_signal: GPIO_AD_B1_00}
  - {pin_num: '8', peripheral: SEMC, signal: semc_we, pin_signal: GPIO_EMC_09}
  - {pin_num: '97', peripheral: ARM, signal: arm_trace_swo, pin_signal: GPIO_AD_B0_11}
  - {pin_num: '52', peripheral: GPIO5, signal: 'gpio_io, 00', pin_signal: WAKEUP}
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
  CLOCK_EnableClock(kCLOCK_IomuxcSnvs);       /* iomuxc_snvs clock (iomuxc_snvs_clk_enable): 0x03U */

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
      IOMUXC_GPIO_AD_B0_11_ARM_CM7_TRACE_SWO,  /* GPIO_AD_B0_11 is configured as ARM_CM7_TRACE_SWO */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_14_LPUART3_TX,        /* GPIO_AD_B0_14 is configured as LPUART3_TX */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_15_LPUART3_RX,        /* GPIO_AD_B0_15 is configured as LPUART3_RX */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_00_SEMC_READY,        /* GPIO_AD_B1_00 is configured as SEMC_READY */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_01_SEMC_CSX00,        /* GPIO_AD_B1_01 is configured as SEMC_CSX00 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_07_GPIO1_IO23,        /* GPIO_AD_B1_07 is configured as GPIO1_IO23 */
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
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_00_SEMC_DATA00,         /* GPIO_EMC_00 is configured as SEMC_DATA00 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_01_SEMC_DATA01,         /* GPIO_EMC_01 is configured as SEMC_DATA01 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_02_SEMC_DATA02,         /* GPIO_EMC_02 is configured as SEMC_DATA02 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_03_SEMC_DATA03,         /* GPIO_EMC_03 is configured as SEMC_DATA03 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_04_SEMC_DATA04,         /* GPIO_EMC_04 is configured as SEMC_DATA04 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_05_SEMC_DATA05,         /* GPIO_EMC_05 is configured as SEMC_DATA05 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_06_SEMC_DATA06,         /* GPIO_EMC_06 is configured as SEMC_DATA06 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_07_SEMC_DATA07,         /* GPIO_EMC_07 is configured as SEMC_DATA07 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_08_SEMC_DM00,           /* GPIO_EMC_08 is configured as SEMC_DM00 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_09_SEMC_WE,             /* GPIO_EMC_09 is configured as SEMC_WE */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_10_SEMC_CAS,            /* GPIO_EMC_10 is configured as SEMC_CAS */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_11_SEMC_RAS,            /* GPIO_EMC_11 is configured as SEMC_RAS */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_12_SEMC_CS0,            /* GPIO_EMC_12 is configured as SEMC_CS0 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_13_SEMC_BA0,            /* GPIO_EMC_13 is configured as SEMC_BA0 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_14_SEMC_BA1,            /* GPIO_EMC_14 is configured as SEMC_BA1 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_15_SEMC_ADDR10,         /* GPIO_EMC_15 is configured as SEMC_ADDR10 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_16_SEMC_ADDR00,         /* GPIO_EMC_16 is configured as SEMC_ADDR00 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_17_SEMC_ADDR01,         /* GPIO_EMC_17 is configured as SEMC_ADDR01 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_18_SEMC_ADDR02,         /* GPIO_EMC_18 is configured as SEMC_ADDR02 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_19_SEMC_ADDR03,         /* GPIO_EMC_19 is configured as SEMC_ADDR03 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_20_SEMC_ADDR04,         /* GPIO_EMC_20 is configured as SEMC_ADDR04 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_21_SEMC_ADDR05,         /* GPIO_EMC_21 is configured as SEMC_ADDR05 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_22_SEMC_ADDR06,         /* GPIO_EMC_22 is configured as SEMC_ADDR06 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_23_SEMC_ADDR07,         /* GPIO_EMC_23 is configured as SEMC_ADDR07 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_24_SEMC_ADDR08,         /* GPIO_EMC_24 is configured as SEMC_ADDR08 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_25_SEMC_ADDR09,         /* GPIO_EMC_25 is configured as SEMC_ADDR09 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_26_SEMC_ADDR11,         /* GPIO_EMC_26 is configured as SEMC_ADDR11 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_27_SEMC_ADDR12,         /* GPIO_EMC_27 is configured as SEMC_ADDR12 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_28_SEMC_DQS,            /* GPIO_EMC_28 is configured as SEMC_DQS */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_29_SEMC_CKE,            /* GPIO_EMC_29 is configured as SEMC_CKE */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_30_SEMC_CLK,            /* GPIO_EMC_30 is configured as SEMC_CLK */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_31_SEMC_DM01,           /* GPIO_EMC_31 is configured as SEMC_DM01 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_32_SEMC_DATA08,         /* GPIO_EMC_32 is configured as SEMC_DATA08 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_33_SEMC_DATA09,         /* GPIO_EMC_33 is configured as SEMC_DATA09 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_34_SEMC_DATA10,         /* GPIO_EMC_34 is configured as SEMC_DATA10 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_35_SEMC_DATA11,         /* GPIO_EMC_35 is configured as SEMC_DATA11 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_36_SEMC_DATA12,         /* GPIO_EMC_36 is configured as SEMC_DATA12 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_37_SEMC_DATA13,         /* GPIO_EMC_37 is configured as SEMC_DATA13 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_38_SEMC_DATA14,         /* GPIO_EMC_38 is configured as SEMC_DATA14 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_39_SEMC_DATA15,         /* GPIO_EMC_39 is configured as SEMC_DATA15 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_SNVS_WAKEUP_GPIO5_IO00,          /* WAKEUP is configured as GPIO5_IO00 */
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
