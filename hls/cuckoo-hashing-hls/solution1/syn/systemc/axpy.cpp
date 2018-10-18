// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "axpy.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic axpy::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic axpy::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> axpy::ap_ST_fsm_state1 = "1";
const sc_lv<5> axpy::ap_ST_fsm_state2 = "10";
const sc_lv<5> axpy::ap_ST_fsm_state3 = "100";
const sc_lv<5> axpy::ap_ST_fsm_state4 = "1000";
const sc_lv<5> axpy::ap_ST_fsm_state5 = "10000";
const sc_lv<32> axpy::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> axpy::ap_const_lv32_1 = "1";
const sc_lv<1> axpy::ap_const_lv1_0 = "0";
const sc_lv<32> axpy::ap_const_lv32_2 = "10";
const sc_lv<32> axpy::ap_const_lv32_3 = "11";
const sc_lv<2> axpy::ap_const_lv2_0 = "00";
const sc_lv<32> axpy::ap_const_lv32_4 = "100";
const sc_lv<2> axpy::ap_const_lv2_3 = "11";
const sc_lv<2> axpy::ap_const_lv2_1 = "1";
const sc_lv<1> axpy::ap_const_lv1_1 = "1";
const bool axpy::ap_const_boolean_1 = true;

axpy::axpy(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_75_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_75_p2 );

    SC_METHOD(thread_exitcond_fu_75_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_64 );

    SC_METHOD(thread_i_1_fu_81_p2);
    sensitive << ( i_reg_64 );

    SC_METHOD(thread_in_r_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_87_p1 );

    SC_METHOD(thread_in_r_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_out_r_address0);
    sensitive << ( tmp_reg_119 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_out_r_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_out_r_d0);
    sensitive << ( b );
    sensitive << ( tmp_1_reg_134 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_out_r_we0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_tmp_1_fu_92_p1);
    sensitive << ( a );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_tmp_1_fu_92_p2);
    sensitive << ( x_reg_129 );
    sensitive << ( tmp_1_fu_92_p1 );

    SC_METHOD(thread_tmp_fu_87_p1);
    sensitive << ( i_reg_64 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_75_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "axpy_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, in_r_address0, "(port)in_r_address0");
    sc_trace(mVcdFile, in_r_ce0, "(port)in_r_ce0");
    sc_trace(mVcdFile, in_r_q0, "(port)in_r_q0");
    sc_trace(mVcdFile, a, "(port)a");
    sc_trace(mVcdFile, b, "(port)b");
    sc_trace(mVcdFile, out_r_address0, "(port)out_r_address0");
    sc_trace(mVcdFile, out_r_ce0, "(port)out_r_ce0");
    sc_trace(mVcdFile, out_r_we0, "(port)out_r_we0");
    sc_trace(mVcdFile, out_r_d0, "(port)out_r_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_1_fu_81_p2, "i_1_fu_81_p2");
    sc_trace(mVcdFile, i_1_reg_114, "i_1_reg_114");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_fu_87_p1, "tmp_fu_87_p1");
    sc_trace(mVcdFile, tmp_reg_119, "tmp_reg_119");
    sc_trace(mVcdFile, exitcond_fu_75_p2, "exitcond_fu_75_p2");
    sc_trace(mVcdFile, x_reg_129, "x_reg_129");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_1_fu_92_p2, "tmp_1_fu_92_p2");
    sc_trace(mVcdFile, tmp_1_reg_134, "tmp_1_reg_134");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, i_reg_64, "i_reg_64");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_1_fu_92_p1, "tmp_1_fu_92_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("axpy.hdltvin.dat");
    mHdltvoutHandle.open("axpy.hdltvout.dat");
}

axpy::~axpy() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void axpy::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_reg_64 = i_1_reg_114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_64 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_1_reg_114 = i_1_fu_81_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        tmp_1_reg_134 = tmp_1_fu_92_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_75_p2.read(), ap_const_lv1_0))) {
        tmp_reg_119 = tmp_fu_87_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        x_reg_129 = in_r_q0.read();
    }
}

void axpy::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void axpy::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void axpy::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void axpy::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void axpy::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void axpy::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_75_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void axpy::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void axpy::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_75_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void axpy::thread_exitcond_fu_75_p2() {
    exitcond_fu_75_p2 = (!i_reg_64.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_64.read() == ap_const_lv2_3);
}

void axpy::thread_i_1_fu_81_p2() {
    i_1_fu_81_p2 = (!i_reg_64.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_reg_64.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void axpy::thread_in_r_address0() {
    in_r_address0 =  (sc_lv<2>) (tmp_fu_87_p1.read());
}

void axpy::thread_in_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        in_r_ce0 = ap_const_logic_1;
    } else {
        in_r_ce0 = ap_const_logic_0;
    }
}

void axpy::thread_out_r_address0() {
    out_r_address0 =  (sc_lv<2>) (tmp_reg_119.read());
}

void axpy::thread_out_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        out_r_ce0 = ap_const_logic_1;
    } else {
        out_r_ce0 = ap_const_logic_0;
    }
}

void axpy::thread_out_r_d0() {
    out_r_d0 = (!tmp_1_reg_134.read().is_01() || !b.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_reg_134.read()) + sc_biguint<32>(b.read()));
}

void axpy::thread_out_r_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        out_r_we0 = ap_const_logic_1;
    } else {
        out_r_we0 = ap_const_logic_0;
    }
}

void axpy::thread_tmp_1_fu_92_p1() {
    tmp_1_fu_92_p1 = a.read();
}

void axpy::thread_tmp_1_fu_92_p2() {
    tmp_1_fu_92_p2 = (!x_reg_129.read().is_01() || !tmp_1_fu_92_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(x_reg_129.read()) * sc_bigint<32>(tmp_1_fu_92_p1.read());
}

void axpy::thread_tmp_fu_87_p1() {
    tmp_fu_87_p1 = esl_zext<64,2>(i_reg_64.read());
}

void axpy::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_75_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

void axpy::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_r_address0\" :  \"" << in_r_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_r_ce0\" :  \"" << in_r_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_r_q0\" :  \"" << in_r_q0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a\" :  \"" << a.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b\" :  \"" << b.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_r_address0\" :  \"" << out_r_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_r_ce0\" :  \"" << out_r_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_r_we0\" :  \"" << out_r_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_r_d0\" :  \"" << out_r_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
