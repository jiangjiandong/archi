/*
 * Copyright (C) 2018 ETH Zurich, University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef __ARCHI_CHIPS_VIVOSOC3_1_PROPERTIES_H__
#define __ARCHI_CHIPS_VIVOSOC3_1_PROPERTIES_H__

/*
 * MEMORIES
 */ 

#define ARCHI_HAS_L2                   1
#define ARCHI_HAS_L1                   1

#define ARCHI_L1_SIZE                  32768



/*
 * MEMORY ALIAS
 */

#define ARCHI_HAS_L1_ALIAS             1
#define ARCHI_HAS_L2_ALIAS             1



/*
 * IP VERSIONS
 */

#define UDMA_VERSION        3
#define PERIPH_VERSION      2
#define TIMER_VERSION       2
#define SOC_EU_VERSION      2
#define APB_SOC_VERSION     2
#define STDOUT_VERSION      2
#define GPIO_VERSION        2
#define EU_VERSION          3
#define ITC_VERSION         1
#define RISCV_VERSION       4
#define MCHAN_VERSION       6
#define PADS_VERSION        2
#define FLL_VERSION			1


/*
 * CLUSTER
 */

#define ARCHI_HAS_CLUSTER   1
#define ARCHI_L1_TAS_BIT    20
#define ARCHI_CLUSTER_NB_PE 8



/*
 * HWS
 */

#define ARCHI_EU_NB_HW_MUTEX 1



/*
 * FC
 */

#define ARCHI_FC_CID        31
#define ARCHI_HAS_FC_ITC     1



/*
 * CLOCKS
 */

#define ARCHI_REF_CLOCK_LOG2 15
#define ARCHI_REF_CLOCK      (1<<ARCHI_REF_CLOCK_LOG2)

#define ARCHI_FLL_REF_CLOCK_SLOW 	(ARCHI_REF_CLOCK) 	// 32768Hz
#define ARCHI_FLL_REF_CLOCK_FAST 	(ARCHI_REF_CLOCK*500) // 16384000Hz


/*
 * UDMA
 */

#define ARCHI_UDMA_HAS_SPIM  1
#define ARCHI_UDMA_HAS_UART  1
#define ARCHI_UDMA_HAS_I2C   1
#define ARCHI_UDMA_HAS_ADC   1

#define ARCHI_UDMA_NB_SPIM  2
#define ARCHI_UDMA_NB_UART  2
#define ARCHI_UDMA_NB_I2C   1
#define ARCHI_UDMA_NB_ADC   3

#define ARCHI_UDMA_SPIM_ID(id)            (0 + (id))
#define ARCHI_UDMA_UART_ID(id)            (2 + (id))
#define ARCHI_UDMA_I2C_ID(id)             (5 + (id))
#define ARCHI_UDMA_ADC_ID(id)             (6 + (id))

#define ARCHI_NB_PERIPH                   9


/*
 * FLLS
*/

#define ARCHI_NB_FLL  3





/*
 * SOC EVENTS
 */

#define ARCHI_SOC_EVENT_PERIPH_EVT_NB     160

#define ARCHI_SOC_EVENT_SW_NB    	 (8)

#define ARCHI_SOC_EVENT_NB_TOTAL     256

#define ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT_LOG2 2
#define ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT (1<<ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT_LOG2)
#define ARCHI_SOC_EVENT_UDMA_FIRST_EVT    0
#define ARCHI_SOC_EVENT_UDMA_NB_EVT       (ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_NB_PERIPH)
#define ARCHI_SOC_EVENT_UDMA_NB_TGEN_EVT  6


#define ARCHI_SOC_EVENT_PERIPH_FIRST_EVT(x)     ((x)*ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT)

#define ARCHI_SOC_EVENT_SPIM0_RX          0
#define ARCHI_SOC_EVENT_SPIM0_TX          1
#define ARCHI_SOC_EVENT_SPIM0_CMD         2
#define ARCHI_SOC_EVENT_SPIM0_EOT         3

#define ARCHI_SOC_EVENT_SPIM1_RX          4
#define ARCHI_SOC_EVENT_SPIM1_TX          5
#define ARCHI_SOC_EVENT_SPIM1_CMD         6
#define ARCHI_SOC_EVENT_SPIM1_EOT         7

#define ARCHI_SOC_EVENT_UART0_RX          8
#define ARCHI_SOC_EVENT_UART0_TX          9
#define ARCHI_SOC_EVENT_UART0_EOT         10
#define ARCHI_SOC_EVENT_UART0_RX_DATA     11

#define ARCHI_SOC_EVENT_UART1_RX          12
#define ARCHI_SOC_EVENT_UART1_TX          13
#define ARCHI_SOC_EVENT_UART1_EOT         14
#define ARCHI_SOC_EVENT_UART1_RX_DATA     15

#define ARCHI_SOC_EVENT_UART2_RX          16
#define ARCHI_SOC_EVENT_UART2_TX          17
#define ARCHI_SOC_EVENT_UART2_EOT         18
#define ARCHI_SOC_EVENT_UART2_RX_DATA     19

#define ARCHI_SOC_EVENT_I2C0_RX           20
#define ARCHI_SOC_EVENT_I2C0_TX           21


#define ARCHI_SOC_EVENT_SW_EVENT0         160
#define ARCHI_SOC_EVENT_SW_EVENT1         161
#define ARCHI_SOC_EVENT_SW_EVENT2         162
#define ARCHI_SOC_EVENT_SW_EVENT3         163
#define ARCHI_SOC_EVENT_SW_EVENT4         164
#define ARCHI_SOC_EVENT_SW_EVENT5         165
#define ARCHI_SOC_EVENT_SW_EVENT6         166
#define ARCHI_SOC_EVENT_SW_EVENT7         167
#define ARCHI_SOC_EVENT_REFCLK            168  


/*
 * CLUSTER EVENTS
 */

#define ARCHI_CL_EVT_DMA0        8
#define ARCHI_CL_EVT_DMA1        9
#define ARCHI_EVT_TIMER0      10
#define ARCHI_EVT_TIMER1      11
#define ARCHI_CL_EVT_ACC0        12
#define ARCHI_CL_EVT_ACC1        13
#define ARCHI_CL_EVT_ACC2        14
#define ARCHI_CL_EVT_ACC3        15
#define ARCHI_CL_EVT_BAR         16
#define ARCHI_CL_EVT_MUTEX       17
#define ARCHI_CL_EVT_DISPATCH    18
#define ARCHI_EVT_MPU_ERROR   28
#define ARCHI_CL_EVT_SOC_EVT     30
#define ARCHI_EVT_SOC_FIFO    31



/*
 * FC EVENTS
 */

#define ARCHI_FC_EVT_FIRST_SW   0
#define ARCHI_FC_EVT_NB_SW      8
#define ARCHI_FC_EVT_TIMER0_LO     10
#define ARCHI_FC_EVT_TIMER0_HI     11
#define ARCHI_FC_EVT_CLK_REF    14
#define ARCHI_FC_EVT_GPIO       15
#define ARCHI_FC_EVT_RTC        16
#define ARCHI_FC_EVT_ADV_TIMER0 17
#define ARCHI_FC_EVT_ADV_TIMER1 18
#define ARCHI_FC_EVT_ADV_TIMER2 19
#define ARCHI_FC_EVT_ADV_TIMER3 20
#define ARCHI_FC_EVT_CLUSTER_NOT_BUSY 21
#define ARCHI_FC_EVT_CLUSTER_POK      22
#define ARCHI_FC_EVT_CLUSTER_CG_OK    23
#define ARCHI_FC_EVT_PICL_OK          24
#define ARCHI_FC_EVT_SCU_OK           25
#define ARCHI_FC_EVT_SOC_EVT          26
#define ARCHI_FC_EVT_QUEUE_ERROR      29


#endif
