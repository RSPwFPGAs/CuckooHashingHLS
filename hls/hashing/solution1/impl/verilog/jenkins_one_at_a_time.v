// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="jenkins_one_at_a_time,hls_ip_2017_4,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=5.964000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=132,HLS_SYN_LUT=336}" *)

module jenkins_one_at_a_time (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        length_r,
        key_address0,
        key_ce0,
        key_q0,
        ap_return
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_state3 = 4'd4;
parameter    ap_ST_fsm_state4 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] length_r;
output  [9:0] key_address0;
output   key_ce0;
input  [7:0] key_q0;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg key_ce0;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] i_1_fu_80_p2;
reg   [31:0] i_1_reg_183;
wire    ap_CS_fsm_state2;
wire   [0:0] tmp_fu_75_p2;
wire   [31:0] hash_4_fu_139_p2;
reg   [31:0] hash_4_reg_193;
wire    ap_CS_fsm_state3;
wire   [31:0] hash_6_fu_169_p2;
wire    ap_CS_fsm_state4;
reg   [31:0] i_reg_52;
reg   [31:0] hash_reg_63;
wire  signed [63:0] tmp_8_fu_86_p1;
wire   [31:0] tmp_1_fu_91_p2;
wire   [31:0] hash_1_fu_97_p2;
wire   [20:0] tmp_3_fu_103_p4;
wire   [31:0] tmp_6_fu_113_p1;
wire   [31:0] hash_2_fu_117_p2;
wire   [31:0] tmp_4_fu_123_p2;
wire  signed [31:0] tmp_9_fu_135_p1;
wire   [31:0] tmp_5_fu_145_p2;
wire   [31:0] hash_5_fu_150_p2;
wire   [25:0] tmp_2_fu_155_p4;
wire   [31:0] tmp_s_fu_165_p1;
reg   [3:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        hash_reg_63 <= hash_6_fu_169_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        hash_reg_63 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_reg_52 <= i_1_reg_183;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_52 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        hash_4_reg_193 <= hash_4_fu_139_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_1_reg_183 <= i_1_fu_80_p2;
    end
end

always @ (*) begin
    if (((tmp_fu_75_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_fu_75_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        key_ce0 = 1'b1;
    end else begin
        key_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((tmp_fu_75_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_return = (hash_2_fu_117_p2 + tmp_4_fu_123_p2);

assign hash_1_fu_97_p2 = (hash_reg_63 + tmp_1_fu_91_p2);

assign hash_2_fu_117_p2 = (tmp_6_fu_113_p1 ^ hash_1_fu_97_p2);

assign hash_4_fu_139_p2 = ($signed(tmp_9_fu_135_p1) + $signed(hash_reg_63));

assign hash_5_fu_150_p2 = (hash_4_reg_193 + tmp_5_fu_145_p2);

assign hash_6_fu_169_p2 = (tmp_s_fu_165_p1 ^ hash_5_fu_150_p2);

assign i_1_fu_80_p2 = (i_reg_52 + 32'd1);

assign key_address0 = tmp_8_fu_86_p1;

assign tmp_1_fu_91_p2 = hash_reg_63 << 32'd3;

assign tmp_2_fu_155_p4 = {{hash_5_fu_150_p2[31:6]}};

assign tmp_3_fu_103_p4 = {{hash_1_fu_97_p2[31:11]}};

assign tmp_4_fu_123_p2 = hash_2_fu_117_p2 << 32'd15;

assign tmp_5_fu_145_p2 = hash_4_reg_193 << 32'd10;

assign tmp_6_fu_113_p1 = tmp_3_fu_103_p4;

assign tmp_8_fu_86_p1 = $signed(i_reg_52);

assign tmp_9_fu_135_p1 = $signed(key_q0);

assign tmp_fu_75_p2 = ((i_reg_52 == length_r) ? 1'b1 : 1'b0);

assign tmp_s_fu_165_p1 = tmp_2_fu_155_p4;

endmodule //jenkins_one_at_a_time