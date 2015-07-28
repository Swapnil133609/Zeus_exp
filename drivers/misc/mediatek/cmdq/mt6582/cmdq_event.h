/*
* Copyright (C) 2011-2014 MediaTek Inc.
*
* This program is free software: you can redistribute it and/or modify it under the terms of the
* GNU General Public License version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

/* Mutex */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX0, 0)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX1, 1)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX2, 2)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX3, 3)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX4, 4)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX5, 5)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX6, 6)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX7, 7)

/* Reserved */
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_RESERVED1, 8)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_RESERVED2, 9)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_RESERVED3, 10)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_RESERVED4, 11)

/* Display frame done */
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA_EOF, 12)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA0_EOF, 13)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_BLS_EOF, 14)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_COLOR_EOF, 15)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL_EOF, 16)

/* MDP frame done */
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_TDSHP_EOF, 17)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ1_EOF, 18)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ0_EOF, 19)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RDMA_EOF, 20)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WDMA_EOF, 21)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT_EOF, 22)

/* ISP frame done */
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP1_EOF, 23)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP2_EOF, 24)

/* MDP & DISP start frame */
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT_SOF, 25)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ0_SOF, 26)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ1_SOF, 27)

	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL_SOF, 28)

	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WDMA_SOF, 29)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RDMA_SOF, 30)

	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA_SOF, 31)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_COLOR_SOF, 32)

	DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_TDSHP_SOF, 33)

	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_BLS_SOF, 34)
	DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA0_SOF, 35)

	DECLARE_CMDQ_EVENT(CMDQ_EVENT_CAM_MDP_SOF, 36)

/* Keep this at the end of HW events */
    DECLARE_CMDQ_EVENT(CMDQ_MAX_HW_EVENT_COUNT, 260)

/* SW Sync Tokens (Pre-defined) */
    /* Config thread notify trigger thread */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_CONFIG_DIRTY, 261)
    /* Trigger thread notify config thread */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_STREAM_EOF, 262)
    /* Block Trigger thread until the ESD check finishes. */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_ESD_EOF, 263)
    /* check CABC setup finish */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_CABC_EOF, 264)
    /* Pass-2 notifies VENC frame is ready to be encoded */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_VENC_INPUT_READY, 270)
    /* VENC notifies Pass-2 encode done so next frame may start */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_VENC_EOF, 271)

/* SW Sync Tokens (User-defined) */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_USER_0, 300)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_USER_1, 301)

/* GPR access tokens (for HW register backup) */
/* There are 15 32-bit GPR, 3 GPR form a set (64-bit for address, 32-bit for value) */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_0, 400)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_1, 401)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_2, 402)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_3, 403)
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_4, 404)

    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_MAX, (0x1FF))	/* event id is 9 bit */
    DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_INVALID, (-1))
