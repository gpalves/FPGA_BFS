/*  (c) Copyright 1995 - 2018 Xilinx, Inc. All rights reserved.

 This file contains confidential and proprietary information
 of Xilinx, Inc. and is protected under U.S. and
 international copyright and other intellectual property
 laws.

 DISCLAIMER
 This disclaimer is not a license and does not grant any
 rights to the materials distributed herewith. Except as
 otherwise provided in a valid license issued to you by
 Xilinx, and to the maximum extent permitted by applicable
 law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
 WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
 AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
 BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
 INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
 (2) Xilinx shall not be liable (whether in contract or tort,
 including negligence, or under any other theory of
 liability) for any loss or damage of any kind or nature
 related to, arising under or in connection with these
 materials, including for any direct, or any indirect,
 special, incidental, or consequential loss or damage
 (including loss of data, profits, goodwill, or any type of
 loss or damage suffered as a result of any action brought
 by a third party) even if such damage or loss was
 reasonably foreseeable or Xilinx had been advised of the
 possibility of the same.

 CRITICAL APPLICATIONS
 Xilinx products are not designed or intended to be fail-
 safe, or for use in any application requiring fail-safe
 performance, such as life-support or safety devices or
 systems, Class III medical devices, nuclear facilities,
 applications related to the deployment of airbags, or any
 other applications that could lead to death, personal
 injury, or severe property or environmental damage
 (individually and collectively, "Critical
 Applications"). Customer assumes the sole risk and
 liability of any use of Xilinx products in Critical
 Applications, subject only to applicable laws and
 regulations governing limitations on product liability.

 THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
 PART OF THIS FILE AT ALL TIMES.                       */



#include "aie_extra_defines.h"
#include "ai_engine.h"

    ai_engine::ai_engine(sc_module_name nm, xsc::common_cpp::properties& me_properties)
       :me_core_clk("me_core_clk", 1.0/1000, SC_US)
    {
        aie_cfg.set_fast_pm_dm(
                me_properties.getBool("fast_pm_write"), 
                me_properties.getBool("fast_dm_write")); 

        set_sim_config();
        aie_cfg.set_noc2aie_mm_cfg(1);

        //AXIS stream out ports width
        m_axis_width_map[0] =  32;

        //AXIS stream in ports width
        s_axis_width_map[0] =  32;
        s_axis_width_map[1] =  32;

        for(unsigned int indx = 0; indx < s_axis_width_map.size(); indx++) {
            aie_cfg.set_pl2aie_stream_width(indx, s_axis_width_map.at(indx));
        }

        for(unsigned int indx = 0; indx < m_axis_width_map.size(); indx++) {
            aie_cfg.set_aie2pl_stream_width(indx,  m_axis_width_map.at(indx));
        }

        aie_logical_inst = new xsc::aie::aie_logical("aie_logical", aie_cfg);
        aie_logical_inst->clk(me_core_clk);

        S00_AXI_tlm_aximm_read_socket =  aie_logical_inst->S_AXIMM_rd_socket[0];
        S00_AXI_tlm_aximm_write_socket = aie_logical_inst->S_AXIMM_wr_socket[0];

        //AXIS stream out ports
        M00_AXIS_tlm_axis_socket = aie_logical_inst->M_AXIS_socket[0];

        //AXIS stream in ports
        S00_AXIS_tlm_axis_socket = aie_logical_inst->S_AXIS_socket[0];
        S01_AXIS_tlm_axis_socket = aie_logical_inst->S_AXIS_socket[1];



        //! Set NOC Stream Clock periods

        //! Set NOC Slave AXIMM Clock periods
        s00_axi_aclk_period = sc_time(1.0/1000000000, SC_SEC);

        //! Set NOC Master AXIMM Clock periods

        //! Register Clock Generation sc_methods
        SC_METHOD(s00_axi_aclk_gen);
    }

    void ai_engine::set_sim_config()
    {
        aie_cfg.set_device_file(xsc::aie::env::get_device_file());
        aie_cfg.set_aie_shim_sol_file(xsc::aie::env::get_shim_sol_file());
        aie_cfg.set_vcd_trace(xsc::aie::env::is_vcd_trace_enabled());
        aie_cfg.set_debug_trace(xsc::aie::env::is_debug_trace_enabled());
        aie_cfg.set_aie_profiling(xsc::aie::env::is_aie_profiling_enabled());
    }

    //! NOC Stream Clock generation methods

    //! NOC Slave AXIMM Clock generation methods
     void ai_engine::s00_axi_aclk_gen()
     {
         s00_axi_aclk = !s00_axi_aclk;
         next_trigger(s00_axi_aclk_period);
     }

    //! NOC Master AXIMM Clock generation methods

