/*
	Copyright 2022 AUCOHL

	Author: Mohamed Shalan (mshalan@aucegypt.edu)

	Permission is hereby granted, free of charge, to any person obtaining
	a copy of this software and associated documentation files (the
	"Software"), to deal in the Software without restriction, including
	without limitation the rights to use, copy, modify, merge, publish,
	distribute, sublicense, and/or sell copies of the Software, and to
	permit persons to whom the Software is furnished to do so, subject to
	the following conditions:

	The above copyright notice and this permission notice shall be
	included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
	LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
	OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
	WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#ifndef MS_UARTREGS_H
#define MS_UARTREGS_H

 
/******************************************************************************
* Includes
******************************************************************************/
#include <stdint.h>

/******************************************************************************
* Macros and Constants
******************************************************************************/

#ifndef IO_TYPES
#define IO_TYPES
#define   __R     volatile const uint32_t
#define   __W     volatile       uint32_t
#define   __RW    volatile       uint32_t
#endif

#define MS_UART_RXDATA_REG_RXDATA_BIT	((uint32_t)0)
#define MS_UART_RXDATA_REG_RXDATA_MASK	((uint32_t)0x1ff)
#define MS_UART_RXDATA_REG_MAX_VALUE	((uint32_t)0x1FF)

#define MS_UART_TXDATA_REG_TXDATA_BIT	((uint32_t)0)
#define MS_UART_TXDATA_REG_TXDATA_MASK	((uint32_t)0x1ff)
#define MS_UART_TXDATA_REG_MAX_VALUE	((uint32_t)0x1FF)

#define MS_UART_PR_REG_PR_BIT	((uint32_t)0)
#define MS_UART_PR_REG_PR_MASK	((uint32_t)0xffff)
#define MS_UART_PR_REG_MAX_VALUE	((uint32_t)0xFFFF)

#define MS_UART_CTRL_REG_EN_BIT	((uint32_t)0)
#define MS_UART_CTRL_REG_EN_MASK	((uint32_t)0x1)
#define MS_UART_CTRL_REG_TXEN_BIT	((uint32_t)1)
#define MS_UART_CTRL_REG_TXEN_MASK	((uint32_t)0x2)
#define MS_UART_CTRL_REG_RXEN_BIT	((uint32_t)2)
#define MS_UART_CTRL_REG_RXEN_MASK	((uint32_t)0x4)
#define MS_UART_CTRL_REG_LPEN_BIT	((uint32_t)3)
#define MS_UART_CTRL_REG_LPEN_MASK	((uint32_t)0x8)
#define MS_UART_CTRL_REG_GFEN_BIT	((uint32_t)4)
#define MS_UART_CTRL_REG_GFEN_MASK	((uint32_t)0x10)
#define MS_UART_CTRL_REG_MAX_VALUE	((uint32_t)0x1F)

#define MS_UART_CFG_REG_WLEN_BIT	((uint32_t)0)
#define MS_UART_CFG_REG_WLEN_MASK	((uint32_t)0xf)
#define MS_UART_CFG_REG_STP2_BIT	((uint32_t)4)
#define MS_UART_CFG_REG_STP2_MASK	((uint32_t)0x10)
#define MS_UART_CFG_REG_PARITY_BIT	((uint32_t)5)
#define MS_UART_CFG_REG_PARITY_MASK	((uint32_t)0xe0)
#define MS_UART_CFG_REG_TIMEOUT_BIT	((uint32_t)8)
#define MS_UART_CFG_REG_TIMEOUT_MASK	((uint32_t)0x3f00)
#define MS_UART_CFG_REG_MAX_VALUE	((uint32_t)0x3FFF)

#define MS_UART_MATCH_REG_MATCH_BIT	((uint32_t)0)
#define MS_UART_MATCH_REG_MATCH_MASK	((uint32_t)0x1ff)
#define MS_UART_MATCH_REG_MAX_VALUE	((uint32_t)0x1FF)

#define MS_UART_RX_FIFO_LEVEL_REG_LEVEL_BIT	((uint32_t)0)
#define MS_UART_RX_FIFO_LEVEL_REG_LEVEL_MASK	((uint32_t)0xf)
#define MS_UART_RX_FIFO_LEVEL_REG_MAX_VALUE	((uint32_t)0xF)

#define MS_UART_RX_FIFO_THRESHOLD_REG_THRESHOLD_BIT	((uint32_t)0)
#define MS_UART_RX_FIFO_THRESHOLD_REG_THRESHOLD_MASK	((uint32_t)0xf)
#define MS_UART_RX_FIFO_THRESHOLD_REG_MAX_VALUE	((uint32_t)0xF)

#define MS_UART_RX_FIFO_FLUSH_REG_FLUSH_BIT	((uint32_t)0)
#define MS_UART_RX_FIFO_FLUSH_REG_FLUSH_MASK	((uint32_t)0x1)
#define MS_UART_RX_FIFO_FLUSH_REG_MAX_VALUE	((uint32_t)0x1)

#define MS_UART_TX_FIFO_LEVEL_REG_LEVEL_BIT	((uint32_t)0)
#define MS_UART_TX_FIFO_LEVEL_REG_LEVEL_MASK	((uint32_t)0xf)
#define MS_UART_TX_FIFO_LEVEL_REG_MAX_VALUE	((uint32_t)0xF)

#define MS_UART_TX_FIFO_THRESHOLD_REG_THRESHOLD_BIT	((uint32_t)0)
#define MS_UART_TX_FIFO_THRESHOLD_REG_THRESHOLD_MASK	((uint32_t)0xf)
#define MS_UART_TX_FIFO_THRESHOLD_REG_MAX_VALUE	((uint32_t)0xF)

#define MS_UART_TX_FIFO_FLUSH_REG_FLUSH_BIT	((uint32_t)0)
#define MS_UART_TX_FIFO_FLUSH_REG_FLUSH_MASK	((uint32_t)0x1)
#define MS_UART_TX_FIFO_FLUSH_REG_MAX_VALUE	((uint32_t)0x1)


#define MS_UART_TXE_FLAG	((uint32_t)0x1)
#define MS_UART_RXF_FLAG	((uint32_t)0x2)
#define MS_UART_TXB_FLAG	((uint32_t)0x4)
#define MS_UART_RXA_FLAG	((uint32_t)0x8)
#define MS_UART_BRK_FLAG	((uint32_t)0x10)
#define MS_UART_MATCH_FLAG	((uint32_t)0x20)
#define MS_UART_FE_FLAG	((uint32_t)0x40)
#define MS_UART_PRE_FLAG	((uint32_t)0x80)
#define MS_UART_OR_FLAG	((uint32_t)0x100)
#define MS_UART_RTO_FLAG	((uint32_t)0x200)


          
/******************************************************************************
* Typedefs and Enums
******************************************************************************/
          
typedef struct _MS_UART_TYPE_ {
	__R 	RXDATA;
	__W 	TXDATA;
	__W 	PR;
	__W 	CTRL;
	__W 	CFG;
	__R 	reserved_0[2];
	__W 	MATCH;
	__R 	reserved_1[16248];
	__R 	RX_FIFO_LEVEL;
	__W 	RX_FIFO_THRESHOLD;
	__W 	RX_FIFO_FLUSH;
	__R 	reserved_2[1];
	__R 	TX_FIFO_LEVEL;
	__W 	TX_FIFO_THRESHOLD;
	__W 	TX_FIFO_FLUSH;
	__R 	reserved_3[57];
	__RW	IM;
	__R 	MIS;
	__R 	RIS;
	__W 	IC;
	__W 	GCLK;
} MS_UART_TYPE;

typedef struct _MS_UART_TYPE_ *MS_UART_TYPE_PTR;     // Pointer to the register structure

  
/******************************************************************************
* Function Prototypes
******************************************************************************/



/******************************************************************************
* External Variables
******************************************************************************/




#endif

/******************************************************************************
* End of File
******************************************************************************/
          
          
