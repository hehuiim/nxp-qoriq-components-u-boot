/*
 * Copyright 2018 NXP
 * SPDX-License-Identifier:	GPL-2.0+        BSD-3-Clause
 *
 * Author York Sun <york.sun@nxp.com>
 */

#ifndef _INIT_H_
#define _INIT_H_

#include "input.h"
#include "ddr4u1d.h"
#include "ddr4u2d.h"
#include "ddr4r1d.h"
#include "ddr4r2d.h"
#include "ddr4lr1d.h"
#include "ddr4lr2d.h"
#include "dimm.h"

/* FIXME: This shouldn't be static */
#define WRODTPAT_RANK0	0x01
#define WRODTPAT_RANK1	0x02
#define WRODTPAT_RANK2	0x00
#define WRODTPAT_RANK3	0x00
#define RDODTPAT_RANK0	0x20
#define RDODTPAT_RANK1	0x10
#define RDODTPAT_RANK2	0x00
#define RDODTPAT_RANK3	0x00

#define t_anib				0
#define t_dbyte				0x10000
#define t_master				0x20000
#define t_acsm				0x40000
#define t_initeng			0x90000
#define t_drtub				0xc0000
#define t_apbonly			0xd0000
#define csr_dbyte_misc_mode_addr		0x00
#define csr_micro_cont_mux_sel_addr	0x00
#define csr_uct_shadow_regs		0x04
#define csr_cal_uclk_info_addr		0x08
#define csr_seq0bdly0_addr		0x0b
#define csr_seq0bdly1_addr		0x0c
#define csr_seq0bdly2_addr		0x0d
#define csr_seq0bdly3_addr		0x0e
#define csr_seq0bdisable_flag0_addr	0x0c
#define csr_seq0bdisable_flag1_addr	0x0d
#define csr_seq0bdisable_flag2_addr	0x0e
#define csr_seq0bdisable_flag3_addr	0x0f
#define csr_seq0bdisable_flag4_addr	0x10
#define csr_seq0bdisable_flag5_addr	0x11
#define csr_seq0bdisable_flag6_addr	0x12
#define csr_seq0bdisable_flag7_addr	0x13
#define csr_dfi_mode_addr		0x18
#define csr_tristate_mode_ca_addr		0x19
#define csr_dqs_preamble_control_addr	0x24
#define csr_master_x4config_addr		0x25
#define csr_enable_cs_multicast_addr	0x27
#define csr_dmipin_present_addr		0x2d
#define csr_ard_ptr_init_val_addr		0x2e
#define csr_dct_write_prot		0x31
#define csr_uct_write_only_shadow		0x32
#define csr_uct_write_prot		0x33
#define	csr_dbyte_dll_mode_cntrl_addr	0x3a
#define csr_atx_impedance_addr		0x43
#define csr_dq_dqs_rcv_cntrl_addr		0x43
#define csr_tx_impedance_ctrl1_addr	0x49
#define csr_dq_dqs_rcv_cntrl1_addr		0x4a
#define csr_tx_odt_drv_stren_addr		0x4d
#define csr_cal_drv_str0_addr		0x50
#define csr_atx_slew_rate_addr		0x55
#define csr_proc_odt_time_ctl_addr		0x56
#define csr_mem_alert_control_addr	0x5b
#define csr_mem_alert_control2_addr	0x5c
#define csr_tx_slew_rate_addr		0x5f
#define csr_mem_reset_l_addr		0x60
#define csr_dfi_camode_addr		0x75
#define csr_ucclk_hclk_enables_addr	0x80
#define csr_acsm_playback0x0_addr	0x80
#define csr_acsm_playback1x0_addr	0x81
#define csr_cal_rate_addr		0x88
#if defined(CONFIG_FSL_PHY_GEN2_PHY_A2017_11)
#define csr_cal_zap_addr		0x89
#endif
#define csr_micro_reset_addr		0x99
#define csr_dfi_rd_data_cs_dest_map_addr	0xb0
#define csr_vref_in_global_addr		0xb2
#define csr_dfi_wr_data_cs_dest_map_addr	0xb4
#define csr_pll_ctrl2_addr		0xc5
#define csr_dfi_freq_xlat0_addr		0xf0
#define csr_acsm_ctrl0_addr		0xf0
#define csr_dfi_freq_ratio_addr		0xfa
#define csr_acsm_ctrl13_addr		0xfd
#define csr_tx_pre_drv_mode_lsb		8
#define csr_tx_pre_n_lsb			4
#define csr_tx_pre_p_lsb			0
#define csr_atx_pre_drv_mode_lsb		8
#define csr_atx_pre_n_lsb			4
#define csr_atx_pre_p_lsb			0
#define csr_wdqsextension_lsb		8
#define csr_lp4sttc_pre_bridge_rx_en_lsb	7
#define csr_lp4postamble_ext_lsb		6
#define csr_lp4tgl_two_tck_tx_dqs_pre_lsb	5
#define csr_position_dfe_init_lsb		2
#define csr_two_tck_tx_dqs_pre_lsb		1
#define csr_two_tck_rx_dqs_pre_lsb		0
#define csr_dll_rx_preamble_mode_lsb	1
#define csr_odtstren_n_lsb		6
#define csr_drv_stren_fsdq_n_lsb		6
#define	csr_drv_stren_fsdq_p_lsb		0
#define csr_adrv_stren_n_lsb		5
#define csr_adrv_stren_p_lsb		0
#define csr_cal_drv_str_pu50_lsb		4
#define csr_cal_once_lsb			5
#define csr_cal_interval_lsb		0
#if defined(CONFIG_FSL_PHY_GEN2_PHY_A2017_11)
#define csr_cal_run_lsb			4
#endif
#define csr_global_vref_in_dac_lsb		3
#define csr_gain_curr_adj_lsb		7
#define csr_major_mode_dbyte_lsb		4
#define csr_dfe_ctrl_lsb			2
#define csr_ext_vref_range_lsb		1
#define csr_sel_analog_vref_lsb		0
#define csr_malertsync_bypass_lsb	0
#define csr_ck_dis_val_lsb		2
#define csr_ddr2tmode_lsb		1
#define csr_dis_dyn_adr_tri_lsb		0
#define	csr_dbyte_disable_lsb		2
#define csr_power_down_rcvr_lsb		0
#define csr_power_down_rcvr_dqs_lsb	9
#define csr_rx_pad_standby_en_lsb		10
#ifdef CONFIG_FSL_PHY_GEN2_PHY_A2017_11
#define csr_rx_pad_standby_en_mask	0x400
#endif
#define csr_x4tg_lsb			0
#define csr_reset_to_micro_mask		0x8
#define csr_protect_mem_reset_mask	0x2
#define csr_stall_to_micro_mask		0x1
#define uct_write_prot_shadow_mask		0x1
#define csr_acsm_par_mode_mask		0x4000
#define csr_acsm_cke_enb_lsb		0
#define csr_dfi_rd_destm0_lsb		0
#define csr_dfi_rd_destm1_lsb		2
#define csr_dfi_rd_destm2_lsb		4
#define csr_dfi_rd_destm3_lsb		6
#define csr_dfi_wr_destm0_lsb		0
#define csr_dfi_wr_destm1_lsb		2
#define csr_dfi_wr_destm2_lsb		4
#define csr_dfi_wr_destm3_lsb		6
#if defined(CONFIG_FSL_PHY_GEN2_PHY_A2017_11)
#define csr_acsm_2t_mode_mask 0x40
#endif

struct impedance_mapping {
	int ohm;
	int code;
};

struct input *phy_gen2_init_input(const unsigned int ctrl_num, struct dimm *dimm,
			      int freq);
int phy_gen2_msg_init(const unsigned int ctrl_num, void **msg_1d, void **msg_2d,
		  struct input *input, size_t *len);
int c_init_phy_config(const unsigned int ctrl_num, struct input *input,
		      const void *msg);
int d_load_imem(const struct input *input, int train2d);
int f_load_dmem(const struct input *input, void *msg, size_t len, int train2d);
void g_exec_fw(const unsigned int ctrl_num);
void h_readmsgblock(const unsigned int ctrl_num);
void i_load_pie(const unsigned int ctrl_num, const struct input *input,
		const void *msg);
#ifdef CONFIG_ARCH_LX2160A_PXP
void prog_tx_odt_drv_stren(const unsigned int ctrl_num,
			   const struct input *input);
#endif

#ifdef CONFIG_FSL_PHY_GEN2_PHY_A2017_11
void prog_seq0bdly0(const unsigned int ctrl_num,
			   const struct input *input);
#endif

#endif