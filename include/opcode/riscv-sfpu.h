#ifndef RISCV_SFPU_H
#define RISCV_SFPU_H

/* Field names for SFPU instructions */
#define OP_SH_SFPU_OP		        24
#define OP_MASK_SFPU_OP			0xff
#define OP_SH_YMULADD_SRCA 		16
#define OP_MASK_YMULADD_SRCA 		0xf
#define OP_SH_YMULADD_SRCB 		12
#define OP_MASK_YMULADD_SRCB 		0xf
#define OP_SH_YMULADD_SRCC 		8
#define OP_MASK_YMULADD_SRCC 		0xf
#define OP_SH_YMULADD_DEST 		4
#define OP_MASK_YMULADD_DEST 		0xf
#define OP_SH_YMULADD_INSTR_MOD0	0
#define OP_MASK_YMULADD_INSTR_MOD0	0xf

#define OP_SH_YLOADSTORE_RD		20
#define OP_MASK_YLOADSTORE_RD		0xf
#define OP_SH_YLOADSTORE_INSTR_MOD0	16
#define OP_MASK_YLOADSTORE_INSTR_MOD0	0xf
#define OP_SH_YDEST_REG_ADDR		0
#define OP_MASK_YDEST_REG_ADDR		0xffff

#define OP_SH_YMULI_IMM16_MATH		8
#define OP_MASK_YMULI_IMM16_MATH	0xffff
#define OP_SH_LMULI_IMM16_MATH          0
#define OP_MASK_LMULI_IMM16_MATH        0xffff

#define OP_SH_YCC_IMM12_MATH		12
#define OP_MASK_YCC_IMM12_MATH		0xfff
#define OP_SH_YCC_LREG_C		8
#define OP_MASK_YCC_LREG_C		0xf
#define OP_SH_YCC_LREG_DEST		4
#define OP_MASK_YCC_LREG_DEST		0xf
#define OP_SH_YCC_INSTR_MOD1		0
#define OP_MASK_YCC_INSTR_MOD1		0xf
#define OP_SH_LCC_LREG_A                16
#define OP_MASK_LCC_LREG_A              0xff
#define OP_SH_LCC_LREG_B                4
#define OP_MASK_LCC_LREG_B              0xfff
#define OP_SH_L_LREG_DEST               4
#define OP_MASK_L_LREG_DEST             0xfffff
#define OP_SH_L_ADDR_MODE      		14 
#define OP_MASK_L_ADDR_MODE    		0x7 
#define OP_SH_L_ADDR_MODE_2      	14  
#define OP_MASK_L_ADDR_MODE_2   	0x1f
#define OP_SH_L_DEST_2                  0   
#define OP_MASK_L_DEST_2                0x7ff
#define OP_SH_L_CFG_CONTEXT             21  
#define OP_MASK_L_CFG_CONTEXT           0x7
#define OP_SH_L_ROW_PAD_ZERO            18 
#define OP_MASK_L_ROW_PAD_ZERO          0x7
#define OP_SH_L_DEST_ACCESS_MODE        17 
#define OP_MASK_L_DEST_ACCESS_MODE      0x1
#define OP_SH_L_ADDR_MODE_3             15 
#define OP_MASK_L_ADDR_MODE_3           0x3
#define OP_SH_L_ADDR_CNT_CONTEXT        13 
#define OP_MASK_L_ADDR_CNT_CONTEXT      0x3
#define OP_SH_L_ZERO_WRITE              12 
#define OP_MASK_L_ZERO_WRITE            0x1
#define OP_SH_L_READ_INTF_SEL           8  
#define OP_MASK_L_READ_INTF_SEL         0xf
#define OP_SH_L_OVERTHREAD_ID           7   
#define OP_MASK_L_OVERTHREAD_ID         0x1
#define OP_SH_L_CTXT_CTRL               2   
#define OP_MASK_L_CTXT_CTRL             0x3
#define OP_SH_L_UNUSED                  12   
#define OP_MASK_L_UNUSED                0x3ff
#define OP_SH_L_DISABLE_STALL           10 
#define OP_MASK_L_DISABLE_STALL         0x3
#define OP_SH_L_ADDR_SEL                8   
#define OP_MASK_L_ADDR_SEL              0x3
#define OP_SH_L_STREAM_ID               2   
#define OP_MASK_L_STREAM_ID             0x3f
#define OP_SH_L_ADDRMODE_3              14
#define OP_MASK_L_ADDRMODE_3            0x3ff
#define OP_SH_L_ROT_SHIFT               10   
#define OP_MASK_L_ROT_SHIFT             0xf
#define OP_SH_L_CFG_CONTEXT_CNT_INC     13 
#define OP_MASK_L_CFG_CONTEXT_CNT_INC   0x3
#define OP_SH_L_ADDR_CNT_CONTEXT_ID     8
#define OP_MASK_L_ADDR_CNT_CONTEXT_ID   0x3
#define OP_SH_L_SRC_BCAST               5
#define OP_MASK_L_SRC_BCAST             0x1
#define OP_SH_L_ZERO_WRITE_2            4   
#define OP_MASK_L_ZERO_WRITE_2          0x1
#define OP_SH_L_STREAM_ID_2             16 
#define OP_MASK_L_STREAM_ID_2           0x7f
#define OP_SH_L_MSG_CLR_CNT             12 
#define OP_MASK_L_MSG_CLR_CNT           0xf
#define OP_SH_L_SETDVALID               8 
#define OP_MASK_L_SETDVALID             0xf
#define OP_SH_L_CLR_TO_FMT_CNTRL        6  
#define OP_MASK_L_CLR_TO_FMT_CNTRL      0x3
#define OP_SH_L_STALL_CLR_CNTRL         5  
#define OP_MASK_L_STALL_CLR_CNTRL       0x1
#define OP_SH_L_BANK_CLR_CNTRL          4  
#define OP_MASK_L_BANK_CLR_CNTRL        0x1
#define OP_SH_L_SRC_CLR_CNTRL           2 
#define OP_MASK_L_SRC_CLR_CNTRL         0x3
#define OP_SH_L_UNPACK_POP              0  
#define OP_MASK_L_UNPACK_POP            0x3
#define OP_SH_L_DISABLE_MASK_OLD_VALUE     23
#define OP_MASK_L_DISABLE_MASK_OLD_VALUE   0x1
#define OP_SH_L_OPERATION           	20
#define OP_MASK_L_OPERATION   		0x7
#define OP_SH_L_MASK_WIDTH     		15
#define OP_MASK_L_MASK_WIDTH  		0x1f
#define OP_SH_L_RIGHT_CSHIFT_AMT     	10
#define OP_MASK_L_RIGHT_CSHIFT_AMT   	0x1f
#define OP_SH_L_SCRATCH_SEL     	8
#define OP_MASK_L_SCRATCH_SEL   	0x3
#define OP_SH_L_CFG_REG     		0
#define OP_MASK_L_CFG_REG   		0xff
#define OP_SH_L_LINGER_TIME     	13
#define OP_MASK_L_LINGER_TIME   	0x7ff
#define OP_SH_L_RESOURCE     		4
#define OP_MASK_L_RESOURCE   		0x1ff
#define OP_SH_L_OP_CLASS     		0
#define OP_MASK_L_OP_CLASS    		0xf
#define OP_SH_L_TARGET_VALUE     	4
#define OP_MASK_L_TARGET_VALUE  	0x7ff
#define OP_SH_L_TARGET_SEL       	3
#define OP_MASK_L_TARGET_SEL  		0x1
#define OP_SH_L_WAIT_STREAM_SEL    	0
#define OP_MASK_L_WAIT_STREAM_SEL  	0x7
#define OP_SH_L_STREAM_ID_SEL    	21
#define OP_MASK_L_STREAM_ID_SEL  	0x7
#define OP_SH_L_STREAM_REG_ADDR    	11
#define OP_MASK_L_STREAM_REG_ADDR  	0x3ff
#define OP_SH_L_CFG_REG_2     		0
#define OP_MASK_L_CFG_REG_2   		0x7ff

#define OP_SH_WLOADSTORE_DEST_REG_ADDR   0
#define OP_MASK_WLOADSTORE_DEST_REG_ADDR 0x3fff
#define OP_SH_WLOADSTORE_ADDR_MODE       14
#define OP_MASK_WLOADSTORE_ADDR_MODE     0x3
#define OP_SH_L_32BIT_MODE       18
#define OP_MASK_L_32BIT_MODE     0x1
#define OP_SH_L_CLR_ZERO_FLAGS   17
#define OP_MASK_L_CLR_ZERO_FLAGS 0x1
#define OP_SH_L_ADDR_MODE_4   14
#define OP_MASK_L_ADDR_MODE_4 0x7
#define OP_SH_L_WHERE   0
#define OP_MASK_L_WHERE 0x3fff
#define OP_SH_L_INSTRMODE     11
#define OP_MASK_L_INSTRMODE   0x7


#define OP_SH_WINCRWC_RWC_A       6
#define OP_MASK_WINCRWC_RWC_A     0xf
#define OP_SH_WINCRWC_RWC_B       10
#define OP_MASK_WINCRWC_RWC_B     0xf
#define OP_SH_WINCRWC_RWC_CR      18
#define OP_MASK_WINCRWC_RWC_CR    0x3f
#define OP_SH_WINCRWC_RWC_D       14
#define OP_MASK_WINCRWC_RWC_D     0xf

#define OP_SH_WREPLAY_LOAD_MODE       	0
#define OP_MASK_WREPLAY_LOAD_MODE     	0x1
#define OP_SH_WREPLAY_EXEC_WHILE_LOAD   1
#define OP_MASK_WREPLAY_EXEC_WHILE_LOAD 0x7
#define OP_SH_WREPLAY_LEN       	4
#define OP_MASK_WREPLAY_LEN     	0x3ff
#define OP_SH_WREPLAY_START_IDX       	14
#define OP_MASK_WREPLAY_START_IDX     	0x3ff

#define OP_SH_WSTOCH_RND_MODE		21
#define OP_MASK_WSTOCH_RND_MODE		0x1
#define OP_SH_WSTOCH_RND_IMM8_MATH	16
#define OP_MASK_WSTOCH_RND_IMM8_MATH	0x1f

/* DMA REG Operands */
#define OP_SH_DMA_REG_OP_A		0
#define OP_MASK_DMA_REG_OP_A		0x3f
#define OP_SH_DMA_REG_OP_B		6
#define OP_MASK_DMA_REG_OP_B		0x3f
#define OP_SH_DMA_REG_OP_RES		12
#define OP_MASK_DMA_REG_OP_RES		0x3f
#define OP_SH_DMA_REG_OP_OPSEL		18
#define OP_MASK_DMA_REG_OP_OPSEL	0x1f
#define OP_SH_DMA_REG_OP_B_ISCONST	23
#define OP_MASK_DMA_REG_OP_B_ISCONST	0x1
#define OP_SH_PAYLOAD_SIGSEL_SIZE	22
#define OP_MASK_PAYLOAD_SIGSEL_SIZE	0x3
#define OP_SH_PAYLOAD_SIGSEL		8
#define OP_MASK_PAYLOAD_SIGSEL		0x3fff
#define OP_SH_SET_SIG_MODE		7
#define OP_MASK_SET_SIG_MODE		0x1
#define OP_SH_REG_INDEX16B		0
#define OP_MASK_REG_INDEX16B		0x7f
#define OP_SH_CNT_SET_MASK		21
#define OP_MASK_CNT_SET_MASK		0x7
#define OP_SH_CH1_Y			15
#define OP_MASK_CH1_Y			0x3f
#define OP_SH_CH1_X			12
#define OP_MASK_CH1_X			0x7
#define OP_SH_CH0_Y			9
#define OP_MASK_CH0_Y			0x7
#define OP_SH_CH0_X			6
#define OP_MASK_CH0_X			0x7
#define OP_SH_BIT_MASK			0
#define OP_MASK_BIT_MASK		0x3f
#define OP_SH_CLEAR_DVALID		22
#define OP_MASK_CLEAR_DVALID		0x3
#define OP_SH_ADDR_MODE			15
#define OP_MASK_ADDR_MODE		0x7f
#define OP_SH_INDEX_EN			14
#define OP_MASK_INDEX_EN		0x1
#define OP_SH_DST			0
#define OP_MASK_DST			0x3fff
#define OP_SH_MEMHIER_SEL		23
#define OP_MASK_MEMHIER_SEL		0x1
#define OP_SH_SWAP_OR_INCR_VAL		18
#define OP_MASK_SWAP_OR_INCR_VAL	0xf
#define OP_SH_WRAP_VAL_OR_SWAP_MASK	14
#define OP_MASK_WRAP_VAL_OR_SWAP_MASK   0x1ff
#define OP_SH_SEL32B			12
#define OP_MASK_SEL32B			0x3
#define OP_SH_DATA_REG_IDX		6
#define OP_MASK_DATA_REG_IDX		0x3f
#define OP_SH_ADDR_REG_IDX		0
#define OP_MASK_ADDR_REG_IDX		0x3f
#define OP_SH_NO_INCR			22
#define OP_MASK_NO_INCR			0x1
#define OP_SH_MUTEX_IDX	                0
#define OP_MASK_MUTEX_IDX               0xffffff
#define OP_SH_RESET                     0
#define OP_MASK_RESET                   0x3fffff
#define OP_SH_ROTATE_WEIGHTS            17
#define OP_MASK_ROTATE_WEIGHTS          0xf
#define OP_SH_ADDRMODE                  15
#define OP_MASK_ADDRMODE                0X3
#define OP_SH_DST_15BIT                 0
#define OP_MASK_DST_15BIT               0x7fff
#define OP_SH_DEST_ACCUM_EN             21
#define OP_MASK_DEST_ACCUM_EN           0x1
#define OP_SH_INSTR_MOD19               19
#define OP_MASK_INSTR_MOD19             0x3
#define OP_SH_EL_ADDRMODE                 15
#define OP_MASK_EL_ADDRMODE		0xf
#define OP_SH_FLUSH_SPEC                0
#define OP_MASK_FLUSH_SPEC		0xffffff
#define OP_SH_INSTRMOD19                19
#define OP_MASK_INSTRMOD19              0x7
#define OP_SH_MAX_POOL_INDEX_EN		14
#define OP_MASK_MAX_POOL_INDEX_EN	0x1
#define OP_SH_RESET_SRCB_GATE_CONTROL   1
#define OP_MASK_RESET_SRCB_GATE_CONTROL 0x7fffff
#define OP_SH_RESET_SRCA_GATE_CONTROL   0
#define OP_MASK_RESET_SRCA_GATE_CONTROL 0x1
#define OP_SH_CNT_SET_MASK		21
#define OP_MASK_CNT_SET_MASK		0x7
#define OP_SH_RWC_CR			18
#define OP_MASK_RWC_CR		       	0xf
#define OP_SH_RWC_D                    	14
#define OP_MASK_RWC_D                  	0xf
#define OP_SH_RWC_B                    	14
#define OP_MASK_RWC_B                  	0xf
#define OP_SH_RWC_A                    	6
#define OP_MASK_RWC_A                  	0xf
#define OP_SH_SIZE_SEL			22
#define OP_MASK_SIZE_SEL		0x3
#define OP_SH_OFFSET_INDEX		14
#define OP_MASK_OFFSET_INDEX		0xff
#define OP_SH_AUTO_INC_SPEC		12
#define OP_MASK_AUTO_INC_SPEC		0x3
#define OP_SH_TDMA_DATA_REG_IDX		18
#define OP_MASK_TDMA_DATA_REG_IDX	0x3f
#define OP_SH_REGADDR			0
#define OP_MASK_REGADDR			0x3ffff
#define OP_SH_ROTATEWEIGHTS		17
#define OP_MASK_ROTATEWEIGHTS		0x1f
#define OP_SH_MOP_TYPE			23
#define OP_MASK_MOP_TYPE		0x1
#define OP_SH_LOOP_COUNT		16
#define OP_MASK_LOOP_COUNT		0x7f
#define OP_SH_ZMASK_LO16		0	
#define OP_MASK_ZMASK_LO16		0xffff
#define OP_SH_ZMASK_HI16		0
#define OP_MASK_ZMASK_HI16		0xffffff
#define OP_SH_DEST_32B_LO		23
#define OP_MASK_DEST_32B_LO		0x1
#define OP_SH_SRC			17
#define OP_MASK_SRC			0x3f
#define OP_SH_INSTRMODE			12
#define OP_MASK_INSTRMODE		0x3
#define OP_SH_DST_MOV			0
#define OP_MASK_DST_MOV			0xfff
#define OP_SH_SRCA			17
#define OP_MASK_SRCA			0x7f
#define OP_SH_SRCB			0
#define OP_MASK_SRCB		  	0xfff
#define OP_SH_ADDRMODE_PACR		15
#define OP_MASK_ADDRMODE_PACR		0x1ff
#define OP_SH_ZERO_WRITE		12
#define OP_MASK_ZERO_WRITE		0x7
#define OP_SH_OVRD_TREAD_ID		7
#define OP_MASK_OVRD_TREAD_ID		0x1
#define OP_SH_CONCAT			4
#define OP_MASK_CONCAT			0x7
#define OP_SH_FLUSH			1
#define OP_MASK_FLUSH			0x7
#define OP_SH_LAST			0
#define OP_MASK_LAST			0x1
#define OP_SH_PUSH			23
#define OP_MASK_PUSH			0x1
#define OP_SH_ADDR_SEL			22	
#define OP_MASK_ADDR_SEL		0x1
#define OP_SH_WR_DATA			12 
#define OP_MASK_WR_DATA			0x3ff
#define OP_SH_PACK_SEL			8
#define OP_MASK_PACK_SEL		0xf
#define OP_SH_STREAM_ID			2
#define OP_MASK_STREAM_ID		0x3f
#define OP_SH_FLUSH_SET			1 
#define OP_MASK_FLUSH_SET		0x1
#define OP_SH_GPR_ADDRESS		16
#define OP_MASK_GPR_ADDRESS		0xff
#define OP_SH_CFG_REG			0
#define OP_MASK_CFG_REG			0xffff
#define OP_SH_TARGET_SEL		20
#define OP_MASK_TARGET_SEL		0x3
#define OP_SH_BYTE_OFFSET		18
#define OP_MASK_BYTE_OFFSET		0x3
#define OP_SH_CONTEXTID_2		16
#define OP_MASK_CONTEXTID_2		0x3
#define OP_SH_FLOP_INDEX		6 
#define OP_MASK_FLOP_INDEX		0x3ff
#define OP_SH_REG_INDEX			0
#define OP_MASK_REG_INDEX		0x3f
#define OP_SH_START_IDX			14
#define OP_MASK_START_IDX		0x3ff
#define OP_SH_LEN			4
#define OP_MASK_LEN			0x3ff
#define OP_SH_EXECUTE_WHILE_LOADING	1
#define OP_MASK_EXECUTE_WHILE_LOADING	0x7
#define OP_SH_LOAD_MODE			0
#define OP_MASK_LOAD_MODE		0x1
#define OP_SH_MASK			16
#define OP_MASK_MASK			0xff
#define OP_SH_DATA			8
#define OP_MASK_DATA			0xff
#define OP_SH_CFG_REG_ADDR		0
#define OP_MASK_CFG_REG_ADDR		0xff
#define OP_SH_SEM_SEL			2
#define OP_MASK_SEM_SEL			0x3fffff
#define OP_SH_MAX_VALUE			20
#define OP_MASK_MAX_VALUE		0xf
#define OP_SH_INIT_VALUE		16
#define OP_MASK_INIT_VALUE		0xf
#define OP_SH_SEMSEL_SEMINIT		2
#define OP_MASK_SEMSEL_SEMINIT		0x3fff
#define OP_SH_STALL_RES			15
#define OP_MASK_STALL_RES		0x1ff
#define OP_SH_SEMSEL_SEMWAIT		2
#define OP_MASK_SEMSEL_SEMWAIT		0x1fff
#define OP_SH_WAIT_SEM_COND		0
#define OP_MASK_WAIT_SEM_COND		0x3
#define OP_SH_CHANNEL_INDEX		20
#define OP_MASK_CHANNEL_INDEX		0x1
#define OP_SH_DIMENSIONINDEX		18
#define OP_MASK_DIMENSIONINDEX		0x3
#define OP_SH_VALUE			0
#define OP_MASK_VALUE			0x3ffff
#define OP_SH_X_END2			10
#define OP_MASK_X_END2			0x7ff
#define OP_SH_X_START			0
#define OP_MASK_X_START			0x3ff
#define OP_SH_BITMASK			0
#define OP_MASK_BITMASK			0x3f
#define OP_SH_REGMASK			1
#define OP_MASK_REGMASK			0x7fffff
#define OP_SH_HALO_MASK			0
#define OP_MASK_HALO_MASK		0x1
#define OP_SH_REG_MASK_2		0
#define OP_MASK_REG_MASK_2		0xffffff
#define OP_SH_SETC16_REG		16
#define OP_MASK_SETC16_REG		0xff
#define OP_SH_SETC16_VALUE		0
#define OP_MASK_SETC16_VALUE		0xffff
#define OP_SH_SETVALID			0
#define OP_MASK_SETVALID		0xffffff
#define OP_SH_RWC_BIAS			6
#define OP_MASK_RWC_BIAS		0xfff
#define OP_SH_SET_INC_CTRL		0
#define OP_MASK_SET_INC_CTRL		0x3f
#define OP_SH_Y_END			12
#define OP_MASK_Y_END			0xfff
#define OP_SH_Y_START			8
#define OP_MASK_Y_START			0xf
#define OP_SH_X_END			4
#define OP_MASK_X_END			0xf
#define OP_SH_CLEAR_AB_VLD		22
#define OP_MASK_CLEAR_AB_VLD		0x3
#define OP_SH_LREG_IND			20
#define OP_MASK_LREG_IND		0xf
#define OP_SH_INSTR_MOD0		16
#define OP_MASK_INSTR_MOD0		0xf
#define OP_SH_SFPU_ADDR_MODE		14
#define OP_MASK_SFPU_ADDR_MODE		0x3
#define OP_SH_LSFPU_ADDR_MODE           13 
#define OP_MASK_LSFPU_ADDR_MODE         0x7
#define OP_SH_DEST_REG_ADDR		0
#define OP_MASK_DEST_REG_ADDR		0x3fff
#define OP_SH_LDEST_REG_ADDR            0
#define OP_MASK_LDEST_REG_ADDR          0x1fff
#define OP_SH_LOG2_AMOUNT2		2
#define OP_MASK_LOG2_AMOUNT2		0x3ffff
#define OP_SH_SHIFT_MODE		0
#define OP_MASK_SHIFT_MODE		0x3
#define OP_SH_ROT_SHIFT			10
#define OP_MASK_ROT_SHIFT		0x1f
#define OP_SH_SHIFT_ROW			0
#define OP_MASK_SHIFT_ROW		0x3ff
#define OP_SH_WAIT_RES			0
#define OP_MASK_WAIT_RES		0x7fff
#define OP_SH_SIZESEL			22
#define OP_MASK_SIZESEL			0x1
#define OP_SH_REGSIZESEL		21
#define OP_MASK_REGSIZESEL		0x1
#define OP_SH_OFFSETINDEX		14
#define OP_MASK_OFFSETINDEX		0x7f
#define OP_SH_UNPACK_BLOCK_SELECTION	23
#define OP_MASK_UNPACK_BLOCK_SELECTION	0x1
#define OP_SH_ADDRMODE_UNPACROP		15
#define OP_MASK_ADDRMODE_UNPACROP	0xff
#define OP_SH_CFGCONTEXTCNTINC		12
#define OP_MASK_CFGCONTEXTCNTINC	0x3
#define OP_SH_CFGCONTEXTID		10
#define OP_MASK_CFGCONTEXTID		0x7
#define OP_SH_ADDRCNTCONTEXTID		8
#define OP_MASK_ADDRCNTCONTEXTID	0x7
#define OP_SH_SETDATVALID		6
#define OP_MASK_SETDATVALID		0x1
#define OP_SH_RAREB_EN			5
#define OP_MASK_RAREB_EN		0x1	
#define OP_SH_ZEROWRITE2		4
#define OP_MASK_ZEROWRITE2		0x1
#define OP_SH_AUTOINCCONTEXTID		3
#define OP_MASK_AUTOINCCONTEXTID	0x1
#define OP_SH_ROWSEARCH			2
#define OP_MASK_ROWSEARCH		0x1
#define OP_SH_SEARCHCASHFLOW		1
#define OP_MASK_SEARCHCASHFLOW		0x1
#define OP_SH_NOOP			0
#define OP_MASK_NOOP			0x7fffff	
#define OP_SH_WR128B			15
#define OP_MASK_WR128B			0x1
#define OP_SH_CFGREG			0
#define OP_MASK_CFGREG			0x7fff
#define OP_SH_MOV_BLOCK_SELECTION	23
#define OP_MASK_MOV_BLOCK_SELECTION	0x1
#define OP_SH_LAST_XMOVOP		0
#define OP_MASK_LAST_XMOVOP		0x7fffff
#define OP_SH_CLEARCODE			19
#define OP_MASK_CLEARCODE		0x1f
#define OP_SH_ZEROVAL			4
#define OP_MASK_ZEROVAL			0xfffff
#define OP_SH_WRITEMODE			3
#define OP_MASK_WRITEMODE		0x1
#define OP_SH_BANKMASK			2
#define OP_MASK_BANKMASK		0x1
#define OP_SH_SRCMASK			0
#define OP_MASK_SRCMASK			0x3
#define OP_SH_CMP_VAL			14
#define OP_MASK_CMP_VAL			0xf
#define OP_SH_PKEDG_X_START		0
#define OP_MASK_PKEDG_X_START		0xf
#define OP_SH_MOV_INSTR_MOD		19
#define OP_MASK_MOV_INSTR_MOD		0x1f
#define OP_SH_MOV_SRC			10
#define OP_MASK_MOV_SRC			0x1f
#define OP_SH_MOV_DST			0
#define OP_MASK_MOV_DST			0x3ff
#define OP_SH_GRAY_STALL_RES		14
#define OP_MASK_GRAY_STALL_RES		0x3ff
#define OP_SH_GRAY_SEM_SEL		2
#define OP_MASK_GRAY_SEM_SEL		0xfff
#define OP_SH_WAIT_RES_14BIT		0
#define OP_MASK_WAIT_RES_14BIT		0x3fff
#define OP_SH_POOL_ADDR_MODE		15
#define OP_MASK_POOL_ADDR_MODE     	0x7

#endif  // RISCV_SFPU_H
