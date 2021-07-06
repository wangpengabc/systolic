// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThingsPassThroughTester__Syms.h"


//======================

void VThingsPassThroughTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VThingsPassThroughTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VThingsPassThroughTester__Syms* __restrict vlSymsp = static_cast<VThingsPassThroughTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VThingsPassThroughTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VThingsPassThroughTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VThingsPassThroughTester__Syms* __restrict vlSymsp = static_cast<VThingsPassThroughTester__Syms*>(userp);
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VThingsPassThroughTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VThingsPassThroughTester__Syms* __restrict vlSymsp = static_cast<VThingsPassThroughTester__Syms*>(userp);
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+41,"clock", false,-1);
        tracep->declBit(c+42,"reset", false,-1);
        tracep->declBit(c+41,"ThingsPassThroughTester clock", false,-1);
        tracep->declBit(c+42,"ThingsPassThroughTester reset", false,-1);
        tracep->declBit(c+41,"ThingsPassThroughTester q_clock", false,-1);
        tracep->declBit(c+42,"ThingsPassThroughTester q_reset", false,-1);
        tracep->declBit(c+1,"ThingsPassThroughTester q_io_enq_ready", false,-1);
        tracep->declBit(c+2,"ThingsPassThroughTester q_io_enq_valid", false,-1);
        tracep->declBus(c+3,"ThingsPassThroughTester q_io_enq_bits", false,-1, 2,0);
        tracep->declBit(c+4,"ThingsPassThroughTester q_io_deq_ready", false,-1);
        tracep->declBit(c+5,"ThingsPassThroughTester q_io_deq_valid", false,-1);
        tracep->declBus(c+6,"ThingsPassThroughTester q_io_deq_bits", false,-1, 2,0);
        tracep->declBit(c+41,"ThingsPassThroughTester q_io_deq_ready_prng_clock", false,-1);
        tracep->declBit(c+42,"ThingsPassThroughTester q_io_deq_ready_prng_reset", false,-1);
        tracep->declBit(c+7,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_0", false,-1);
        tracep->declBit(c+8,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_1", false,-1);
        tracep->declBit(c+9,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_2", false,-1);
        tracep->declBit(c+10,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_3", false,-1);
        tracep->declBit(c+11,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_4", false,-1);
        tracep->declBit(c+12,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_5", false,-1);
        tracep->declBit(c+13,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_6", false,-1);
        tracep->declBit(c+14,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_7", false,-1);
        tracep->declBit(c+15,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_8", false,-1);
        tracep->declBit(c+16,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_9", false,-1);
        tracep->declBit(c+17,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_10", false,-1);
        tracep->declBit(c+18,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_11", false,-1);
        tracep->declBit(c+19,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_12", false,-1);
        tracep->declBit(c+20,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_13", false,-1);
        tracep->declBit(c+21,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_14", false,-1);
        tracep->declBit(c+22,"ThingsPassThroughTester q_io_deq_ready_prng_io_out_15", false,-1);
        tracep->declBus(c+23,"ThingsPassThroughTester value", false,-1, 4,0);
        tracep->declBus(c+24,"ThingsPassThroughTester value_1", false,-1, 4,0);
        tracep->declBus(c+25,"ThingsPassThroughTester q_io_deq_ready_lo", false,-1, 7,0);
        tracep->declBit(c+26,"ThingsPassThroughTester wrap", false,-1);
        tracep->declBit(c+27,"ThingsPassThroughTester wrap_1", false,-1);
        tracep->declBit(c+41,"ThingsPassThroughTester q clock", false,-1);
        tracep->declBit(c+42,"ThingsPassThroughTester q reset", false,-1);
        tracep->declBit(c+1,"ThingsPassThroughTester q io_enq_ready", false,-1);
        tracep->declBit(c+2,"ThingsPassThroughTester q io_enq_valid", false,-1);
        tracep->declBus(c+3,"ThingsPassThroughTester q io_enq_bits", false,-1, 2,0);
        tracep->declBit(c+4,"ThingsPassThroughTester q io_deq_ready", false,-1);
        tracep->declBit(c+5,"ThingsPassThroughTester q io_deq_valid", false,-1);
        tracep->declBus(c+6,"ThingsPassThroughTester q io_deq_bits", false,-1, 2,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+28+i*1,"ThingsPassThroughTester q ram", true,(i+0), 2,0);}}
        tracep->declBit(c+43,"ThingsPassThroughTester q ram_io_deq_bits_MPORT_en", false,-1);
        tracep->declBus(c+32,"ThingsPassThroughTester q ram_io_deq_bits_MPORT_addr", false,-1, 1,0);
        tracep->declBus(c+6,"ThingsPassThroughTester q ram_io_deq_bits_MPORT_data", false,-1, 2,0);
        tracep->declBus(c+3,"ThingsPassThroughTester q ram_MPORT_data", false,-1, 2,0);
        tracep->declBus(c+33,"ThingsPassThroughTester q ram_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+43,"ThingsPassThroughTester q ram_MPORT_mask", false,-1);
        tracep->declBit(c+34,"ThingsPassThroughTester q ram_MPORT_en", false,-1);
        tracep->declBus(c+33,"ThingsPassThroughTester q enq_ptr_value", false,-1, 1,0);
        tracep->declBus(c+32,"ThingsPassThroughTester q deq_ptr_value", false,-1, 1,0);
        tracep->declBit(c+35,"ThingsPassThroughTester q maybe_full", false,-1);
        tracep->declBit(c+36,"ThingsPassThroughTester q ptr_match", false,-1);
        tracep->declBit(c+37,"ThingsPassThroughTester q empty", false,-1);
        tracep->declBit(c+38,"ThingsPassThroughTester q full", false,-1);
        tracep->declBit(c+39,"ThingsPassThroughTester q do_enq", false,-1);
        tracep->declBit(c+40,"ThingsPassThroughTester q do_deq", false,-1);
        tracep->declBit(c+41,"ThingsPassThroughTester q_io_deq_ready_prng clock", false,-1);
        tracep->declBit(c+42,"ThingsPassThroughTester q_io_deq_ready_prng reset", false,-1);
        tracep->declBit(c+7,"ThingsPassThroughTester q_io_deq_ready_prng io_out_0", false,-1);
        tracep->declBit(c+8,"ThingsPassThroughTester q_io_deq_ready_prng io_out_1", false,-1);
        tracep->declBit(c+9,"ThingsPassThroughTester q_io_deq_ready_prng io_out_2", false,-1);
        tracep->declBit(c+10,"ThingsPassThroughTester q_io_deq_ready_prng io_out_3", false,-1);
        tracep->declBit(c+11,"ThingsPassThroughTester q_io_deq_ready_prng io_out_4", false,-1);
        tracep->declBit(c+12,"ThingsPassThroughTester q_io_deq_ready_prng io_out_5", false,-1);
        tracep->declBit(c+13,"ThingsPassThroughTester q_io_deq_ready_prng io_out_6", false,-1);
        tracep->declBit(c+14,"ThingsPassThroughTester q_io_deq_ready_prng io_out_7", false,-1);
        tracep->declBit(c+15,"ThingsPassThroughTester q_io_deq_ready_prng io_out_8", false,-1);
        tracep->declBit(c+16,"ThingsPassThroughTester q_io_deq_ready_prng io_out_9", false,-1);
        tracep->declBit(c+17,"ThingsPassThroughTester q_io_deq_ready_prng io_out_10", false,-1);
        tracep->declBit(c+18,"ThingsPassThroughTester q_io_deq_ready_prng io_out_11", false,-1);
        tracep->declBit(c+19,"ThingsPassThroughTester q_io_deq_ready_prng io_out_12", false,-1);
        tracep->declBit(c+20,"ThingsPassThroughTester q_io_deq_ready_prng io_out_13", false,-1);
        tracep->declBit(c+21,"ThingsPassThroughTester q_io_deq_ready_prng io_out_14", false,-1);
        tracep->declBit(c+22,"ThingsPassThroughTester q_io_deq_ready_prng io_out_15", false,-1);
        tracep->declBit(c+7,"ThingsPassThroughTester q_io_deq_ready_prng state_0", false,-1);
        tracep->declBit(c+8,"ThingsPassThroughTester q_io_deq_ready_prng state_1", false,-1);
        tracep->declBit(c+9,"ThingsPassThroughTester q_io_deq_ready_prng state_2", false,-1);
        tracep->declBit(c+10,"ThingsPassThroughTester q_io_deq_ready_prng state_3", false,-1);
        tracep->declBit(c+11,"ThingsPassThroughTester q_io_deq_ready_prng state_4", false,-1);
        tracep->declBit(c+12,"ThingsPassThroughTester q_io_deq_ready_prng state_5", false,-1);
        tracep->declBit(c+13,"ThingsPassThroughTester q_io_deq_ready_prng state_6", false,-1);
        tracep->declBit(c+14,"ThingsPassThroughTester q_io_deq_ready_prng state_7", false,-1);
        tracep->declBit(c+15,"ThingsPassThroughTester q_io_deq_ready_prng state_8", false,-1);
        tracep->declBit(c+16,"ThingsPassThroughTester q_io_deq_ready_prng state_9", false,-1);
        tracep->declBit(c+17,"ThingsPassThroughTester q_io_deq_ready_prng state_10", false,-1);
        tracep->declBit(c+18,"ThingsPassThroughTester q_io_deq_ready_prng state_11", false,-1);
        tracep->declBit(c+19,"ThingsPassThroughTester q_io_deq_ready_prng state_12", false,-1);
        tracep->declBit(c+20,"ThingsPassThroughTester q_io_deq_ready_prng state_13", false,-1);
        tracep->declBit(c+21,"ThingsPassThroughTester q_io_deq_ready_prng state_14", false,-1);
        tracep->declBit(c+22,"ThingsPassThroughTester q_io_deq_ready_prng state_15", false,-1);
    }
}

void VThingsPassThroughTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VThingsPassThroughTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VThingsPassThroughTester__Syms* __restrict vlSymsp = static_cast<VThingsPassThroughTester__Syms*>(userp);
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VThingsPassThroughTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VThingsPassThroughTester__Syms* __restrict vlSymsp = static_cast<VThingsPassThroughTester__Syms*>(userp);
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full)))));
        tracep->fullBit(oldp+2,((0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))));
        tracep->fullCData(oldp+3,(((0x13U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                    ? 6U : ((0x12U 
                                             == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                             ? 2U : 
                                            ((0x11U 
                                              == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                              ? 4U : 
                                             ((0x10U 
                                               == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                               ? 0U
                                               : ((0xfU 
                                                   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                   ? 3U
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                    ? 3U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                     ? 5U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                      ? 6U
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                       ? 0U
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                        ? 3U
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                         ? 5U
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                          ? 3U
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                           ? 6U
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                            ? 1U
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                             ? 3U
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                              ? 3U
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                               ? 7U
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                                ? 6U
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                                 ? 4U
                                                                 : 2U)))))))))))))))))))),3);
        tracep->fullBit(oldp+4,((1U & (IData)(vlTOPp->ThingsPassThroughTester__DOT___q_io_deq_ready_T))));
        tracep->fullBit(oldp+5,((1U & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty)))));
        tracep->fullCData(oldp+6,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram
                                  [vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value]),3);
        tracep->fullBit(oldp+7,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->fullBit(oldp+8,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->fullBit(oldp+9,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->fullBit(oldp+10,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->fullBit(oldp+11,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->fullBit(oldp+12,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->fullBit(oldp+13,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->fullBit(oldp+14,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->fullBit(oldp+15,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->fullBit(oldp+16,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->fullBit(oldp+17,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->fullBit(oldp+18,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->fullBit(oldp+19,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->fullBit(oldp+20,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->fullBit(oldp+21,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->fullBit(oldp+22,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->fullCData(oldp+23,(vlTOPp->ThingsPassThroughTester__DOT__value),5);
        tracep->fullCData(oldp+24,(vlTOPp->ThingsPassThroughTester__DOT__value_1),5);
        tracep->fullCData(oldp+25,((((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                     << 7U) | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                               << 1U) 
                                                              | (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->fullBit(oldp+26,((0x14U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))));
        tracep->fullBit(oldp+27,((0x14U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))));
        tracep->fullCData(oldp+28,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[0]),3);
        tracep->fullCData(oldp+29,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[1]),3);
        tracep->fullCData(oldp+30,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[2]),3);
        tracep->fullCData(oldp+31,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[3]),3);
        tracep->fullCData(oldp+32,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value),2);
        tracep->fullCData(oldp+33,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__enq_ptr_value),2);
        tracep->fullBit(oldp+34,(((~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full)) 
                                  & (0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)))));
        tracep->fullBit(oldp+35,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__maybe_full));
        tracep->fullBit(oldp+36,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ptr_match));
        tracep->fullBit(oldp+37,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty));
        tracep->fullBit(oldp+38,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full));
        tracep->fullBit(oldp+39,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_enq));
        tracep->fullBit(oldp+40,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_deq));
        tracep->fullBit(oldp+41,(vlTOPp->clock));
        tracep->fullBit(oldp+42,(vlTOPp->reset));
        tracep->fullBit(oldp+43,(1U));
    }
}
