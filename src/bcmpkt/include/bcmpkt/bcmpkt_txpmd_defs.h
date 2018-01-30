#ifndef BCMPKT_TXPMD_DEFS_H
#define BCMPKT_TXPMD_DEFS_H
/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 *
 * $Id: $
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 * 
 * 
 *
 * This file provides field macros for the TX Packet MetaData (TXPMD, called SOBMH in hardware.) access.
 */

/*!
 * \name TXPMD Field IDs.
 * \anchor BCMPKT_TXPMD_XXX
 */
/*! \{ */
/*! Invalid BCMPKT_TXPMD FID indicator */
#define BCMPKT_TXPMD_FID_INVALID                 -1
/*! Start of frame indicator. */
#define BCMPKT_TXPMD_START                       0
/*!
 * 64 Header Types Supported. 1 means Packets from CPU with SOBMH header format
 * to Passthru NLF
 */
#define BCMPKT_TXPMD_HEADER_TYPE                 1
/*! PKT_LENGTH (set by hardware - in Iarb). */
#define BCMPKT_TXPMD_PKT_LENGTH                  2
/*! Pointer to cell buffer of this SOBMH cell. (Set by hardware) */
#define BCMPKT_TXPMD_IPCF_PTR                    3
/*! SOP indicator (set by hardware - in Iarb). */
#define BCMPKT_TXPMD_SOP                         4
/*! EOP indicator (set by hardware - in Iarb). */
#define BCMPKT_TXPMD_EOP                         5
/*! CELL_LENGTH (set by hardware - in Iarb). */
#define BCMPKT_TXPMD_CELL_LENGTH                 6
/*! CELL_ERROR or PURGE */
#define BCMPKT_TXPMD_CELL_ERROR                  7
/*! Indicates the local port to send a SOBMH packet out. */
#define BCMPKT_TXPMD_LOCAL_DEST_PORT             8
/*! Source module ID, must be programmed to MY_MODID. */
#define BCMPKT_TXPMD_SRC_MODID                   9
/*!
 * Class of service for MMU queueing for this packet - sets COS values,
 * PBI.UC_COS, PBI.MC_COS1, and PBI.MC_COS2.
 */
#define BCMPKT_TXPMD_COS                         10
/*! Traffic priority to be applied to MMU via PBI.INPUT_PRIORITY. */
#define BCMPKT_TXPMD_INPUT_PRI                   11
/*! Indicates that PBI.UNICAST should be set to queue as unicast packet. */
#define BCMPKT_TXPMD_UNICAST                     12
/*! Value for CCBI.RSQ_Q_NUM. */
#define BCMPKT_TXPMD_RQE_Q_NUM                   13
/*! Indicates that PBI.L2_BITMAP should be set (to queue as L2MC packet). */
#define BCMPKT_TXPMD_SET_L2BM                    14
/*! ONE STEP TIME STAMPING ENABLE */
#define BCMPKT_TXPMD_IEEE1588_ONE_STEP_ENABLE    15
/*! Regenerate UDP Checksum */
#define BCMPKT_TXPMD_IEEE1588_REGEN_UDP_CHECKSUM 16
/*! ITS_SIGN bit */
#define BCMPKT_TXPMD_IEEE1588_INGRESS_TIMESTAMP_SIGN 17
/*! HDR_OFFSET */
#define BCMPKT_TXPMD_IEEE1588_TIMESTAMP_HDR_OFFSET 18
/*!
 * Indicates for TS packet transmitted from CPU into IP that the outgoing packet
 * needs to have its transmit timestamp captured by the port.
 */
#define BCMPKT_TXPMD_TX_TS                       19
/*! For PBI.SPID_Override */
#define BCMPKT_TXPMD_SPID_OVERRIDE               20
/*! For PBI.SPID - Service Pool ID */
#define BCMPKT_TXPMD_SPID                        21
/*! For PBI.SPAP - Service Pool Priority (color) */
#define BCMPKT_TXPMD_SPAP                        22
/*! Queue number to be used for unicast queuing and CPU queue (CPU_COS). */
#define BCMPKT_TXPMD_QUEUE_NUM                   23
/*! Indicates that PBI.L3_BITMAP should be set (to queue as IPMC packet). */
#define BCMPKT_TXPMD_SET_L3BM                    24
/*! EP Copy to CPU Reasons */
#define BCMPKT_TXPMD_EP_CPU_REASON_CODE          25
/*! Indicates the UPMEP TX packet is from higig port. This information needs to be brought through loopback header to the 2nd pass so that Ep know how many bytes to decap. */
#define BCMPKT_TXPMD_UPMEP_TX_FROM_HG_PORT       26
/*! Indicates the packet is UPMEP TX loopback 1st pass. */
#define BCMPKT_TXPMD_UPMEP_TX_LOOPBACK           27
/*! Selects action for updating or sampling LM count for LM counter pool 0 */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_1_ACTION 28
/*! Counter index for LM counter pool 0 */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_1_ID   29
/*! OAM upstream counter 1 location. */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_1_LOCATION 30
/*! Selects action for updating or sampling LM count for LM counter pool 1 */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_2_ACTION 31
/*! Counter index for LM counter pool 1 */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_2_ID   32
/*! OAM upstream counter 2 location. */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_2_LOCATION 33
/*! Valid for CPU/HW Gen/OLP Packets. For OLP Packets populate from OLP_TX.INT_PRI */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_INT_PRI        34
/*!
 * Offset into packet where counter/timestamp must be inserted. Value is in 2-byte
 * increments starting from 14 bytes after end of OLP TX header
 */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_OAM_REPLACEMENT_OFFSET 35
/*!
 * For OLP Packets - Set if the packet is received from Remote OLP Port. This is
 * used by EP to NOT decap OLP vlan tag as it is present in the HG header.
 */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_OLP_PKT_FROM_HG_PORT 36
/*!
 * Taken from the OLP header. Packet is processed as if it came in on the SGPP
 * in this field.
 */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_SGPP           37
/*!
 * Indicates that OLP header is present in the apcket. Triggers a decap of OLP
 * header before packet is transmitted
 */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_SOURCE_OLP     38
/*! Enables timestamp sampling and selects between NTP and 1588 format timestamps */
#define BCMPKT_TXPMD_OAM_UPMEP_TX_TIMESTAMP_ACTION 39
/*! Selects action for updating or sampling LM count for LM counter pool 0 */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_1_ACTION 40
/*! Counter index for LM counter pool 0 */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_1_ID 41
/*! OAM downstream counter 1 location. */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_1_LOCATION 42
/*! Selects action for updating or sampling LM count for LM counter pool 1 */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_2_ACTION 43
/*! Counter index for LM counter pool 1 */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_2_ID 44
/*! OAM downstream counter 2 location. */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_2_LOCATION 45
/*! Destination global physical port */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_DGPP         46
/*!
 * Traffic Priority to be applied to MMU. For OLP packets it will be from HG2HDR
 * (if OLP packet received from HG port) or OLP_VLAN.PRI (if OLP packet received
 * from front-panel port).
 */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_INPUT_PRIORITY 47
/*! Used for OLP Packets - OLP_TX.INT_PRI */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_INT_PRI      48
/*!
 * Offset into packet where counter/timestamp must be inserted. Value is in 2-byte
 * increments starting from 14 bytes after end of OLP TX header
 */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_OAM_REPLACEMENT_OFFSET 49
/*!
 * For OLP Packets - Set if the packet is received from Remote OLP Port. This is
 * used by EP to NOT decap OLP vlan tag as it is present in the HG header.
 */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_OLP_PKT_FROM_HG_PORT 50
/*!
 * For OLP Packets - Set if the packet is received from Local or Remote OLP port.
 * It is for the pipeline to distinguish between CPU/HW generated vs OLP
 */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_SOURCE_OLP   51
/*! Enables timestamp sampling and selects between NTP and 1588 format timestamps */
#define BCMPKT_TXPMD_OAM_DOWNMEP_TX_TIMESTAMP_ACTION 52
/*! TXPMD FIELD ID NUMBER */
#define BCMPKT_TXPMD_FID_COUNT                   53
/*! \} */

/*! TXPMD field name strings for debugging. */
#define BCMPKT_TXPMD_FIELD_NAME_MAP_INIT \
    {"START", BCMPKT_TXPMD_START},\
    {"HEADER_TYPE", BCMPKT_TXPMD_HEADER_TYPE},\
    {"PKT_LENGTH", BCMPKT_TXPMD_PKT_LENGTH},\
    {"IPCF_PTR", BCMPKT_TXPMD_IPCF_PTR},\
    {"SOP", BCMPKT_TXPMD_SOP},\
    {"EOP", BCMPKT_TXPMD_EOP},\
    {"CELL_LENGTH", BCMPKT_TXPMD_CELL_LENGTH},\
    {"CELL_ERROR", BCMPKT_TXPMD_CELL_ERROR},\
    {"LOCAL_DEST_PORT", BCMPKT_TXPMD_LOCAL_DEST_PORT},\
    {"SRC_MODID", BCMPKT_TXPMD_SRC_MODID},\
    {"COS", BCMPKT_TXPMD_COS},\
    {"INPUT_PRI", BCMPKT_TXPMD_INPUT_PRI},\
    {"UNICAST", BCMPKT_TXPMD_UNICAST},\
    {"RQE_Q_NUM", BCMPKT_TXPMD_RQE_Q_NUM},\
    {"SET_L2BM", BCMPKT_TXPMD_SET_L2BM},\
    {"IEEE1588_ONE_STEP_ENABLE", BCMPKT_TXPMD_IEEE1588_ONE_STEP_ENABLE},\
    {"IEEE1588_REGEN_UDP_CHECKSUM", BCMPKT_TXPMD_IEEE1588_REGEN_UDP_CHECKSUM},\
    {"IEEE1588_INGRESS_TIMESTAMP_SIGN", BCMPKT_TXPMD_IEEE1588_INGRESS_TIMESTAMP_SIGN},\
    {"IEEE1588_TIMESTAMP_HDR_OFFSET", BCMPKT_TXPMD_IEEE1588_TIMESTAMP_HDR_OFFSET},\
    {"TX_TS", BCMPKT_TXPMD_TX_TS},\
    {"SPID_OVERRIDE", BCMPKT_TXPMD_SPID_OVERRIDE},\
    {"SPID", BCMPKT_TXPMD_SPID},\
    {"SPAP", BCMPKT_TXPMD_SPAP},\
    {"QUEUE_NUM", BCMPKT_TXPMD_QUEUE_NUM},\
    {"SET_L3BM", BCMPKT_TXPMD_SET_L3BM},\
    {"EP_CPU_REASON_CODE", BCMPKT_TXPMD_EP_CPU_REASON_CODE},\
    {"UPMEP_TX_FROM_HG_PORT", BCMPKT_TXPMD_UPMEP_TX_FROM_HG_PORT},\
    {"UPMEP_TX_LOOPBACK", BCMPKT_TXPMD_UPMEP_TX_LOOPBACK},\
    {"OAM_UPMEP_TX::COUNTER_1_ACTION", BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_1_ACTION},\
    {"OAM_UPMEP_TX::COUNTER_1_ID", BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_1_ID},\
    {"OAM_UPMEP_TX::COUNTER_1_LOCATION", BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_1_LOCATION},\
    {"OAM_UPMEP_TX::COUNTER_2_ACTION", BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_2_ACTION},\
    {"OAM_UPMEP_TX::COUNTER_2_ID", BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_2_ID},\
    {"OAM_UPMEP_TX::COUNTER_2_LOCATION", BCMPKT_TXPMD_OAM_UPMEP_TX_COUNTER_2_LOCATION},\
    {"OAM_UPMEP_TX::INT_PRI", BCMPKT_TXPMD_OAM_UPMEP_TX_INT_PRI},\
    {"OAM_UPMEP_TX::OAM_REPLACEMENT_OFFSET", BCMPKT_TXPMD_OAM_UPMEP_TX_OAM_REPLACEMENT_OFFSET},\
    {"OAM_UPMEP_TX::OLP_PKT_FROM_HG_PORT", BCMPKT_TXPMD_OAM_UPMEP_TX_OLP_PKT_FROM_HG_PORT},\
    {"OAM_UPMEP_TX::SGPP", BCMPKT_TXPMD_OAM_UPMEP_TX_SGPP},\
    {"OAM_UPMEP_TX::SOURCE_OLP", BCMPKT_TXPMD_OAM_UPMEP_TX_SOURCE_OLP},\
    {"OAM_UPMEP_TX::TIMESTAMP_ACTION", BCMPKT_TXPMD_OAM_UPMEP_TX_TIMESTAMP_ACTION},\
    {"OAM_DOWNMEP_TX::COUNTER_1_ACTION", BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_1_ACTION},\
    {"OAM_DOWNMEP_TX::COUNTER_1_ID", BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_1_ID},\
    {"OAM_DOWNMEP_TX::COUNTER_1_LOCATION", BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_1_LOCATION},\
    {"OAM_DOWNMEP_TX::COUNTER_2_ACTION", BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_2_ACTION},\
    {"OAM_DOWNMEP_TX::COUNTER_2_ID", BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_2_ID},\
    {"OAM_DOWNMEP_TX::COUNTER_2_LOCATION", BCMPKT_TXPMD_OAM_DOWNMEP_TX_COUNTER_2_LOCATION},\
    {"OAM_DOWNMEP_TX::DGPP", BCMPKT_TXPMD_OAM_DOWNMEP_TX_DGPP},\
    {"OAM_DOWNMEP_TX::INPUT_PRIORITY", BCMPKT_TXPMD_OAM_DOWNMEP_TX_INPUT_PRIORITY},\
    {"OAM_DOWNMEP_TX::INT_PRI", BCMPKT_TXPMD_OAM_DOWNMEP_TX_INT_PRI},\
    {"OAM_DOWNMEP_TX::OAM_REPLACEMENT_OFFSET", BCMPKT_TXPMD_OAM_DOWNMEP_TX_OAM_REPLACEMENT_OFFSET},\
    {"OAM_DOWNMEP_TX::OLP_PKT_FROM_HG_PORT", BCMPKT_TXPMD_OAM_DOWNMEP_TX_OLP_PKT_FROM_HG_PORT},\
    {"OAM_DOWNMEP_TX::SOURCE_OLP", BCMPKT_TXPMD_OAM_DOWNMEP_TX_SOURCE_OLP},\
    {"OAM_DOWNMEP_TX::TIMESTAMP_ACTION", BCMPKT_TXPMD_OAM_DOWNMEP_TX_TIMESTAMP_ACTION},\
    {"fid count", BCMPKT_TXPMD_FID_COUNT}

/*!
 * \name TXPMD internal usage Field IDs.
 * \anchor BCMPKT_TXPMD_I_XXX
 */
/*! \{ */
/*! TXPMD RX raw data size. */
#define BCMPKT_TXPMD_SIZE                        0
/*! TXPMD INTERNAL FIELD ID NUMBER */
#define BCMPKT_TXPMD_I_FID_COUNT                 1
/*! \} */

/*! TXPMD internal field name strings for debugging. Internally use only. */
#define BCMPKT_TXPMD_IFIELD_NAME_MAP_INIT \
    {"SIZE", BCMPKT_TXPMD_SIZE},\
    {"fid count", BCMPKT_TXPMD_I_FID_COUNT}

#endif /*! BCMPKT_TXPMD_DEFS_H */