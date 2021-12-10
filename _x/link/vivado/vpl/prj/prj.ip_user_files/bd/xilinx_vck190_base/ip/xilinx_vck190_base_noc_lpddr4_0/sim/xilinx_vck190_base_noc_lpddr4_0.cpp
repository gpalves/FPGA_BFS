// (c) Copyright 1995-2021 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


#include "xilinx_vck190_base_noc_lpddr4_0_sc.h"

#include "xilinx_vck190_base_noc_lpddr4_0.h"

#include "bd_a393.h"

#include <map>
#include <string>





#ifdef XILINX_SIMULATOR
xilinx_vck190_base_noc_lpddr4_0::xilinx_vck190_base_noc_lpddr4_0(const sc_core::sc_module_name& nm) : xilinx_vck190_base_noc_lpddr4_0_sc(nm), S00_INI_internoc("S00_INI_internoc"), S01_INI_internoc("S01_INI_internoc"), S02_INI_internoc("S02_INI_internoc"), S03_INI_internoc("S03_INI_internoc"), sys_clk0_clk_p("sys_clk0_clk_p"), sys_clk0_clk_n("sys_clk0_clk_n"), CH0_LPDDR4_0_dq_a("CH0_LPDDR4_0_dq_a"), CH0_LPDDR4_0_dq_b("CH0_LPDDR4_0_dq_b"), CH0_LPDDR4_0_dqs_t_a("CH0_LPDDR4_0_dqs_t_a"), CH0_LPDDR4_0_dqs_t_b("CH0_LPDDR4_0_dqs_t_b"), CH0_LPDDR4_0_dqs_c_a("CH0_LPDDR4_0_dqs_c_a"), CH0_LPDDR4_0_dqs_c_b("CH0_LPDDR4_0_dqs_c_b"), CH0_LPDDR4_0_ca_a("CH0_LPDDR4_0_ca_a"), CH0_LPDDR4_0_ca_b("CH0_LPDDR4_0_ca_b"), CH0_LPDDR4_0_cs_a("CH0_LPDDR4_0_cs_a"), CH0_LPDDR4_0_cs_b("CH0_LPDDR4_0_cs_b"), CH0_LPDDR4_0_ck_t_a("CH0_LPDDR4_0_ck_t_a"), CH0_LPDDR4_0_ck_t_b("CH0_LPDDR4_0_ck_t_b"), CH0_LPDDR4_0_ck_c_a("CH0_LPDDR4_0_ck_c_a"), CH0_LPDDR4_0_ck_c_b("CH0_LPDDR4_0_ck_c_b"), CH0_LPDDR4_0_cke_a("CH0_LPDDR4_0_cke_a"), CH0_LPDDR4_0_cke_b("CH0_LPDDR4_0_cke_b"), CH0_LPDDR4_0_dmi_a("CH0_LPDDR4_0_dmi_a"), CH0_LPDDR4_0_dmi_b("CH0_LPDDR4_0_dmi_b"), CH0_LPDDR4_0_reset_n("CH0_LPDDR4_0_reset_n"), CH1_LPDDR4_0_dq_a("CH1_LPDDR4_0_dq_a"), CH1_LPDDR4_0_dq_b("CH1_LPDDR4_0_dq_b"), CH1_LPDDR4_0_dqs_t_a("CH1_LPDDR4_0_dqs_t_a"), CH1_LPDDR4_0_dqs_t_b("CH1_LPDDR4_0_dqs_t_b"), CH1_LPDDR4_0_dqs_c_a("CH1_LPDDR4_0_dqs_c_a"), CH1_LPDDR4_0_dqs_c_b("CH1_LPDDR4_0_dqs_c_b"), CH1_LPDDR4_0_ca_a("CH1_LPDDR4_0_ca_a"), CH1_LPDDR4_0_ca_b("CH1_LPDDR4_0_ca_b"), CH1_LPDDR4_0_cs_a("CH1_LPDDR4_0_cs_a"), CH1_LPDDR4_0_cs_b("CH1_LPDDR4_0_cs_b"), CH1_LPDDR4_0_ck_t_a("CH1_LPDDR4_0_ck_t_a"), CH1_LPDDR4_0_ck_t_b("CH1_LPDDR4_0_ck_t_b"), CH1_LPDDR4_0_ck_c_a("CH1_LPDDR4_0_ck_c_a"), CH1_LPDDR4_0_ck_c_b("CH1_LPDDR4_0_ck_c_b"), CH1_LPDDR4_0_cke_a("CH1_LPDDR4_0_cke_a"), CH1_LPDDR4_0_cke_b("CH1_LPDDR4_0_cke_b"), CH1_LPDDR4_0_dmi_a("CH1_LPDDR4_0_dmi_a"), CH1_LPDDR4_0_dmi_b("CH1_LPDDR4_0_dmi_b"), CH1_LPDDR4_0_reset_n("CH1_LPDDR4_0_reset_n"), sys_clk1_clk_p("sys_clk1_clk_p"), sys_clk1_clk_n("sys_clk1_clk_n"), CH0_LPDDR4_1_dq_a("CH0_LPDDR4_1_dq_a"), CH0_LPDDR4_1_dq_b("CH0_LPDDR4_1_dq_b"), CH0_LPDDR4_1_dqs_t_a("CH0_LPDDR4_1_dqs_t_a"), CH0_LPDDR4_1_dqs_t_b("CH0_LPDDR4_1_dqs_t_b"), CH0_LPDDR4_1_dqs_c_a("CH0_LPDDR4_1_dqs_c_a"), CH0_LPDDR4_1_dqs_c_b("CH0_LPDDR4_1_dqs_c_b"), CH0_LPDDR4_1_ca_a("CH0_LPDDR4_1_ca_a"), CH0_LPDDR4_1_ca_b("CH0_LPDDR4_1_ca_b"), CH0_LPDDR4_1_cs_a("CH0_LPDDR4_1_cs_a"), CH0_LPDDR4_1_cs_b("CH0_LPDDR4_1_cs_b"), CH0_LPDDR4_1_ck_t_a("CH0_LPDDR4_1_ck_t_a"), CH0_LPDDR4_1_ck_t_b("CH0_LPDDR4_1_ck_t_b"), CH0_LPDDR4_1_ck_c_a("CH0_LPDDR4_1_ck_c_a"), CH0_LPDDR4_1_ck_c_b("CH0_LPDDR4_1_ck_c_b"), CH0_LPDDR4_1_cke_a("CH0_LPDDR4_1_cke_a"), CH0_LPDDR4_1_cke_b("CH0_LPDDR4_1_cke_b"), CH0_LPDDR4_1_dmi_a("CH0_LPDDR4_1_dmi_a"), CH0_LPDDR4_1_dmi_b("CH0_LPDDR4_1_dmi_b"), CH0_LPDDR4_1_reset_n("CH0_LPDDR4_1_reset_n"), CH1_LPDDR4_1_dq_a("CH1_LPDDR4_1_dq_a"), CH1_LPDDR4_1_dq_b("CH1_LPDDR4_1_dq_b"), CH1_LPDDR4_1_dqs_t_a("CH1_LPDDR4_1_dqs_t_a"), CH1_LPDDR4_1_dqs_t_b("CH1_LPDDR4_1_dqs_t_b"), CH1_LPDDR4_1_dqs_c_a("CH1_LPDDR4_1_dqs_c_a"), CH1_LPDDR4_1_dqs_c_b("CH1_LPDDR4_1_dqs_c_b"), CH1_LPDDR4_1_ca_a("CH1_LPDDR4_1_ca_a"), CH1_LPDDR4_1_ca_b("CH1_LPDDR4_1_ca_b"), CH1_LPDDR4_1_cs_a("CH1_LPDDR4_1_cs_a"), CH1_LPDDR4_1_cs_b("CH1_LPDDR4_1_cs_b"), CH1_LPDDR4_1_ck_t_a("CH1_LPDDR4_1_ck_t_a"), CH1_LPDDR4_1_ck_t_b("CH1_LPDDR4_1_ck_t_b"), CH1_LPDDR4_1_ck_c_a("CH1_LPDDR4_1_ck_c_a"), CH1_LPDDR4_1_ck_c_b("CH1_LPDDR4_1_ck_c_b"), CH1_LPDDR4_1_cke_a("CH1_LPDDR4_1_cke_a"), CH1_LPDDR4_1_cke_b("CH1_LPDDR4_1_cke_b"), CH1_LPDDR4_1_dmi_a("CH1_LPDDR4_1_dmi_a"), CH1_LPDDR4_1_dmi_b("CH1_LPDDR4_1_dmi_b"), CH1_LPDDR4_1_reset_n("CH1_LPDDR4_1_reset_n")
{

  // initialize pins
  mp_impl->S00_INI_internoc(S00_INI_internoc);
  mp_impl->S01_INI_internoc(S01_INI_internoc);
  mp_impl->S02_INI_internoc(S02_INI_internoc);
  mp_impl->S03_INI_internoc(S03_INI_internoc);
  mp_impl->sys_clk0_clk_p(sys_clk0_clk_p);
  mp_impl->sys_clk0_clk_n(sys_clk0_clk_n);
  mp_impl->CH0_LPDDR4_0_dq_a(CH0_LPDDR4_0_dq_a);
  mp_impl->CH0_LPDDR4_0_dq_b(CH0_LPDDR4_0_dq_b);
  mp_impl->CH0_LPDDR4_0_dqs_t_a(CH0_LPDDR4_0_dqs_t_a);
  mp_impl->CH0_LPDDR4_0_dqs_t_b(CH0_LPDDR4_0_dqs_t_b);
  mp_impl->CH0_LPDDR4_0_dqs_c_a(CH0_LPDDR4_0_dqs_c_a);
  mp_impl->CH0_LPDDR4_0_dqs_c_b(CH0_LPDDR4_0_dqs_c_b);
  mp_impl->CH0_LPDDR4_0_ca_a(CH0_LPDDR4_0_ca_a);
  mp_impl->CH0_LPDDR4_0_ca_b(CH0_LPDDR4_0_ca_b);
  mp_impl->CH0_LPDDR4_0_cs_a(CH0_LPDDR4_0_cs_a);
  mp_impl->CH0_LPDDR4_0_cs_b(CH0_LPDDR4_0_cs_b);
  mp_impl->CH0_LPDDR4_0_ck_t_a(CH0_LPDDR4_0_ck_t_a);
  mp_impl->CH0_LPDDR4_0_ck_t_b(CH0_LPDDR4_0_ck_t_b);
  mp_impl->CH0_LPDDR4_0_ck_c_a(CH0_LPDDR4_0_ck_c_a);
  mp_impl->CH0_LPDDR4_0_ck_c_b(CH0_LPDDR4_0_ck_c_b);
  mp_impl->CH0_LPDDR4_0_cke_a(CH0_LPDDR4_0_cke_a);
  mp_impl->CH0_LPDDR4_0_cke_b(CH0_LPDDR4_0_cke_b);
  mp_impl->CH0_LPDDR4_0_dmi_a(CH0_LPDDR4_0_dmi_a);
  mp_impl->CH0_LPDDR4_0_dmi_b(CH0_LPDDR4_0_dmi_b);
  mp_impl->CH0_LPDDR4_0_reset_n(CH0_LPDDR4_0_reset_n);
  mp_impl->CH1_LPDDR4_0_dq_a(CH1_LPDDR4_0_dq_a);
  mp_impl->CH1_LPDDR4_0_dq_b(CH1_LPDDR4_0_dq_b);
  mp_impl->CH1_LPDDR4_0_dqs_t_a(CH1_LPDDR4_0_dqs_t_a);
  mp_impl->CH1_LPDDR4_0_dqs_t_b(CH1_LPDDR4_0_dqs_t_b);
  mp_impl->CH1_LPDDR4_0_dqs_c_a(CH1_LPDDR4_0_dqs_c_a);
  mp_impl->CH1_LPDDR4_0_dqs_c_b(CH1_LPDDR4_0_dqs_c_b);
  mp_impl->CH1_LPDDR4_0_ca_a(CH1_LPDDR4_0_ca_a);
  mp_impl->CH1_LPDDR4_0_ca_b(CH1_LPDDR4_0_ca_b);
  mp_impl->CH1_LPDDR4_0_cs_a(CH1_LPDDR4_0_cs_a);
  mp_impl->CH1_LPDDR4_0_cs_b(CH1_LPDDR4_0_cs_b);
  mp_impl->CH1_LPDDR4_0_ck_t_a(CH1_LPDDR4_0_ck_t_a);
  mp_impl->CH1_LPDDR4_0_ck_t_b(CH1_LPDDR4_0_ck_t_b);
  mp_impl->CH1_LPDDR4_0_ck_c_a(CH1_LPDDR4_0_ck_c_a);
  mp_impl->CH1_LPDDR4_0_ck_c_b(CH1_LPDDR4_0_ck_c_b);
  mp_impl->CH1_LPDDR4_0_cke_a(CH1_LPDDR4_0_cke_a);
  mp_impl->CH1_LPDDR4_0_cke_b(CH1_LPDDR4_0_cke_b);
  mp_impl->CH1_LPDDR4_0_dmi_a(CH1_LPDDR4_0_dmi_a);
  mp_impl->CH1_LPDDR4_0_dmi_b(CH1_LPDDR4_0_dmi_b);
  mp_impl->CH1_LPDDR4_0_reset_n(CH1_LPDDR4_0_reset_n);
  mp_impl->sys_clk1_clk_p(sys_clk1_clk_p);
  mp_impl->sys_clk1_clk_n(sys_clk1_clk_n);
  mp_impl->CH0_LPDDR4_1_dq_a(CH0_LPDDR4_1_dq_a);
  mp_impl->CH0_LPDDR4_1_dq_b(CH0_LPDDR4_1_dq_b);
  mp_impl->CH0_LPDDR4_1_dqs_t_a(CH0_LPDDR4_1_dqs_t_a);
  mp_impl->CH0_LPDDR4_1_dqs_t_b(CH0_LPDDR4_1_dqs_t_b);
  mp_impl->CH0_LPDDR4_1_dqs_c_a(CH0_LPDDR4_1_dqs_c_a);
  mp_impl->CH0_LPDDR4_1_dqs_c_b(CH0_LPDDR4_1_dqs_c_b);
  mp_impl->CH0_LPDDR4_1_ca_a(CH0_LPDDR4_1_ca_a);
  mp_impl->CH0_LPDDR4_1_ca_b(CH0_LPDDR4_1_ca_b);
  mp_impl->CH0_LPDDR4_1_cs_a(CH0_LPDDR4_1_cs_a);
  mp_impl->CH0_LPDDR4_1_cs_b(CH0_LPDDR4_1_cs_b);
  mp_impl->CH0_LPDDR4_1_ck_t_a(CH0_LPDDR4_1_ck_t_a);
  mp_impl->CH0_LPDDR4_1_ck_t_b(CH0_LPDDR4_1_ck_t_b);
  mp_impl->CH0_LPDDR4_1_ck_c_a(CH0_LPDDR4_1_ck_c_a);
  mp_impl->CH0_LPDDR4_1_ck_c_b(CH0_LPDDR4_1_ck_c_b);
  mp_impl->CH0_LPDDR4_1_cke_a(CH0_LPDDR4_1_cke_a);
  mp_impl->CH0_LPDDR4_1_cke_b(CH0_LPDDR4_1_cke_b);
  mp_impl->CH0_LPDDR4_1_dmi_a(CH0_LPDDR4_1_dmi_a);
  mp_impl->CH0_LPDDR4_1_dmi_b(CH0_LPDDR4_1_dmi_b);
  mp_impl->CH0_LPDDR4_1_reset_n(CH0_LPDDR4_1_reset_n);
  mp_impl->CH1_LPDDR4_1_dq_a(CH1_LPDDR4_1_dq_a);
  mp_impl->CH1_LPDDR4_1_dq_b(CH1_LPDDR4_1_dq_b);
  mp_impl->CH1_LPDDR4_1_dqs_t_a(CH1_LPDDR4_1_dqs_t_a);
  mp_impl->CH1_LPDDR4_1_dqs_t_b(CH1_LPDDR4_1_dqs_t_b);
  mp_impl->CH1_LPDDR4_1_dqs_c_a(CH1_LPDDR4_1_dqs_c_a);
  mp_impl->CH1_LPDDR4_1_dqs_c_b(CH1_LPDDR4_1_dqs_c_b);
  mp_impl->CH1_LPDDR4_1_ca_a(CH1_LPDDR4_1_ca_a);
  mp_impl->CH1_LPDDR4_1_ca_b(CH1_LPDDR4_1_ca_b);
  mp_impl->CH1_LPDDR4_1_cs_a(CH1_LPDDR4_1_cs_a);
  mp_impl->CH1_LPDDR4_1_cs_b(CH1_LPDDR4_1_cs_b);
  mp_impl->CH1_LPDDR4_1_ck_t_a(CH1_LPDDR4_1_ck_t_a);
  mp_impl->CH1_LPDDR4_1_ck_t_b(CH1_LPDDR4_1_ck_t_b);
  mp_impl->CH1_LPDDR4_1_ck_c_a(CH1_LPDDR4_1_ck_c_a);
  mp_impl->CH1_LPDDR4_1_ck_c_b(CH1_LPDDR4_1_ck_c_b);
  mp_impl->CH1_LPDDR4_1_cke_a(CH1_LPDDR4_1_cke_a);
  mp_impl->CH1_LPDDR4_1_cke_b(CH1_LPDDR4_1_cke_b);
  mp_impl->CH1_LPDDR4_1_dmi_a(CH1_LPDDR4_1_dmi_a);
  mp_impl->CH1_LPDDR4_1_dmi_b(CH1_LPDDR4_1_dmi_b);
  mp_impl->CH1_LPDDR4_1_reset_n(CH1_LPDDR4_1_reset_n);

}

void xilinx_vck190_base_noc_lpddr4_0::before_end_of_elaboration()
{
}

#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
xilinx_vck190_base_noc_lpddr4_0::xilinx_vck190_base_noc_lpddr4_0(const sc_core::sc_module_name& nm) : xilinx_vck190_base_noc_lpddr4_0_sc(nm), S00_INI_internoc("S00_INI_internoc"), S01_INI_internoc("S01_INI_internoc"), S02_INI_internoc("S02_INI_internoc"), S03_INI_internoc("S03_INI_internoc"), sys_clk0_clk_p("sys_clk0_clk_p"), sys_clk0_clk_n("sys_clk0_clk_n"), CH0_LPDDR4_0_dq_a("CH0_LPDDR4_0_dq_a"), CH0_LPDDR4_0_dq_b("CH0_LPDDR4_0_dq_b"), CH0_LPDDR4_0_dqs_t_a("CH0_LPDDR4_0_dqs_t_a"), CH0_LPDDR4_0_dqs_t_b("CH0_LPDDR4_0_dqs_t_b"), CH0_LPDDR4_0_dqs_c_a("CH0_LPDDR4_0_dqs_c_a"), CH0_LPDDR4_0_dqs_c_b("CH0_LPDDR4_0_dqs_c_b"), CH0_LPDDR4_0_ca_a("CH0_LPDDR4_0_ca_a"), CH0_LPDDR4_0_ca_b("CH0_LPDDR4_0_ca_b"), CH0_LPDDR4_0_cs_a("CH0_LPDDR4_0_cs_a"), CH0_LPDDR4_0_cs_b("CH0_LPDDR4_0_cs_b"), CH0_LPDDR4_0_ck_t_a("CH0_LPDDR4_0_ck_t_a"), CH0_LPDDR4_0_ck_t_b("CH0_LPDDR4_0_ck_t_b"), CH0_LPDDR4_0_ck_c_a("CH0_LPDDR4_0_ck_c_a"), CH0_LPDDR4_0_ck_c_b("CH0_LPDDR4_0_ck_c_b"), CH0_LPDDR4_0_cke_a("CH0_LPDDR4_0_cke_a"), CH0_LPDDR4_0_cke_b("CH0_LPDDR4_0_cke_b"), CH0_LPDDR4_0_dmi_a("CH0_LPDDR4_0_dmi_a"), CH0_LPDDR4_0_dmi_b("CH0_LPDDR4_0_dmi_b"), CH0_LPDDR4_0_reset_n("CH0_LPDDR4_0_reset_n"), CH1_LPDDR4_0_dq_a("CH1_LPDDR4_0_dq_a"), CH1_LPDDR4_0_dq_b("CH1_LPDDR4_0_dq_b"), CH1_LPDDR4_0_dqs_t_a("CH1_LPDDR4_0_dqs_t_a"), CH1_LPDDR4_0_dqs_t_b("CH1_LPDDR4_0_dqs_t_b"), CH1_LPDDR4_0_dqs_c_a("CH1_LPDDR4_0_dqs_c_a"), CH1_LPDDR4_0_dqs_c_b("CH1_LPDDR4_0_dqs_c_b"), CH1_LPDDR4_0_ca_a("CH1_LPDDR4_0_ca_a"), CH1_LPDDR4_0_ca_b("CH1_LPDDR4_0_ca_b"), CH1_LPDDR4_0_cs_a("CH1_LPDDR4_0_cs_a"), CH1_LPDDR4_0_cs_b("CH1_LPDDR4_0_cs_b"), CH1_LPDDR4_0_ck_t_a("CH1_LPDDR4_0_ck_t_a"), CH1_LPDDR4_0_ck_t_b("CH1_LPDDR4_0_ck_t_b"), CH1_LPDDR4_0_ck_c_a("CH1_LPDDR4_0_ck_c_a"), CH1_LPDDR4_0_ck_c_b("CH1_LPDDR4_0_ck_c_b"), CH1_LPDDR4_0_cke_a("CH1_LPDDR4_0_cke_a"), CH1_LPDDR4_0_cke_b("CH1_LPDDR4_0_cke_b"), CH1_LPDDR4_0_dmi_a("CH1_LPDDR4_0_dmi_a"), CH1_LPDDR4_0_dmi_b("CH1_LPDDR4_0_dmi_b"), CH1_LPDDR4_0_reset_n("CH1_LPDDR4_0_reset_n"), sys_clk1_clk_p("sys_clk1_clk_p"), sys_clk1_clk_n("sys_clk1_clk_n"), CH0_LPDDR4_1_dq_a("CH0_LPDDR4_1_dq_a"), CH0_LPDDR4_1_dq_b("CH0_LPDDR4_1_dq_b"), CH0_LPDDR4_1_dqs_t_a("CH0_LPDDR4_1_dqs_t_a"), CH0_LPDDR4_1_dqs_t_b("CH0_LPDDR4_1_dqs_t_b"), CH0_LPDDR4_1_dqs_c_a("CH0_LPDDR4_1_dqs_c_a"), CH0_LPDDR4_1_dqs_c_b("CH0_LPDDR4_1_dqs_c_b"), CH0_LPDDR4_1_ca_a("CH0_LPDDR4_1_ca_a"), CH0_LPDDR4_1_ca_b("CH0_LPDDR4_1_ca_b"), CH0_LPDDR4_1_cs_a("CH0_LPDDR4_1_cs_a"), CH0_LPDDR4_1_cs_b("CH0_LPDDR4_1_cs_b"), CH0_LPDDR4_1_ck_t_a("CH0_LPDDR4_1_ck_t_a"), CH0_LPDDR4_1_ck_t_b("CH0_LPDDR4_1_ck_t_b"), CH0_LPDDR4_1_ck_c_a("CH0_LPDDR4_1_ck_c_a"), CH0_LPDDR4_1_ck_c_b("CH0_LPDDR4_1_ck_c_b"), CH0_LPDDR4_1_cke_a("CH0_LPDDR4_1_cke_a"), CH0_LPDDR4_1_cke_b("CH0_LPDDR4_1_cke_b"), CH0_LPDDR4_1_dmi_a("CH0_LPDDR4_1_dmi_a"), CH0_LPDDR4_1_dmi_b("CH0_LPDDR4_1_dmi_b"), CH0_LPDDR4_1_reset_n("CH0_LPDDR4_1_reset_n"), CH1_LPDDR4_1_dq_a("CH1_LPDDR4_1_dq_a"), CH1_LPDDR4_1_dq_b("CH1_LPDDR4_1_dq_b"), CH1_LPDDR4_1_dqs_t_a("CH1_LPDDR4_1_dqs_t_a"), CH1_LPDDR4_1_dqs_t_b("CH1_LPDDR4_1_dqs_t_b"), CH1_LPDDR4_1_dqs_c_a("CH1_LPDDR4_1_dqs_c_a"), CH1_LPDDR4_1_dqs_c_b("CH1_LPDDR4_1_dqs_c_b"), CH1_LPDDR4_1_ca_a("CH1_LPDDR4_1_ca_a"), CH1_LPDDR4_1_ca_b("CH1_LPDDR4_1_ca_b"), CH1_LPDDR4_1_cs_a("CH1_LPDDR4_1_cs_a"), CH1_LPDDR4_1_cs_b("CH1_LPDDR4_1_cs_b"), CH1_LPDDR4_1_ck_t_a("CH1_LPDDR4_1_ck_t_a"), CH1_LPDDR4_1_ck_t_b("CH1_LPDDR4_1_ck_t_b"), CH1_LPDDR4_1_ck_c_a("CH1_LPDDR4_1_ck_c_a"), CH1_LPDDR4_1_ck_c_b("CH1_LPDDR4_1_ck_c_b"), CH1_LPDDR4_1_cke_a("CH1_LPDDR4_1_cke_a"), CH1_LPDDR4_1_cke_b("CH1_LPDDR4_1_cke_b"), CH1_LPDDR4_1_dmi_a("CH1_LPDDR4_1_dmi_a"), CH1_LPDDR4_1_dmi_b("CH1_LPDDR4_1_dmi_b"), CH1_LPDDR4_1_reset_n("CH1_LPDDR4_1_reset_n")
{

  // initialize pins
  mp_impl->S00_INI_internoc(S00_INI_internoc);
  mp_impl->S01_INI_internoc(S01_INI_internoc);
  mp_impl->S02_INI_internoc(S02_INI_internoc);
  mp_impl->S03_INI_internoc(S03_INI_internoc);
  mp_impl->sys_clk0_clk_p(sys_clk0_clk_p);
  mp_impl->sys_clk0_clk_n(sys_clk0_clk_n);
  mp_impl->CH0_LPDDR4_0_dq_a(CH0_LPDDR4_0_dq_a);
  mp_impl->CH0_LPDDR4_0_dq_b(CH0_LPDDR4_0_dq_b);
  mp_impl->CH0_LPDDR4_0_dqs_t_a(CH0_LPDDR4_0_dqs_t_a);
  mp_impl->CH0_LPDDR4_0_dqs_t_b(CH0_LPDDR4_0_dqs_t_b);
  mp_impl->CH0_LPDDR4_0_dqs_c_a(CH0_LPDDR4_0_dqs_c_a);
  mp_impl->CH0_LPDDR4_0_dqs_c_b(CH0_LPDDR4_0_dqs_c_b);
  mp_impl->CH0_LPDDR4_0_ca_a(CH0_LPDDR4_0_ca_a);
  mp_impl->CH0_LPDDR4_0_ca_b(CH0_LPDDR4_0_ca_b);
  mp_impl->CH0_LPDDR4_0_cs_a(CH0_LPDDR4_0_cs_a);
  mp_impl->CH0_LPDDR4_0_cs_b(CH0_LPDDR4_0_cs_b);
  mp_impl->CH0_LPDDR4_0_ck_t_a(CH0_LPDDR4_0_ck_t_a);
  mp_impl->CH0_LPDDR4_0_ck_t_b(CH0_LPDDR4_0_ck_t_b);
  mp_impl->CH0_LPDDR4_0_ck_c_a(CH0_LPDDR4_0_ck_c_a);
  mp_impl->CH0_LPDDR4_0_ck_c_b(CH0_LPDDR4_0_ck_c_b);
  mp_impl->CH0_LPDDR4_0_cke_a(CH0_LPDDR4_0_cke_a);
  mp_impl->CH0_LPDDR4_0_cke_b(CH0_LPDDR4_0_cke_b);
  mp_impl->CH0_LPDDR4_0_dmi_a(CH0_LPDDR4_0_dmi_a);
  mp_impl->CH0_LPDDR4_0_dmi_b(CH0_LPDDR4_0_dmi_b);
  mp_impl->CH0_LPDDR4_0_reset_n(CH0_LPDDR4_0_reset_n);
  mp_impl->CH1_LPDDR4_0_dq_a(CH1_LPDDR4_0_dq_a);
  mp_impl->CH1_LPDDR4_0_dq_b(CH1_LPDDR4_0_dq_b);
  mp_impl->CH1_LPDDR4_0_dqs_t_a(CH1_LPDDR4_0_dqs_t_a);
  mp_impl->CH1_LPDDR4_0_dqs_t_b(CH1_LPDDR4_0_dqs_t_b);
  mp_impl->CH1_LPDDR4_0_dqs_c_a(CH1_LPDDR4_0_dqs_c_a);
  mp_impl->CH1_LPDDR4_0_dqs_c_b(CH1_LPDDR4_0_dqs_c_b);
  mp_impl->CH1_LPDDR4_0_ca_a(CH1_LPDDR4_0_ca_a);
  mp_impl->CH1_LPDDR4_0_ca_b(CH1_LPDDR4_0_ca_b);
  mp_impl->CH1_LPDDR4_0_cs_a(CH1_LPDDR4_0_cs_a);
  mp_impl->CH1_LPDDR4_0_cs_b(CH1_LPDDR4_0_cs_b);
  mp_impl->CH1_LPDDR4_0_ck_t_a(CH1_LPDDR4_0_ck_t_a);
  mp_impl->CH1_LPDDR4_0_ck_t_b(CH1_LPDDR4_0_ck_t_b);
  mp_impl->CH1_LPDDR4_0_ck_c_a(CH1_LPDDR4_0_ck_c_a);
  mp_impl->CH1_LPDDR4_0_ck_c_b(CH1_LPDDR4_0_ck_c_b);
  mp_impl->CH1_LPDDR4_0_cke_a(CH1_LPDDR4_0_cke_a);
  mp_impl->CH1_LPDDR4_0_cke_b(CH1_LPDDR4_0_cke_b);
  mp_impl->CH1_LPDDR4_0_dmi_a(CH1_LPDDR4_0_dmi_a);
  mp_impl->CH1_LPDDR4_0_dmi_b(CH1_LPDDR4_0_dmi_b);
  mp_impl->CH1_LPDDR4_0_reset_n(CH1_LPDDR4_0_reset_n);
  mp_impl->sys_clk1_clk_p(sys_clk1_clk_p);
  mp_impl->sys_clk1_clk_n(sys_clk1_clk_n);
  mp_impl->CH0_LPDDR4_1_dq_a(CH0_LPDDR4_1_dq_a);
  mp_impl->CH0_LPDDR4_1_dq_b(CH0_LPDDR4_1_dq_b);
  mp_impl->CH0_LPDDR4_1_dqs_t_a(CH0_LPDDR4_1_dqs_t_a);
  mp_impl->CH0_LPDDR4_1_dqs_t_b(CH0_LPDDR4_1_dqs_t_b);
  mp_impl->CH0_LPDDR4_1_dqs_c_a(CH0_LPDDR4_1_dqs_c_a);
  mp_impl->CH0_LPDDR4_1_dqs_c_b(CH0_LPDDR4_1_dqs_c_b);
  mp_impl->CH0_LPDDR4_1_ca_a(CH0_LPDDR4_1_ca_a);
  mp_impl->CH0_LPDDR4_1_ca_b(CH0_LPDDR4_1_ca_b);
  mp_impl->CH0_LPDDR4_1_cs_a(CH0_LPDDR4_1_cs_a);
  mp_impl->CH0_LPDDR4_1_cs_b(CH0_LPDDR4_1_cs_b);
  mp_impl->CH0_LPDDR4_1_ck_t_a(CH0_LPDDR4_1_ck_t_a);
  mp_impl->CH0_LPDDR4_1_ck_t_b(CH0_LPDDR4_1_ck_t_b);
  mp_impl->CH0_LPDDR4_1_ck_c_a(CH0_LPDDR4_1_ck_c_a);
  mp_impl->CH0_LPDDR4_1_ck_c_b(CH0_LPDDR4_1_ck_c_b);
  mp_impl->CH0_LPDDR4_1_cke_a(CH0_LPDDR4_1_cke_a);
  mp_impl->CH0_LPDDR4_1_cke_b(CH0_LPDDR4_1_cke_b);
  mp_impl->CH0_LPDDR4_1_dmi_a(CH0_LPDDR4_1_dmi_a);
  mp_impl->CH0_LPDDR4_1_dmi_b(CH0_LPDDR4_1_dmi_b);
  mp_impl->CH0_LPDDR4_1_reset_n(CH0_LPDDR4_1_reset_n);
  mp_impl->CH1_LPDDR4_1_dq_a(CH1_LPDDR4_1_dq_a);
  mp_impl->CH1_LPDDR4_1_dq_b(CH1_LPDDR4_1_dq_b);
  mp_impl->CH1_LPDDR4_1_dqs_t_a(CH1_LPDDR4_1_dqs_t_a);
  mp_impl->CH1_LPDDR4_1_dqs_t_b(CH1_LPDDR4_1_dqs_t_b);
  mp_impl->CH1_LPDDR4_1_dqs_c_a(CH1_LPDDR4_1_dqs_c_a);
  mp_impl->CH1_LPDDR4_1_dqs_c_b(CH1_LPDDR4_1_dqs_c_b);
  mp_impl->CH1_LPDDR4_1_ca_a(CH1_LPDDR4_1_ca_a);
  mp_impl->CH1_LPDDR4_1_ca_b(CH1_LPDDR4_1_ca_b);
  mp_impl->CH1_LPDDR4_1_cs_a(CH1_LPDDR4_1_cs_a);
  mp_impl->CH1_LPDDR4_1_cs_b(CH1_LPDDR4_1_cs_b);
  mp_impl->CH1_LPDDR4_1_ck_t_a(CH1_LPDDR4_1_ck_t_a);
  mp_impl->CH1_LPDDR4_1_ck_t_b(CH1_LPDDR4_1_ck_t_b);
  mp_impl->CH1_LPDDR4_1_ck_c_a(CH1_LPDDR4_1_ck_c_a);
  mp_impl->CH1_LPDDR4_1_ck_c_b(CH1_LPDDR4_1_ck_c_b);
  mp_impl->CH1_LPDDR4_1_cke_a(CH1_LPDDR4_1_cke_a);
  mp_impl->CH1_LPDDR4_1_cke_b(CH1_LPDDR4_1_cke_b);
  mp_impl->CH1_LPDDR4_1_dmi_a(CH1_LPDDR4_1_dmi_a);
  mp_impl->CH1_LPDDR4_1_dmi_b(CH1_LPDDR4_1_dmi_b);
  mp_impl->CH1_LPDDR4_1_reset_n(CH1_LPDDR4_1_reset_n);

}

void xilinx_vck190_base_noc_lpddr4_0::before_end_of_elaboration()
{
}

#endif // XM_SYSTEMC




#ifdef RIVIERA
xilinx_vck190_base_noc_lpddr4_0::xilinx_vck190_base_noc_lpddr4_0(const sc_core::sc_module_name& nm) : xilinx_vck190_base_noc_lpddr4_0_sc(nm), S00_INI_internoc("S00_INI_internoc"), S01_INI_internoc("S01_INI_internoc"), S02_INI_internoc("S02_INI_internoc"), S03_INI_internoc("S03_INI_internoc"), sys_clk0_clk_p("sys_clk0_clk_p"), sys_clk0_clk_n("sys_clk0_clk_n"), CH0_LPDDR4_0_dq_a("CH0_LPDDR4_0_dq_a"), CH0_LPDDR4_0_dq_b("CH0_LPDDR4_0_dq_b"), CH0_LPDDR4_0_dqs_t_a("CH0_LPDDR4_0_dqs_t_a"), CH0_LPDDR4_0_dqs_t_b("CH0_LPDDR4_0_dqs_t_b"), CH0_LPDDR4_0_dqs_c_a("CH0_LPDDR4_0_dqs_c_a"), CH0_LPDDR4_0_dqs_c_b("CH0_LPDDR4_0_dqs_c_b"), CH0_LPDDR4_0_ca_a("CH0_LPDDR4_0_ca_a"), CH0_LPDDR4_0_ca_b("CH0_LPDDR4_0_ca_b"), CH0_LPDDR4_0_cs_a("CH0_LPDDR4_0_cs_a"), CH0_LPDDR4_0_cs_b("CH0_LPDDR4_0_cs_b"), CH0_LPDDR4_0_ck_t_a("CH0_LPDDR4_0_ck_t_a"), CH0_LPDDR4_0_ck_t_b("CH0_LPDDR4_0_ck_t_b"), CH0_LPDDR4_0_ck_c_a("CH0_LPDDR4_0_ck_c_a"), CH0_LPDDR4_0_ck_c_b("CH0_LPDDR4_0_ck_c_b"), CH0_LPDDR4_0_cke_a("CH0_LPDDR4_0_cke_a"), CH0_LPDDR4_0_cke_b("CH0_LPDDR4_0_cke_b"), CH0_LPDDR4_0_dmi_a("CH0_LPDDR4_0_dmi_a"), CH0_LPDDR4_0_dmi_b("CH0_LPDDR4_0_dmi_b"), CH0_LPDDR4_0_reset_n("CH0_LPDDR4_0_reset_n"), CH1_LPDDR4_0_dq_a("CH1_LPDDR4_0_dq_a"), CH1_LPDDR4_0_dq_b("CH1_LPDDR4_0_dq_b"), CH1_LPDDR4_0_dqs_t_a("CH1_LPDDR4_0_dqs_t_a"), CH1_LPDDR4_0_dqs_t_b("CH1_LPDDR4_0_dqs_t_b"), CH1_LPDDR4_0_dqs_c_a("CH1_LPDDR4_0_dqs_c_a"), CH1_LPDDR4_0_dqs_c_b("CH1_LPDDR4_0_dqs_c_b"), CH1_LPDDR4_0_ca_a("CH1_LPDDR4_0_ca_a"), CH1_LPDDR4_0_ca_b("CH1_LPDDR4_0_ca_b"), CH1_LPDDR4_0_cs_a("CH1_LPDDR4_0_cs_a"), CH1_LPDDR4_0_cs_b("CH1_LPDDR4_0_cs_b"), CH1_LPDDR4_0_ck_t_a("CH1_LPDDR4_0_ck_t_a"), CH1_LPDDR4_0_ck_t_b("CH1_LPDDR4_0_ck_t_b"), CH1_LPDDR4_0_ck_c_a("CH1_LPDDR4_0_ck_c_a"), CH1_LPDDR4_0_ck_c_b("CH1_LPDDR4_0_ck_c_b"), CH1_LPDDR4_0_cke_a("CH1_LPDDR4_0_cke_a"), CH1_LPDDR4_0_cke_b("CH1_LPDDR4_0_cke_b"), CH1_LPDDR4_0_dmi_a("CH1_LPDDR4_0_dmi_a"), CH1_LPDDR4_0_dmi_b("CH1_LPDDR4_0_dmi_b"), CH1_LPDDR4_0_reset_n("CH1_LPDDR4_0_reset_n"), sys_clk1_clk_p("sys_clk1_clk_p"), sys_clk1_clk_n("sys_clk1_clk_n"), CH0_LPDDR4_1_dq_a("CH0_LPDDR4_1_dq_a"), CH0_LPDDR4_1_dq_b("CH0_LPDDR4_1_dq_b"), CH0_LPDDR4_1_dqs_t_a("CH0_LPDDR4_1_dqs_t_a"), CH0_LPDDR4_1_dqs_t_b("CH0_LPDDR4_1_dqs_t_b"), CH0_LPDDR4_1_dqs_c_a("CH0_LPDDR4_1_dqs_c_a"), CH0_LPDDR4_1_dqs_c_b("CH0_LPDDR4_1_dqs_c_b"), CH0_LPDDR4_1_ca_a("CH0_LPDDR4_1_ca_a"), CH0_LPDDR4_1_ca_b("CH0_LPDDR4_1_ca_b"), CH0_LPDDR4_1_cs_a("CH0_LPDDR4_1_cs_a"), CH0_LPDDR4_1_cs_b("CH0_LPDDR4_1_cs_b"), CH0_LPDDR4_1_ck_t_a("CH0_LPDDR4_1_ck_t_a"), CH0_LPDDR4_1_ck_t_b("CH0_LPDDR4_1_ck_t_b"), CH0_LPDDR4_1_ck_c_a("CH0_LPDDR4_1_ck_c_a"), CH0_LPDDR4_1_ck_c_b("CH0_LPDDR4_1_ck_c_b"), CH0_LPDDR4_1_cke_a("CH0_LPDDR4_1_cke_a"), CH0_LPDDR4_1_cke_b("CH0_LPDDR4_1_cke_b"), CH0_LPDDR4_1_dmi_a("CH0_LPDDR4_1_dmi_a"), CH0_LPDDR4_1_dmi_b("CH0_LPDDR4_1_dmi_b"), CH0_LPDDR4_1_reset_n("CH0_LPDDR4_1_reset_n"), CH1_LPDDR4_1_dq_a("CH1_LPDDR4_1_dq_a"), CH1_LPDDR4_1_dq_b("CH1_LPDDR4_1_dq_b"), CH1_LPDDR4_1_dqs_t_a("CH1_LPDDR4_1_dqs_t_a"), CH1_LPDDR4_1_dqs_t_b("CH1_LPDDR4_1_dqs_t_b"), CH1_LPDDR4_1_dqs_c_a("CH1_LPDDR4_1_dqs_c_a"), CH1_LPDDR4_1_dqs_c_b("CH1_LPDDR4_1_dqs_c_b"), CH1_LPDDR4_1_ca_a("CH1_LPDDR4_1_ca_a"), CH1_LPDDR4_1_ca_b("CH1_LPDDR4_1_ca_b"), CH1_LPDDR4_1_cs_a("CH1_LPDDR4_1_cs_a"), CH1_LPDDR4_1_cs_b("CH1_LPDDR4_1_cs_b"), CH1_LPDDR4_1_ck_t_a("CH1_LPDDR4_1_ck_t_a"), CH1_LPDDR4_1_ck_t_b("CH1_LPDDR4_1_ck_t_b"), CH1_LPDDR4_1_ck_c_a("CH1_LPDDR4_1_ck_c_a"), CH1_LPDDR4_1_ck_c_b("CH1_LPDDR4_1_ck_c_b"), CH1_LPDDR4_1_cke_a("CH1_LPDDR4_1_cke_a"), CH1_LPDDR4_1_cke_b("CH1_LPDDR4_1_cke_b"), CH1_LPDDR4_1_dmi_a("CH1_LPDDR4_1_dmi_a"), CH1_LPDDR4_1_dmi_b("CH1_LPDDR4_1_dmi_b"), CH1_LPDDR4_1_reset_n("CH1_LPDDR4_1_reset_n")
{

  // initialize pins
  mp_impl->S00_INI_internoc(S00_INI_internoc);
  mp_impl->S01_INI_internoc(S01_INI_internoc);
  mp_impl->S02_INI_internoc(S02_INI_internoc);
  mp_impl->S03_INI_internoc(S03_INI_internoc);
  mp_impl->sys_clk0_clk_p(sys_clk0_clk_p);
  mp_impl->sys_clk0_clk_n(sys_clk0_clk_n);
  mp_impl->CH0_LPDDR4_0_dq_a(CH0_LPDDR4_0_dq_a);
  mp_impl->CH0_LPDDR4_0_dq_b(CH0_LPDDR4_0_dq_b);
  mp_impl->CH0_LPDDR4_0_dqs_t_a(CH0_LPDDR4_0_dqs_t_a);
  mp_impl->CH0_LPDDR4_0_dqs_t_b(CH0_LPDDR4_0_dqs_t_b);
  mp_impl->CH0_LPDDR4_0_dqs_c_a(CH0_LPDDR4_0_dqs_c_a);
  mp_impl->CH0_LPDDR4_0_dqs_c_b(CH0_LPDDR4_0_dqs_c_b);
  mp_impl->CH0_LPDDR4_0_ca_a(CH0_LPDDR4_0_ca_a);
  mp_impl->CH0_LPDDR4_0_ca_b(CH0_LPDDR4_0_ca_b);
  mp_impl->CH0_LPDDR4_0_cs_a(CH0_LPDDR4_0_cs_a);
  mp_impl->CH0_LPDDR4_0_cs_b(CH0_LPDDR4_0_cs_b);
  mp_impl->CH0_LPDDR4_0_ck_t_a(CH0_LPDDR4_0_ck_t_a);
  mp_impl->CH0_LPDDR4_0_ck_t_b(CH0_LPDDR4_0_ck_t_b);
  mp_impl->CH0_LPDDR4_0_ck_c_a(CH0_LPDDR4_0_ck_c_a);
  mp_impl->CH0_LPDDR4_0_ck_c_b(CH0_LPDDR4_0_ck_c_b);
  mp_impl->CH0_LPDDR4_0_cke_a(CH0_LPDDR4_0_cke_a);
  mp_impl->CH0_LPDDR4_0_cke_b(CH0_LPDDR4_0_cke_b);
  mp_impl->CH0_LPDDR4_0_dmi_a(CH0_LPDDR4_0_dmi_a);
  mp_impl->CH0_LPDDR4_0_dmi_b(CH0_LPDDR4_0_dmi_b);
  mp_impl->CH0_LPDDR4_0_reset_n(CH0_LPDDR4_0_reset_n);
  mp_impl->CH1_LPDDR4_0_dq_a(CH1_LPDDR4_0_dq_a);
  mp_impl->CH1_LPDDR4_0_dq_b(CH1_LPDDR4_0_dq_b);
  mp_impl->CH1_LPDDR4_0_dqs_t_a(CH1_LPDDR4_0_dqs_t_a);
  mp_impl->CH1_LPDDR4_0_dqs_t_b(CH1_LPDDR4_0_dqs_t_b);
  mp_impl->CH1_LPDDR4_0_dqs_c_a(CH1_LPDDR4_0_dqs_c_a);
  mp_impl->CH1_LPDDR4_0_dqs_c_b(CH1_LPDDR4_0_dqs_c_b);
  mp_impl->CH1_LPDDR4_0_ca_a(CH1_LPDDR4_0_ca_a);
  mp_impl->CH1_LPDDR4_0_ca_b(CH1_LPDDR4_0_ca_b);
  mp_impl->CH1_LPDDR4_0_cs_a(CH1_LPDDR4_0_cs_a);
  mp_impl->CH1_LPDDR4_0_cs_b(CH1_LPDDR4_0_cs_b);
  mp_impl->CH1_LPDDR4_0_ck_t_a(CH1_LPDDR4_0_ck_t_a);
  mp_impl->CH1_LPDDR4_0_ck_t_b(CH1_LPDDR4_0_ck_t_b);
  mp_impl->CH1_LPDDR4_0_ck_c_a(CH1_LPDDR4_0_ck_c_a);
  mp_impl->CH1_LPDDR4_0_ck_c_b(CH1_LPDDR4_0_ck_c_b);
  mp_impl->CH1_LPDDR4_0_cke_a(CH1_LPDDR4_0_cke_a);
  mp_impl->CH1_LPDDR4_0_cke_b(CH1_LPDDR4_0_cke_b);
  mp_impl->CH1_LPDDR4_0_dmi_a(CH1_LPDDR4_0_dmi_a);
  mp_impl->CH1_LPDDR4_0_dmi_b(CH1_LPDDR4_0_dmi_b);
  mp_impl->CH1_LPDDR4_0_reset_n(CH1_LPDDR4_0_reset_n);
  mp_impl->sys_clk1_clk_p(sys_clk1_clk_p);
  mp_impl->sys_clk1_clk_n(sys_clk1_clk_n);
  mp_impl->CH0_LPDDR4_1_dq_a(CH0_LPDDR4_1_dq_a);
  mp_impl->CH0_LPDDR4_1_dq_b(CH0_LPDDR4_1_dq_b);
  mp_impl->CH0_LPDDR4_1_dqs_t_a(CH0_LPDDR4_1_dqs_t_a);
  mp_impl->CH0_LPDDR4_1_dqs_t_b(CH0_LPDDR4_1_dqs_t_b);
  mp_impl->CH0_LPDDR4_1_dqs_c_a(CH0_LPDDR4_1_dqs_c_a);
  mp_impl->CH0_LPDDR4_1_dqs_c_b(CH0_LPDDR4_1_dqs_c_b);
  mp_impl->CH0_LPDDR4_1_ca_a(CH0_LPDDR4_1_ca_a);
  mp_impl->CH0_LPDDR4_1_ca_b(CH0_LPDDR4_1_ca_b);
  mp_impl->CH0_LPDDR4_1_cs_a(CH0_LPDDR4_1_cs_a);
  mp_impl->CH0_LPDDR4_1_cs_b(CH0_LPDDR4_1_cs_b);
  mp_impl->CH0_LPDDR4_1_ck_t_a(CH0_LPDDR4_1_ck_t_a);
  mp_impl->CH0_LPDDR4_1_ck_t_b(CH0_LPDDR4_1_ck_t_b);
  mp_impl->CH0_LPDDR4_1_ck_c_a(CH0_LPDDR4_1_ck_c_a);
  mp_impl->CH0_LPDDR4_1_ck_c_b(CH0_LPDDR4_1_ck_c_b);
  mp_impl->CH0_LPDDR4_1_cke_a(CH0_LPDDR4_1_cke_a);
  mp_impl->CH0_LPDDR4_1_cke_b(CH0_LPDDR4_1_cke_b);
  mp_impl->CH0_LPDDR4_1_dmi_a(CH0_LPDDR4_1_dmi_a);
  mp_impl->CH0_LPDDR4_1_dmi_b(CH0_LPDDR4_1_dmi_b);
  mp_impl->CH0_LPDDR4_1_reset_n(CH0_LPDDR4_1_reset_n);
  mp_impl->CH1_LPDDR4_1_dq_a(CH1_LPDDR4_1_dq_a);
  mp_impl->CH1_LPDDR4_1_dq_b(CH1_LPDDR4_1_dq_b);
  mp_impl->CH1_LPDDR4_1_dqs_t_a(CH1_LPDDR4_1_dqs_t_a);
  mp_impl->CH1_LPDDR4_1_dqs_t_b(CH1_LPDDR4_1_dqs_t_b);
  mp_impl->CH1_LPDDR4_1_dqs_c_a(CH1_LPDDR4_1_dqs_c_a);
  mp_impl->CH1_LPDDR4_1_dqs_c_b(CH1_LPDDR4_1_dqs_c_b);
  mp_impl->CH1_LPDDR4_1_ca_a(CH1_LPDDR4_1_ca_a);
  mp_impl->CH1_LPDDR4_1_ca_b(CH1_LPDDR4_1_ca_b);
  mp_impl->CH1_LPDDR4_1_cs_a(CH1_LPDDR4_1_cs_a);
  mp_impl->CH1_LPDDR4_1_cs_b(CH1_LPDDR4_1_cs_b);
  mp_impl->CH1_LPDDR4_1_ck_t_a(CH1_LPDDR4_1_ck_t_a);
  mp_impl->CH1_LPDDR4_1_ck_t_b(CH1_LPDDR4_1_ck_t_b);
  mp_impl->CH1_LPDDR4_1_ck_c_a(CH1_LPDDR4_1_ck_c_a);
  mp_impl->CH1_LPDDR4_1_ck_c_b(CH1_LPDDR4_1_ck_c_b);
  mp_impl->CH1_LPDDR4_1_cke_a(CH1_LPDDR4_1_cke_a);
  mp_impl->CH1_LPDDR4_1_cke_b(CH1_LPDDR4_1_cke_b);
  mp_impl->CH1_LPDDR4_1_dmi_a(CH1_LPDDR4_1_dmi_a);
  mp_impl->CH1_LPDDR4_1_dmi_b(CH1_LPDDR4_1_dmi_b);
  mp_impl->CH1_LPDDR4_1_reset_n(CH1_LPDDR4_1_reset_n);

}

void xilinx_vck190_base_noc_lpddr4_0::before_end_of_elaboration()
{
}

#endif // RIVIERA




#ifdef VCSSYSTEMC
xilinx_vck190_base_noc_lpddr4_0::xilinx_vck190_base_noc_lpddr4_0(const sc_core::sc_module_name& nm) : xilinx_vck190_base_noc_lpddr4_0_sc(nm),  S00_INI_internoc("S00_INI_internoc"), S01_INI_internoc("S01_INI_internoc"), S02_INI_internoc("S02_INI_internoc"), S03_INI_internoc("S03_INI_internoc"), sys_clk0_clk_p("sys_clk0_clk_p"), sys_clk0_clk_n("sys_clk0_clk_n"), CH0_LPDDR4_0_dq_a("CH0_LPDDR4_0_dq_a"), CH0_LPDDR4_0_dq_b("CH0_LPDDR4_0_dq_b"), CH0_LPDDR4_0_dqs_t_a("CH0_LPDDR4_0_dqs_t_a"), CH0_LPDDR4_0_dqs_t_b("CH0_LPDDR4_0_dqs_t_b"), CH0_LPDDR4_0_dqs_c_a("CH0_LPDDR4_0_dqs_c_a"), CH0_LPDDR4_0_dqs_c_b("CH0_LPDDR4_0_dqs_c_b"), CH0_LPDDR4_0_ca_a("CH0_LPDDR4_0_ca_a"), CH0_LPDDR4_0_ca_b("CH0_LPDDR4_0_ca_b"), CH0_LPDDR4_0_cs_a("CH0_LPDDR4_0_cs_a"), CH0_LPDDR4_0_cs_b("CH0_LPDDR4_0_cs_b"), CH0_LPDDR4_0_ck_t_a("CH0_LPDDR4_0_ck_t_a"), CH0_LPDDR4_0_ck_t_b("CH0_LPDDR4_0_ck_t_b"), CH0_LPDDR4_0_ck_c_a("CH0_LPDDR4_0_ck_c_a"), CH0_LPDDR4_0_ck_c_b("CH0_LPDDR4_0_ck_c_b"), CH0_LPDDR4_0_cke_a("CH0_LPDDR4_0_cke_a"), CH0_LPDDR4_0_cke_b("CH0_LPDDR4_0_cke_b"), CH0_LPDDR4_0_dmi_a("CH0_LPDDR4_0_dmi_a"), CH0_LPDDR4_0_dmi_b("CH0_LPDDR4_0_dmi_b"), CH0_LPDDR4_0_reset_n("CH0_LPDDR4_0_reset_n"), CH1_LPDDR4_0_dq_a("CH1_LPDDR4_0_dq_a"), CH1_LPDDR4_0_dq_b("CH1_LPDDR4_0_dq_b"), CH1_LPDDR4_0_dqs_t_a("CH1_LPDDR4_0_dqs_t_a"), CH1_LPDDR4_0_dqs_t_b("CH1_LPDDR4_0_dqs_t_b"), CH1_LPDDR4_0_dqs_c_a("CH1_LPDDR4_0_dqs_c_a"), CH1_LPDDR4_0_dqs_c_b("CH1_LPDDR4_0_dqs_c_b"), CH1_LPDDR4_0_ca_a("CH1_LPDDR4_0_ca_a"), CH1_LPDDR4_0_ca_b("CH1_LPDDR4_0_ca_b"), CH1_LPDDR4_0_cs_a("CH1_LPDDR4_0_cs_a"), CH1_LPDDR4_0_cs_b("CH1_LPDDR4_0_cs_b"), CH1_LPDDR4_0_ck_t_a("CH1_LPDDR4_0_ck_t_a"), CH1_LPDDR4_0_ck_t_b("CH1_LPDDR4_0_ck_t_b"), CH1_LPDDR4_0_ck_c_a("CH1_LPDDR4_0_ck_c_a"), CH1_LPDDR4_0_ck_c_b("CH1_LPDDR4_0_ck_c_b"), CH1_LPDDR4_0_cke_a("CH1_LPDDR4_0_cke_a"), CH1_LPDDR4_0_cke_b("CH1_LPDDR4_0_cke_b"), CH1_LPDDR4_0_dmi_a("CH1_LPDDR4_0_dmi_a"), CH1_LPDDR4_0_dmi_b("CH1_LPDDR4_0_dmi_b"), CH1_LPDDR4_0_reset_n("CH1_LPDDR4_0_reset_n"), sys_clk1_clk_p("sys_clk1_clk_p"), sys_clk1_clk_n("sys_clk1_clk_n"), CH0_LPDDR4_1_dq_a("CH0_LPDDR4_1_dq_a"), CH0_LPDDR4_1_dq_b("CH0_LPDDR4_1_dq_b"), CH0_LPDDR4_1_dqs_t_a("CH0_LPDDR4_1_dqs_t_a"), CH0_LPDDR4_1_dqs_t_b("CH0_LPDDR4_1_dqs_t_b"), CH0_LPDDR4_1_dqs_c_a("CH0_LPDDR4_1_dqs_c_a"), CH0_LPDDR4_1_dqs_c_b("CH0_LPDDR4_1_dqs_c_b"), CH0_LPDDR4_1_ca_a("CH0_LPDDR4_1_ca_a"), CH0_LPDDR4_1_ca_b("CH0_LPDDR4_1_ca_b"), CH0_LPDDR4_1_cs_a("CH0_LPDDR4_1_cs_a"), CH0_LPDDR4_1_cs_b("CH0_LPDDR4_1_cs_b"), CH0_LPDDR4_1_ck_t_a("CH0_LPDDR4_1_ck_t_a"), CH0_LPDDR4_1_ck_t_b("CH0_LPDDR4_1_ck_t_b"), CH0_LPDDR4_1_ck_c_a("CH0_LPDDR4_1_ck_c_a"), CH0_LPDDR4_1_ck_c_b("CH0_LPDDR4_1_ck_c_b"), CH0_LPDDR4_1_cke_a("CH0_LPDDR4_1_cke_a"), CH0_LPDDR4_1_cke_b("CH0_LPDDR4_1_cke_b"), CH0_LPDDR4_1_dmi_a("CH0_LPDDR4_1_dmi_a"), CH0_LPDDR4_1_dmi_b("CH0_LPDDR4_1_dmi_b"), CH0_LPDDR4_1_reset_n("CH0_LPDDR4_1_reset_n"), CH1_LPDDR4_1_dq_a("CH1_LPDDR4_1_dq_a"), CH1_LPDDR4_1_dq_b("CH1_LPDDR4_1_dq_b"), CH1_LPDDR4_1_dqs_t_a("CH1_LPDDR4_1_dqs_t_a"), CH1_LPDDR4_1_dqs_t_b("CH1_LPDDR4_1_dqs_t_b"), CH1_LPDDR4_1_dqs_c_a("CH1_LPDDR4_1_dqs_c_a"), CH1_LPDDR4_1_dqs_c_b("CH1_LPDDR4_1_dqs_c_b"), CH1_LPDDR4_1_ca_a("CH1_LPDDR4_1_ca_a"), CH1_LPDDR4_1_ca_b("CH1_LPDDR4_1_ca_b"), CH1_LPDDR4_1_cs_a("CH1_LPDDR4_1_cs_a"), CH1_LPDDR4_1_cs_b("CH1_LPDDR4_1_cs_b"), CH1_LPDDR4_1_ck_t_a("CH1_LPDDR4_1_ck_t_a"), CH1_LPDDR4_1_ck_t_b("CH1_LPDDR4_1_ck_t_b"), CH1_LPDDR4_1_ck_c_a("CH1_LPDDR4_1_ck_c_a"), CH1_LPDDR4_1_ck_c_b("CH1_LPDDR4_1_ck_c_b"), CH1_LPDDR4_1_cke_a("CH1_LPDDR4_1_cke_a"), CH1_LPDDR4_1_cke_b("CH1_LPDDR4_1_cke_b"), CH1_LPDDR4_1_dmi_a("CH1_LPDDR4_1_dmi_a"), CH1_LPDDR4_1_dmi_b("CH1_LPDDR4_1_dmi_b"), CH1_LPDDR4_1_reset_n("CH1_LPDDR4_1_reset_n")
{
  // initialize pins
  mp_impl->S00_INI_internoc(S00_INI_internoc);
  mp_impl->S01_INI_internoc(S01_INI_internoc);
  mp_impl->S02_INI_internoc(S02_INI_internoc);
  mp_impl->S03_INI_internoc(S03_INI_internoc);
  mp_impl->sys_clk0_clk_p(sys_clk0_clk_p);
  mp_impl->sys_clk0_clk_n(sys_clk0_clk_n);
  mp_impl->CH0_LPDDR4_0_dq_a(CH0_LPDDR4_0_dq_a);
  mp_impl->CH0_LPDDR4_0_dq_b(CH0_LPDDR4_0_dq_b);
  mp_impl->CH0_LPDDR4_0_dqs_t_a(CH0_LPDDR4_0_dqs_t_a);
  mp_impl->CH0_LPDDR4_0_dqs_t_b(CH0_LPDDR4_0_dqs_t_b);
  mp_impl->CH0_LPDDR4_0_dqs_c_a(CH0_LPDDR4_0_dqs_c_a);
  mp_impl->CH0_LPDDR4_0_dqs_c_b(CH0_LPDDR4_0_dqs_c_b);
  mp_impl->CH0_LPDDR4_0_ca_a(CH0_LPDDR4_0_ca_a);
  mp_impl->CH0_LPDDR4_0_ca_b(CH0_LPDDR4_0_ca_b);
  mp_impl->CH0_LPDDR4_0_cs_a(CH0_LPDDR4_0_cs_a);
  mp_impl->CH0_LPDDR4_0_cs_b(CH0_LPDDR4_0_cs_b);
  mp_impl->CH0_LPDDR4_0_ck_t_a(CH0_LPDDR4_0_ck_t_a);
  mp_impl->CH0_LPDDR4_0_ck_t_b(CH0_LPDDR4_0_ck_t_b);
  mp_impl->CH0_LPDDR4_0_ck_c_a(CH0_LPDDR4_0_ck_c_a);
  mp_impl->CH0_LPDDR4_0_ck_c_b(CH0_LPDDR4_0_ck_c_b);
  mp_impl->CH0_LPDDR4_0_cke_a(CH0_LPDDR4_0_cke_a);
  mp_impl->CH0_LPDDR4_0_cke_b(CH0_LPDDR4_0_cke_b);
  mp_impl->CH0_LPDDR4_0_dmi_a(CH0_LPDDR4_0_dmi_a);
  mp_impl->CH0_LPDDR4_0_dmi_b(CH0_LPDDR4_0_dmi_b);
  mp_impl->CH0_LPDDR4_0_reset_n(CH0_LPDDR4_0_reset_n);
  mp_impl->CH1_LPDDR4_0_dq_a(CH1_LPDDR4_0_dq_a);
  mp_impl->CH1_LPDDR4_0_dq_b(CH1_LPDDR4_0_dq_b);
  mp_impl->CH1_LPDDR4_0_dqs_t_a(CH1_LPDDR4_0_dqs_t_a);
  mp_impl->CH1_LPDDR4_0_dqs_t_b(CH1_LPDDR4_0_dqs_t_b);
  mp_impl->CH1_LPDDR4_0_dqs_c_a(CH1_LPDDR4_0_dqs_c_a);
  mp_impl->CH1_LPDDR4_0_dqs_c_b(CH1_LPDDR4_0_dqs_c_b);
  mp_impl->CH1_LPDDR4_0_ca_a(CH1_LPDDR4_0_ca_a);
  mp_impl->CH1_LPDDR4_0_ca_b(CH1_LPDDR4_0_ca_b);
  mp_impl->CH1_LPDDR4_0_cs_a(CH1_LPDDR4_0_cs_a);
  mp_impl->CH1_LPDDR4_0_cs_b(CH1_LPDDR4_0_cs_b);
  mp_impl->CH1_LPDDR4_0_ck_t_a(CH1_LPDDR4_0_ck_t_a);
  mp_impl->CH1_LPDDR4_0_ck_t_b(CH1_LPDDR4_0_ck_t_b);
  mp_impl->CH1_LPDDR4_0_ck_c_a(CH1_LPDDR4_0_ck_c_a);
  mp_impl->CH1_LPDDR4_0_ck_c_b(CH1_LPDDR4_0_ck_c_b);
  mp_impl->CH1_LPDDR4_0_cke_a(CH1_LPDDR4_0_cke_a);
  mp_impl->CH1_LPDDR4_0_cke_b(CH1_LPDDR4_0_cke_b);
  mp_impl->CH1_LPDDR4_0_dmi_a(CH1_LPDDR4_0_dmi_a);
  mp_impl->CH1_LPDDR4_0_dmi_b(CH1_LPDDR4_0_dmi_b);
  mp_impl->CH1_LPDDR4_0_reset_n(CH1_LPDDR4_0_reset_n);
  mp_impl->sys_clk1_clk_p(sys_clk1_clk_p);
  mp_impl->sys_clk1_clk_n(sys_clk1_clk_n);
  mp_impl->CH0_LPDDR4_1_dq_a(CH0_LPDDR4_1_dq_a);
  mp_impl->CH0_LPDDR4_1_dq_b(CH0_LPDDR4_1_dq_b);
  mp_impl->CH0_LPDDR4_1_dqs_t_a(CH0_LPDDR4_1_dqs_t_a);
  mp_impl->CH0_LPDDR4_1_dqs_t_b(CH0_LPDDR4_1_dqs_t_b);
  mp_impl->CH0_LPDDR4_1_dqs_c_a(CH0_LPDDR4_1_dqs_c_a);
  mp_impl->CH0_LPDDR4_1_dqs_c_b(CH0_LPDDR4_1_dqs_c_b);
  mp_impl->CH0_LPDDR4_1_ca_a(CH0_LPDDR4_1_ca_a);
  mp_impl->CH0_LPDDR4_1_ca_b(CH0_LPDDR4_1_ca_b);
  mp_impl->CH0_LPDDR4_1_cs_a(CH0_LPDDR4_1_cs_a);
  mp_impl->CH0_LPDDR4_1_cs_b(CH0_LPDDR4_1_cs_b);
  mp_impl->CH0_LPDDR4_1_ck_t_a(CH0_LPDDR4_1_ck_t_a);
  mp_impl->CH0_LPDDR4_1_ck_t_b(CH0_LPDDR4_1_ck_t_b);
  mp_impl->CH0_LPDDR4_1_ck_c_a(CH0_LPDDR4_1_ck_c_a);
  mp_impl->CH0_LPDDR4_1_ck_c_b(CH0_LPDDR4_1_ck_c_b);
  mp_impl->CH0_LPDDR4_1_cke_a(CH0_LPDDR4_1_cke_a);
  mp_impl->CH0_LPDDR4_1_cke_b(CH0_LPDDR4_1_cke_b);
  mp_impl->CH0_LPDDR4_1_dmi_a(CH0_LPDDR4_1_dmi_a);
  mp_impl->CH0_LPDDR4_1_dmi_b(CH0_LPDDR4_1_dmi_b);
  mp_impl->CH0_LPDDR4_1_reset_n(CH0_LPDDR4_1_reset_n);
  mp_impl->CH1_LPDDR4_1_dq_a(CH1_LPDDR4_1_dq_a);
  mp_impl->CH1_LPDDR4_1_dq_b(CH1_LPDDR4_1_dq_b);
  mp_impl->CH1_LPDDR4_1_dqs_t_a(CH1_LPDDR4_1_dqs_t_a);
  mp_impl->CH1_LPDDR4_1_dqs_t_b(CH1_LPDDR4_1_dqs_t_b);
  mp_impl->CH1_LPDDR4_1_dqs_c_a(CH1_LPDDR4_1_dqs_c_a);
  mp_impl->CH1_LPDDR4_1_dqs_c_b(CH1_LPDDR4_1_dqs_c_b);
  mp_impl->CH1_LPDDR4_1_ca_a(CH1_LPDDR4_1_ca_a);
  mp_impl->CH1_LPDDR4_1_ca_b(CH1_LPDDR4_1_ca_b);
  mp_impl->CH1_LPDDR4_1_cs_a(CH1_LPDDR4_1_cs_a);
  mp_impl->CH1_LPDDR4_1_cs_b(CH1_LPDDR4_1_cs_b);
  mp_impl->CH1_LPDDR4_1_ck_t_a(CH1_LPDDR4_1_ck_t_a);
  mp_impl->CH1_LPDDR4_1_ck_t_b(CH1_LPDDR4_1_ck_t_b);
  mp_impl->CH1_LPDDR4_1_ck_c_a(CH1_LPDDR4_1_ck_c_a);
  mp_impl->CH1_LPDDR4_1_ck_c_b(CH1_LPDDR4_1_ck_c_b);
  mp_impl->CH1_LPDDR4_1_cke_a(CH1_LPDDR4_1_cke_a);
  mp_impl->CH1_LPDDR4_1_cke_b(CH1_LPDDR4_1_cke_b);
  mp_impl->CH1_LPDDR4_1_dmi_a(CH1_LPDDR4_1_dmi_a);
  mp_impl->CH1_LPDDR4_1_dmi_b(CH1_LPDDR4_1_dmi_b);
  mp_impl->CH1_LPDDR4_1_reset_n(CH1_LPDDR4_1_reset_n);

  // Instantiate Socket Stubs


}

void xilinx_vck190_base_noc_lpddr4_0::before_end_of_elaboration()
{
}

#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
xilinx_vck190_base_noc_lpddr4_0::xilinx_vck190_base_noc_lpddr4_0(const sc_core::sc_module_name& nm) : xilinx_vck190_base_noc_lpddr4_0_sc(nm), S00_INI_internoc("S00_INI_internoc"), S01_INI_internoc("S01_INI_internoc"), S02_INI_internoc("S02_INI_internoc"), S03_INI_internoc("S03_INI_internoc"), sys_clk0_clk_p("sys_clk0_clk_p"), sys_clk0_clk_n("sys_clk0_clk_n"), CH0_LPDDR4_0_dq_a("CH0_LPDDR4_0_dq_a"), CH0_LPDDR4_0_dq_b("CH0_LPDDR4_0_dq_b"), CH0_LPDDR4_0_dqs_t_a("CH0_LPDDR4_0_dqs_t_a"), CH0_LPDDR4_0_dqs_t_b("CH0_LPDDR4_0_dqs_t_b"), CH0_LPDDR4_0_dqs_c_a("CH0_LPDDR4_0_dqs_c_a"), CH0_LPDDR4_0_dqs_c_b("CH0_LPDDR4_0_dqs_c_b"), CH0_LPDDR4_0_ca_a("CH0_LPDDR4_0_ca_a"), CH0_LPDDR4_0_ca_b("CH0_LPDDR4_0_ca_b"), CH0_LPDDR4_0_cs_a("CH0_LPDDR4_0_cs_a"), CH0_LPDDR4_0_cs_b("CH0_LPDDR4_0_cs_b"), CH0_LPDDR4_0_ck_t_a("CH0_LPDDR4_0_ck_t_a"), CH0_LPDDR4_0_ck_t_b("CH0_LPDDR4_0_ck_t_b"), CH0_LPDDR4_0_ck_c_a("CH0_LPDDR4_0_ck_c_a"), CH0_LPDDR4_0_ck_c_b("CH0_LPDDR4_0_ck_c_b"), CH0_LPDDR4_0_cke_a("CH0_LPDDR4_0_cke_a"), CH0_LPDDR4_0_cke_b("CH0_LPDDR4_0_cke_b"), CH0_LPDDR4_0_dmi_a("CH0_LPDDR4_0_dmi_a"), CH0_LPDDR4_0_dmi_b("CH0_LPDDR4_0_dmi_b"), CH0_LPDDR4_0_reset_n("CH0_LPDDR4_0_reset_n"), CH1_LPDDR4_0_dq_a("CH1_LPDDR4_0_dq_a"), CH1_LPDDR4_0_dq_b("CH1_LPDDR4_0_dq_b"), CH1_LPDDR4_0_dqs_t_a("CH1_LPDDR4_0_dqs_t_a"), CH1_LPDDR4_0_dqs_t_b("CH1_LPDDR4_0_dqs_t_b"), CH1_LPDDR4_0_dqs_c_a("CH1_LPDDR4_0_dqs_c_a"), CH1_LPDDR4_0_dqs_c_b("CH1_LPDDR4_0_dqs_c_b"), CH1_LPDDR4_0_ca_a("CH1_LPDDR4_0_ca_a"), CH1_LPDDR4_0_ca_b("CH1_LPDDR4_0_ca_b"), CH1_LPDDR4_0_cs_a("CH1_LPDDR4_0_cs_a"), CH1_LPDDR4_0_cs_b("CH1_LPDDR4_0_cs_b"), CH1_LPDDR4_0_ck_t_a("CH1_LPDDR4_0_ck_t_a"), CH1_LPDDR4_0_ck_t_b("CH1_LPDDR4_0_ck_t_b"), CH1_LPDDR4_0_ck_c_a("CH1_LPDDR4_0_ck_c_a"), CH1_LPDDR4_0_ck_c_b("CH1_LPDDR4_0_ck_c_b"), CH1_LPDDR4_0_cke_a("CH1_LPDDR4_0_cke_a"), CH1_LPDDR4_0_cke_b("CH1_LPDDR4_0_cke_b"), CH1_LPDDR4_0_dmi_a("CH1_LPDDR4_0_dmi_a"), CH1_LPDDR4_0_dmi_b("CH1_LPDDR4_0_dmi_b"), CH1_LPDDR4_0_reset_n("CH1_LPDDR4_0_reset_n"), sys_clk1_clk_p("sys_clk1_clk_p"), sys_clk1_clk_n("sys_clk1_clk_n"), CH0_LPDDR4_1_dq_a("CH0_LPDDR4_1_dq_a"), CH0_LPDDR4_1_dq_b("CH0_LPDDR4_1_dq_b"), CH0_LPDDR4_1_dqs_t_a("CH0_LPDDR4_1_dqs_t_a"), CH0_LPDDR4_1_dqs_t_b("CH0_LPDDR4_1_dqs_t_b"), CH0_LPDDR4_1_dqs_c_a("CH0_LPDDR4_1_dqs_c_a"), CH0_LPDDR4_1_dqs_c_b("CH0_LPDDR4_1_dqs_c_b"), CH0_LPDDR4_1_ca_a("CH0_LPDDR4_1_ca_a"), CH0_LPDDR4_1_ca_b("CH0_LPDDR4_1_ca_b"), CH0_LPDDR4_1_cs_a("CH0_LPDDR4_1_cs_a"), CH0_LPDDR4_1_cs_b("CH0_LPDDR4_1_cs_b"), CH0_LPDDR4_1_ck_t_a("CH0_LPDDR4_1_ck_t_a"), CH0_LPDDR4_1_ck_t_b("CH0_LPDDR4_1_ck_t_b"), CH0_LPDDR4_1_ck_c_a("CH0_LPDDR4_1_ck_c_a"), CH0_LPDDR4_1_ck_c_b("CH0_LPDDR4_1_ck_c_b"), CH0_LPDDR4_1_cke_a("CH0_LPDDR4_1_cke_a"), CH0_LPDDR4_1_cke_b("CH0_LPDDR4_1_cke_b"), CH0_LPDDR4_1_dmi_a("CH0_LPDDR4_1_dmi_a"), CH0_LPDDR4_1_dmi_b("CH0_LPDDR4_1_dmi_b"), CH0_LPDDR4_1_reset_n("CH0_LPDDR4_1_reset_n"), CH1_LPDDR4_1_dq_a("CH1_LPDDR4_1_dq_a"), CH1_LPDDR4_1_dq_b("CH1_LPDDR4_1_dq_b"), CH1_LPDDR4_1_dqs_t_a("CH1_LPDDR4_1_dqs_t_a"), CH1_LPDDR4_1_dqs_t_b("CH1_LPDDR4_1_dqs_t_b"), CH1_LPDDR4_1_dqs_c_a("CH1_LPDDR4_1_dqs_c_a"), CH1_LPDDR4_1_dqs_c_b("CH1_LPDDR4_1_dqs_c_b"), CH1_LPDDR4_1_ca_a("CH1_LPDDR4_1_ca_a"), CH1_LPDDR4_1_ca_b("CH1_LPDDR4_1_ca_b"), CH1_LPDDR4_1_cs_a("CH1_LPDDR4_1_cs_a"), CH1_LPDDR4_1_cs_b("CH1_LPDDR4_1_cs_b"), CH1_LPDDR4_1_ck_t_a("CH1_LPDDR4_1_ck_t_a"), CH1_LPDDR4_1_ck_t_b("CH1_LPDDR4_1_ck_t_b"), CH1_LPDDR4_1_ck_c_a("CH1_LPDDR4_1_ck_c_a"), CH1_LPDDR4_1_ck_c_b("CH1_LPDDR4_1_ck_c_b"), CH1_LPDDR4_1_cke_a("CH1_LPDDR4_1_cke_a"), CH1_LPDDR4_1_cke_b("CH1_LPDDR4_1_cke_b"), CH1_LPDDR4_1_dmi_a("CH1_LPDDR4_1_dmi_a"), CH1_LPDDR4_1_dmi_b("CH1_LPDDR4_1_dmi_b"), CH1_LPDDR4_1_reset_n("CH1_LPDDR4_1_reset_n")
{

  // initialize pins
  mp_impl->S00_INI_internoc(S00_INI_internoc);
  mp_impl->S01_INI_internoc(S01_INI_internoc);
  mp_impl->S02_INI_internoc(S02_INI_internoc);
  mp_impl->S03_INI_internoc(S03_INI_internoc);
  mp_impl->sys_clk0_clk_p(sys_clk0_clk_p);
  mp_impl->sys_clk0_clk_n(sys_clk0_clk_n);
  mp_impl->CH0_LPDDR4_0_dq_a(CH0_LPDDR4_0_dq_a);
  mp_impl->CH0_LPDDR4_0_dq_b(CH0_LPDDR4_0_dq_b);
  mp_impl->CH0_LPDDR4_0_dqs_t_a(CH0_LPDDR4_0_dqs_t_a);
  mp_impl->CH0_LPDDR4_0_dqs_t_b(CH0_LPDDR4_0_dqs_t_b);
  mp_impl->CH0_LPDDR4_0_dqs_c_a(CH0_LPDDR4_0_dqs_c_a);
  mp_impl->CH0_LPDDR4_0_dqs_c_b(CH0_LPDDR4_0_dqs_c_b);
  mp_impl->CH0_LPDDR4_0_ca_a(CH0_LPDDR4_0_ca_a);
  mp_impl->CH0_LPDDR4_0_ca_b(CH0_LPDDR4_0_ca_b);
  mp_impl->CH0_LPDDR4_0_cs_a(CH0_LPDDR4_0_cs_a);
  mp_impl->CH0_LPDDR4_0_cs_b(CH0_LPDDR4_0_cs_b);
  mp_impl->CH0_LPDDR4_0_ck_t_a(CH0_LPDDR4_0_ck_t_a);
  mp_impl->CH0_LPDDR4_0_ck_t_b(CH0_LPDDR4_0_ck_t_b);
  mp_impl->CH0_LPDDR4_0_ck_c_a(CH0_LPDDR4_0_ck_c_a);
  mp_impl->CH0_LPDDR4_0_ck_c_b(CH0_LPDDR4_0_ck_c_b);
  mp_impl->CH0_LPDDR4_0_cke_a(CH0_LPDDR4_0_cke_a);
  mp_impl->CH0_LPDDR4_0_cke_b(CH0_LPDDR4_0_cke_b);
  mp_impl->CH0_LPDDR4_0_dmi_a(CH0_LPDDR4_0_dmi_a);
  mp_impl->CH0_LPDDR4_0_dmi_b(CH0_LPDDR4_0_dmi_b);
  mp_impl->CH0_LPDDR4_0_reset_n(CH0_LPDDR4_0_reset_n);
  mp_impl->CH1_LPDDR4_0_dq_a(CH1_LPDDR4_0_dq_a);
  mp_impl->CH1_LPDDR4_0_dq_b(CH1_LPDDR4_0_dq_b);
  mp_impl->CH1_LPDDR4_0_dqs_t_a(CH1_LPDDR4_0_dqs_t_a);
  mp_impl->CH1_LPDDR4_0_dqs_t_b(CH1_LPDDR4_0_dqs_t_b);
  mp_impl->CH1_LPDDR4_0_dqs_c_a(CH1_LPDDR4_0_dqs_c_a);
  mp_impl->CH1_LPDDR4_0_dqs_c_b(CH1_LPDDR4_0_dqs_c_b);
  mp_impl->CH1_LPDDR4_0_ca_a(CH1_LPDDR4_0_ca_a);
  mp_impl->CH1_LPDDR4_0_ca_b(CH1_LPDDR4_0_ca_b);
  mp_impl->CH1_LPDDR4_0_cs_a(CH1_LPDDR4_0_cs_a);
  mp_impl->CH1_LPDDR4_0_cs_b(CH1_LPDDR4_0_cs_b);
  mp_impl->CH1_LPDDR4_0_ck_t_a(CH1_LPDDR4_0_ck_t_a);
  mp_impl->CH1_LPDDR4_0_ck_t_b(CH1_LPDDR4_0_ck_t_b);
  mp_impl->CH1_LPDDR4_0_ck_c_a(CH1_LPDDR4_0_ck_c_a);
  mp_impl->CH1_LPDDR4_0_ck_c_b(CH1_LPDDR4_0_ck_c_b);
  mp_impl->CH1_LPDDR4_0_cke_a(CH1_LPDDR4_0_cke_a);
  mp_impl->CH1_LPDDR4_0_cke_b(CH1_LPDDR4_0_cke_b);
  mp_impl->CH1_LPDDR4_0_dmi_a(CH1_LPDDR4_0_dmi_a);
  mp_impl->CH1_LPDDR4_0_dmi_b(CH1_LPDDR4_0_dmi_b);
  mp_impl->CH1_LPDDR4_0_reset_n(CH1_LPDDR4_0_reset_n);
  mp_impl->sys_clk1_clk_p(sys_clk1_clk_p);
  mp_impl->sys_clk1_clk_n(sys_clk1_clk_n);
  mp_impl->CH0_LPDDR4_1_dq_a(CH0_LPDDR4_1_dq_a);
  mp_impl->CH0_LPDDR4_1_dq_b(CH0_LPDDR4_1_dq_b);
  mp_impl->CH0_LPDDR4_1_dqs_t_a(CH0_LPDDR4_1_dqs_t_a);
  mp_impl->CH0_LPDDR4_1_dqs_t_b(CH0_LPDDR4_1_dqs_t_b);
  mp_impl->CH0_LPDDR4_1_dqs_c_a(CH0_LPDDR4_1_dqs_c_a);
  mp_impl->CH0_LPDDR4_1_dqs_c_b(CH0_LPDDR4_1_dqs_c_b);
  mp_impl->CH0_LPDDR4_1_ca_a(CH0_LPDDR4_1_ca_a);
  mp_impl->CH0_LPDDR4_1_ca_b(CH0_LPDDR4_1_ca_b);
  mp_impl->CH0_LPDDR4_1_cs_a(CH0_LPDDR4_1_cs_a);
  mp_impl->CH0_LPDDR4_1_cs_b(CH0_LPDDR4_1_cs_b);
  mp_impl->CH0_LPDDR4_1_ck_t_a(CH0_LPDDR4_1_ck_t_a);
  mp_impl->CH0_LPDDR4_1_ck_t_b(CH0_LPDDR4_1_ck_t_b);
  mp_impl->CH0_LPDDR4_1_ck_c_a(CH0_LPDDR4_1_ck_c_a);
  mp_impl->CH0_LPDDR4_1_ck_c_b(CH0_LPDDR4_1_ck_c_b);
  mp_impl->CH0_LPDDR4_1_cke_a(CH0_LPDDR4_1_cke_a);
  mp_impl->CH0_LPDDR4_1_cke_b(CH0_LPDDR4_1_cke_b);
  mp_impl->CH0_LPDDR4_1_dmi_a(CH0_LPDDR4_1_dmi_a);
  mp_impl->CH0_LPDDR4_1_dmi_b(CH0_LPDDR4_1_dmi_b);
  mp_impl->CH0_LPDDR4_1_reset_n(CH0_LPDDR4_1_reset_n);
  mp_impl->CH1_LPDDR4_1_dq_a(CH1_LPDDR4_1_dq_a);
  mp_impl->CH1_LPDDR4_1_dq_b(CH1_LPDDR4_1_dq_b);
  mp_impl->CH1_LPDDR4_1_dqs_t_a(CH1_LPDDR4_1_dqs_t_a);
  mp_impl->CH1_LPDDR4_1_dqs_t_b(CH1_LPDDR4_1_dqs_t_b);
  mp_impl->CH1_LPDDR4_1_dqs_c_a(CH1_LPDDR4_1_dqs_c_a);
  mp_impl->CH1_LPDDR4_1_dqs_c_b(CH1_LPDDR4_1_dqs_c_b);
  mp_impl->CH1_LPDDR4_1_ca_a(CH1_LPDDR4_1_ca_a);
  mp_impl->CH1_LPDDR4_1_ca_b(CH1_LPDDR4_1_ca_b);
  mp_impl->CH1_LPDDR4_1_cs_a(CH1_LPDDR4_1_cs_a);
  mp_impl->CH1_LPDDR4_1_cs_b(CH1_LPDDR4_1_cs_b);
  mp_impl->CH1_LPDDR4_1_ck_t_a(CH1_LPDDR4_1_ck_t_a);
  mp_impl->CH1_LPDDR4_1_ck_t_b(CH1_LPDDR4_1_ck_t_b);
  mp_impl->CH1_LPDDR4_1_ck_c_a(CH1_LPDDR4_1_ck_c_a);
  mp_impl->CH1_LPDDR4_1_ck_c_b(CH1_LPDDR4_1_ck_c_b);
  mp_impl->CH1_LPDDR4_1_cke_a(CH1_LPDDR4_1_cke_a);
  mp_impl->CH1_LPDDR4_1_cke_b(CH1_LPDDR4_1_cke_b);
  mp_impl->CH1_LPDDR4_1_dmi_a(CH1_LPDDR4_1_dmi_a);
  mp_impl->CH1_LPDDR4_1_dmi_b(CH1_LPDDR4_1_dmi_b);
  mp_impl->CH1_LPDDR4_1_reset_n(CH1_LPDDR4_1_reset_n);

}

void xilinx_vck190_base_noc_lpddr4_0::before_end_of_elaboration()
{
}

#endif // MTI_SYSTEMC




xilinx_vck190_base_noc_lpddr4_0::~xilinx_vck190_base_noc_lpddr4_0()
{
}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(xilinx_vck190_base_noc_lpddr4_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(xilinx_vck190_base_noc_lpddr4_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(xilinx_vck190_base_noc_lpddr4_0);
#endif

