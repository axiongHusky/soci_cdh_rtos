/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_B0_07 (number 101), UART1_RXD/J17[4] */
/* Routed pin properties */
#define BOARD_INITPINS_UART1_RXD_PERIPHERAL                              LPUART1   /*!< Peripheral name */
#define BOARD_INITPINS_UART1_RXD_SIGNAL                                       RX   /*!< Signal name */

/* GPIO_AD_B0_06 (number 105), UART1_TXD/J17[6] */
/* Routed pin properties */
#define BOARD_INITPINS_UART1_TXD_PERIPHERAL                              LPUART1   /*!< Peripheral name */
#define BOARD_INITPINS_UART1_TXD_SIGNAL                                       TX   /*!< Signal name */

/* GPIO_AD_B0_04 (number 107), JTAG_TDO/J16[13]/ENET_RST/U11[32] */
/* Routed pin properties */
#define BOARD_INITPINS_ENET_RST_PERIPHERAL                                  JTAG   /*!< Peripheral name */
#define BOARD_INITPINS_ENET_RST_SIGNAL                                       TDO   /*!< Signal name */

/* GPIO_AD_B0_15 (number 93), ENET_TXD1/U11[25]/J19[2] */
/* Routed pin properties */
#define BOARD_INITPINS_ENET_TXD1_PERIPHERAL                              LPUART3   /*!< Peripheral name */
#define BOARD_INITPINS_ENET_TXD1_SIGNAL                                       RX   /*!< Signal name */

/* GPIO_AD_B0_14 (number 94), ENET_TXD0/U11[24]/J17[7] */
/* Routed pin properties */
#define BOARD_INITPINS_ENET_TXD0_PERIPHERAL                              LPUART3   /*!< Peripheral name */
#define BOARD_INITPINS_ENET_TXD0_SIGNAL                                       TX   /*!< Signal name */

/* GPIO_AD_B0_08 (number 100), ENET_TX_CLK/U11[9] */
/* Routed pin properties */
#define BOARD_INITPINS_ENET_TX_CLK_PERIPHERAL                             LPI2C3   /*!< Peripheral name */
#define BOARD_INITPINS_ENET_TX_CLK_SIGNAL                                    SCL   /*!< Signal name */

/* GPIO_AD_B0_09 (number 99), ENET_RXD1/U11[15]/J17[3] */
/* Routed pin properties */
#define BOARD_INITPINS_ENET_RXD1_PERIPHERAL                               LPI2C3   /*!< Peripheral name */
#define BOARD_INITPINS_ENET_RXD1_SIGNAL                                      SDA   /*!< Signal name */

/* GPIO_EMC_16 (number 142), SEMC_A0/U14[23]/BOOT_MODE[0] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A0_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A0_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A0_CHANNEL                                        0U   /*!< Signal channel */

/* GPIO_EMC_17 (number 141), SEMC_A1/U14[24]/BOOT_MODE[1] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A1_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A1_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A1_CHANNEL                                        1U   /*!< Signal channel */

/* GPIO_EMC_18 (number 140), SEMC_A2/U14[25]/BT_CFG[0] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A2_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A2_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A2_CHANNEL                                        2U   /*!< Signal channel */

/* GPIO_EMC_19 (number 139), SEMC_A3/U14[26]/BT_CFG[1] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A3_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A3_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A3_CHANNEL                                        3U   /*!< Signal channel */

/* GPIO_EMC_20 (number 138), SEMC_A4/U14[29]/BT_CFG[2] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A4_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A4_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A4_CHANNEL                                        4U   /*!< Signal channel */

/* GPIO_EMC_21 (number 137), SEMC_A5/U14[30]/BT_CFG[3] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A5_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A5_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A5_CHANNEL                                        5U   /*!< Signal channel */

/* GPIO_EMC_22 (number 136), SEMC_A6/U14[31]/BT_CFG[4] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A6_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A6_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A6_CHANNEL                                        6U   /*!< Signal channel */

/* GPIO_EMC_23 (number 133), SEMC_A7/U14[32]/BT_CFG[5] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A7_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A7_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A7_CHANNEL                                        7U   /*!< Signal channel */

/* GPIO_EMC_24 (number 132), SEMC_A8/U14[33]/BT_CFG[6] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A8_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A8_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A8_CHANNEL                                        8U   /*!< Signal channel */

/* GPIO_EMC_25 (number 131), SEMC_A9/U14[34]/BT_CFG[7] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A9_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A9_SIGNAL                                       ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A9_CHANNEL                                        9U   /*!< Signal channel */

/* GPIO_EMC_15 (number 143), SEMC_A10/U14[22] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A10_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A10_SIGNAL                                      ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A10_CHANNEL                                      10U   /*!< Signal channel */

/* GPIO_EMC_26 (number 130), SEMC_A11/U14[35]/BT_CFG[8] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A11_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A11_SIGNAL                                      ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A11_CHANNEL                                      11U   /*!< Signal channel */

/* GPIO_EMC_27 (number 129), SEMC_A12/U14[36]/BT_CFG[9] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_A12_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_A12_SIGNAL                                      ADDR   /*!< Signal name */
#define BOARD_INITPINS_SEMC_A12_CHANNEL                                      12U   /*!< Signal channel */

/* GPIO_EMC_13 (number 2), SEMC_BA0/U14[20] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_BA0_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_BA0_SIGNAL                                        BA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_BA0_CHANNEL                                       0U   /*!< Signal channel */

/* GPIO_EMC_14 (number 1), SEMC_BA1/U14[21] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_BA1_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_BA1_SIGNAL                                        BA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_BA1_CHANNEL                                       1U   /*!< Signal channel */

/* GPIO_EMC_10 (number 7), SEMC_CAS/U14[17] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_CAS_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_CAS_SIGNAL                                  semc_cas   /*!< Signal name */

/* GPIO_EMC_29 (number 127), SEMC_CKE/U14[37] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_CKE_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_CKE_SIGNAL                                  semc_cke   /*!< Signal name */

/* GPIO_EMC_30 (number 126), SEMC_CLK/U14[38] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_CLK_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_CLK_SIGNAL                                  semc_clk   /*!< Signal name */

/* GPIO_EMC_12 (number 3), SEMC_CS0/U14[19] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_CS0_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_CS0_SIGNAL                                        CS   /*!< Signal name */
#define BOARD_INITPINS_SEMC_CS0_CHANNEL                                       0U   /*!< Signal channel */

/* GPIO_EMC_00 (number 18), SEMC_D0/U14[2] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D0_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D0_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D0_CHANNEL                                        0U   /*!< Signal channel */

/* GPIO_EMC_01 (number 17), SEMC_D1/U14[4] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D1_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D1_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D1_CHANNEL                                        1U   /*!< Signal channel */

/* GPIO_EMC_02 (number 16), SEMC_D2/U14[5] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D2_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D2_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D2_CHANNEL                                        2U   /*!< Signal channel */

/* GPIO_EMC_03 (number 15), SEMC_D3/U14[7] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D3_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D3_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D3_CHANNEL                                        3U   /*!< Signal channel */

/* GPIO_EMC_04 (number 14), SEMC_D4/U14[8] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D4_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D4_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D4_CHANNEL                                        4U   /*!< Signal channel */

/* GPIO_EMC_05 (number 13), SEMC_D5/U14[10] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D5_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D5_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D5_CHANNEL                                        5U   /*!< Signal channel */

/* GPIO_EMC_06 (number 12), SEMC_D6/U14[11] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D6_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D6_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D6_CHANNEL                                        6U   /*!< Signal channel */

/* GPIO_EMC_07 (number 10), SEMC_D7/U14[13] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D7_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D7_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D7_CHANNEL                                        7U   /*!< Signal channel */

/* GPIO_EMC_32 (number 124), SEMC_D8/U14[42] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D8_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D8_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D8_CHANNEL                                        8U   /*!< Signal channel */

/* GPIO_EMC_33 (number 123), SEMC_D9/U14[44] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D9_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D9_SIGNAL                                       DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D9_CHANNEL                                        9U   /*!< Signal channel */

/* GPIO_EMC_34 (number 122), SEMC_D10/U14[45] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D10_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D10_SIGNAL                                      DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D10_CHANNEL                                      10U   /*!< Signal channel */

/* GPIO_EMC_35 (number 121), SEMC_D11/U14[47] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D11_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D11_SIGNAL                                      DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D11_CHANNEL                                      11U   /*!< Signal channel */

/* GPIO_EMC_36 (number 120), SEMC_D12/U14[48] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D12_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D12_SIGNAL                                      DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D12_CHANNEL                                      12U   /*!< Signal channel */

/* GPIO_EMC_37 (number 119), SEMC_D13/U14[50] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D13_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D13_SIGNAL                                      DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D13_CHANNEL                                      13U   /*!< Signal channel */

/* GPIO_EMC_38 (number 118), SEMC_D14/U14[51] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D14_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D14_SIGNAL                                      DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D14_CHANNEL                                      14U   /*!< Signal channel */

/* GPIO_EMC_39 (number 117), SEMC_D15/U14[53] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_D15_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_D15_SIGNAL                                      DATA   /*!< Signal name */
#define BOARD_INITPINS_SEMC_D15_CHANNEL                                      15U   /*!< Signal channel */

/* GPIO_EMC_08 (number 9), SEMC_DM0/U14[15] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_DM0_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_DM0_SIGNAL                                        DM   /*!< Signal name */
#define BOARD_INITPINS_SEMC_DM0_CHANNEL                                       0U   /*!< Signal channel */

/* GPIO_EMC_31 (number 125), SEMC_DM1/U14[39] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_DM1_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_DM1_SIGNAL                                        DM   /*!< Signal name */
#define BOARD_INITPINS_SEMC_DM1_CHANNEL                                       1U   /*!< Signal channel */

/* GPIO_EMC_28 (number 128), SEMC_DQS */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_DQS_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_DQS_SIGNAL                                  semc_dqs   /*!< Signal name */

/* GPIO_EMC_11 (number 4), SEMC_RAS/U14[18] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_RAS_PERIPHERAL                                  SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_RAS_SIGNAL                                  semc_ras   /*!< Signal name */

/* GPIO_EMC_09 (number 8), SEMC_WE/U14[16] */
/* Routed pin properties */
#define BOARD_INITPINS_SEMC_WE_PERIPHERAL                                   SEMC   /*!< Peripheral name */
#define BOARD_INITPINS_SEMC_WE_SIGNAL                                    semc_we   /*!< Signal name */

/* GPIO_AD_B0_11 (number 97), ENET_CRS_DV/U11[18]/J19[3] */
/* Routed pin properties */
#define BOARD_INITPINS_ENET_CRS_DV_PERIPHERAL                                ARM   /*!< Peripheral name */
#define BOARD_INITPINS_ENET_CRS_DV_SIGNAL                          arm_trace_swo   /*!< Signal name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
