// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _TX_FLUSH_REQ_H_
#define _TX_FLUSH_REQ_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	flush_req_reason[7:0], reserved_0a[31:8]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_TX_FLUSH_REQ 1

struct tx_flush_req {
    volatile uint32_t flush_req_reason                :  8, //[7:0]
                      reserved_0a                     : 24; //[31:8]
};

/*

flush_req_reason
			
			The reason why the flush request was generated.
			
			Reason codes:
			
			<enum 1 TXPCU_FLREQ_CODE_TXOP_EXCEEDED>
			
			Flush request issued by TXPCU in case of a WCOEX abort.
			
			<enum 2 CRYPT_FLREQ_RX_INT_TX>
			
			This is a corner case scenario. A situation where:
			
			a.A RX is just over and CCA indication is IDLE
			
			b.Crypt is still busy decrypting
			
			c.A TX just starts.
			
			The TX should be tried later. This situation may be
			rare. Just taking an extra precaution.
			
			<enum 3 TXPCU_FLREQ_CODE_RTS_PKT_CCA_ABORT>
			
			This is the static BW failure happening right after
			start_tx for either RTS frame or data packet
			
			<enum 4 TXPCU_FLREQ_CODE_CTS_CCA_ABORT>
			
			This is the static BW failure in the protection sequence
			(CTS).
			
			<enum 5 PDG_FLREQ_CODE_TXOP_ABORT>
			
			This is PDG signaling not enough TXOP for transmission.
			
			
			
			HWSCH internal flush requests:
			
			<enum 6 SW_EXPLICIT_FLUSH_TERMINATION>
			
			When SW issues a flush WHICH CAUSES AN ONGOING FES to
			terminate
			
			<enum 7 FES_STP_NOT_ENOUGH_TXOP_REM>
			
			Not enough TXOP remaining in either SW or HW mode. This
			checks if the remaining TXOP < a parameterized minimum time.
			Currently half SIFS duration (5 us).
			
			<enum 8 FES_STP_SCH_TLV_LEN_ERR>
			
			Scheduler TLV length programmed by SW is incorrect. A
			simple check to see if TLV length does not exceed a max
			parameter (currently  132 dwords). This was calculated based
			on worst case SW mode Scheduler TLV required.
			
			<enum 9 FES_STP_SCH_TLV_ID_ERR>
			
			Error while parsing scheduler TLV. Most likely arising
			from incorrect length programmed in the component TLVs.
			
			<enum 10 FES_STP_TLV_TIME_EXCEEDED_BKOF_EXP>
			
			Issued in case TLV transmission exceeds start_tx time.
			
			<enum 11 FES_STP_SW_FES_TIME_GT_HW>
			
			SW mode abort. When HWSCH determines that none of the SW
			programmed (upto 3) BW times can fit into the current TXOP
			remaining.
			
			<enum 12 TXPCU_FLREQ_PPDU_ALLOW_BW_FIELDS_NOT_SET>
			
			Flush request issued by TXPCU in case none of the
			PPDU_ALLOW_BW_* fields are set in PCU_PPDU_SETUP TLV.
			
			<enum 13 TXPCU_FLREQ_BF_PARAM_BW_NOT_AVAILABLE>
			
			Flush request issued by TXPCU in case the BW indicated
			in TX_BF_PARAM is not available at the transmission attempt
			
			<enum 14 HWSCH_COEX_ABORT>
			
			Flush request issued by HWSCH when a coex event caused
			this transmit to be aborted
			
			<enum 15 HWSCH_SVD_RDY_TIMEOUT>
			
			Flush request issued by HWSCH when the PHY does not
			return the SVD_READY before a timeout expires
			
			<enum 16 NUM_MPDU_CNT_ZERO>
			
			Flush request issued by TXPCU when the number of MPDU
			counter for selected BW is zero. 
			
			<enum 17 UNSUPPORTED_CBF>
			
			Flush request issued by TXPCU if TXPCU receives
			TX_PKT_END with error_unsupported_cbf during CV transfer. 
			
			<legal 1-17>

reserved_0a
			
			<legal 0>
*/


/* Description		TX_FLUSH_REQ_0_FLUSH_REQ_REASON
			
			The reason why the flush request was generated.
			
			Reason codes:
			
			<enum 1 TXPCU_FLREQ_CODE_TXOP_EXCEEDED>
			
			Flush request issued by TXPCU in case of a WCOEX abort.
			
			<enum 2 CRYPT_FLREQ_RX_INT_TX>
			
			This is a corner case scenario. A situation where:
			
			a.A RX is just over and CCA indication is IDLE
			
			b.Crypt is still busy decrypting
			
			c.A TX just starts.
			
			The TX should be tried later. This situation may be
			rare. Just taking an extra precaution.
			
			<enum 3 TXPCU_FLREQ_CODE_RTS_PKT_CCA_ABORT>
			
			This is the static BW failure happening right after
			start_tx for either RTS frame or data packet
			
			<enum 4 TXPCU_FLREQ_CODE_CTS_CCA_ABORT>
			
			This is the static BW failure in the protection sequence
			(CTS).
			
			<enum 5 PDG_FLREQ_CODE_TXOP_ABORT>
			
			This is PDG signaling not enough TXOP for transmission.
			
			
			
			HWSCH internal flush requests:
			
			<enum 6 SW_EXPLICIT_FLUSH_TERMINATION>
			
			When SW issues a flush WHICH CAUSES AN ONGOING FES to
			terminate
			
			<enum 7 FES_STP_NOT_ENOUGH_TXOP_REM>
			
			Not enough TXOP remaining in either SW or HW mode. This
			checks if the remaining TXOP < a parameterized minimum time.
			Currently half SIFS duration (5 us).
			
			<enum 8 FES_STP_SCH_TLV_LEN_ERR>
			
			Scheduler TLV length programmed by SW is incorrect. A
			simple check to see if TLV length does not exceed a max
			parameter (currently  132 dwords). This was calculated based
			on worst case SW mode Scheduler TLV required.
			
			<enum 9 FES_STP_SCH_TLV_ID_ERR>
			
			Error while parsing scheduler TLV. Most likely arising
			from incorrect length programmed in the component TLVs.
			
			<enum 10 FES_STP_TLV_TIME_EXCEEDED_BKOF_EXP>
			
			Issued in case TLV transmission exceeds start_tx time.
			
			<enum 11 FES_STP_SW_FES_TIME_GT_HW>
			
			SW mode abort. When HWSCH determines that none of the SW
			programmed (upto 3) BW times can fit into the current TXOP
			remaining.
			
			<enum 12 TXPCU_FLREQ_PPDU_ALLOW_BW_FIELDS_NOT_SET>
			
			Flush request issued by TXPCU in case none of the
			PPDU_ALLOW_BW_* fields are set in PCU_PPDU_SETUP TLV.
			
			<enum 13 TXPCU_FLREQ_BF_PARAM_BW_NOT_AVAILABLE>
			
			Flush request issued by TXPCU in case the BW indicated
			in TX_BF_PARAM is not available at the transmission attempt
			
			<enum 14 HWSCH_COEX_ABORT>
			
			Flush request issued by HWSCH when a coex event caused
			this transmit to be aborted
			
			<enum 15 HWSCH_SVD_RDY_TIMEOUT>
			
			Flush request issued by HWSCH when the PHY does not
			return the SVD_READY before a timeout expires
			
			<enum 16 NUM_MPDU_CNT_ZERO>
			
			Flush request issued by TXPCU when the number of MPDU
			counter for selected BW is zero. 
			
			<enum 17 UNSUPPORTED_CBF>
			
			Flush request issued by TXPCU if TXPCU receives
			TX_PKT_END with error_unsupported_cbf during CV transfer. 
			
			<legal 1-17>
*/
#define TX_FLUSH_REQ_0_FLUSH_REQ_REASON_OFFSET                       0x00000000
#define TX_FLUSH_REQ_0_FLUSH_REQ_REASON_LSB                          0
#define TX_FLUSH_REQ_0_FLUSH_REQ_REASON_MASK                         0x000000ff

/* Description		TX_FLUSH_REQ_0_RESERVED_0A
			
			<legal 0>
*/
#define TX_FLUSH_REQ_0_RESERVED_0A_OFFSET                            0x00000000
#define TX_FLUSH_REQ_0_RESERVED_0A_LSB                               8
#define TX_FLUSH_REQ_0_RESERVED_0A_MASK                              0xffffff00


#endif // _TX_FLUSH_REQ_H_