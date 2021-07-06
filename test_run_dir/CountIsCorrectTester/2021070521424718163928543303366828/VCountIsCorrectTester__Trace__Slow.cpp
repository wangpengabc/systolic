// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCountIsCorrectTester__Syms.h"


//======================

void VCountIsCorrectTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VCountIsCorrectTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCountIsCorrectTester__Syms* __restrict vlSymsp = static_cast<VCountIsCorrectTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCountIsCorrectTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VCountIsCorrectTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VCountIsCorrectTester__Syms* __restrict vlSymsp = static_cast<VCountIsCorrectTester__Syms*>(userp);
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VCountIsCorrectTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VCountIsCorrectTester__Syms* __restrict vlSymsp = static_cast<VCountIsCorrectTester__Syms*>(userp);
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+38,"clock", false,-1);
        tracep->declBit(c+39,"reset", false,-1);
        tracep->declBit(c+38,"CountIsCorrectTester clock", false,-1);
        tracep->declBit(c+39,"CountIsCorrectTester reset", false,-1);
        tracep->declBit(c+38,"CountIsCorrectTester q_clock", false,-1);
        tracep->declBit(c+39,"CountIsCorrectTester q_reset", false,-1);
        tracep->declBit(c+1,"CountIsCorrectTester q_io_enq_ready", false,-1);
        tracep->declBit(c+2,"CountIsCorrectTester q_io_enq_valid", false,-1);
        tracep->declBit(c+3,"CountIsCorrectTester q_io_deq_ready", false,-1);
        tracep->declBit(c+4,"CountIsCorrectTester q_io_deq_valid", false,-1);
        tracep->declBus(c+5,"CountIsCorrectTester q_io_count", false,-1, 1,0);
        tracep->declBit(c+38,"CountIsCorrectTester q_io_deq_ready_prng_clock", false,-1);
        tracep->declBit(c+39,"CountIsCorrectTester q_io_deq_ready_prng_reset", false,-1);
        tracep->declBit(c+6,"CountIsCorrectTester q_io_deq_ready_prng_io_out_0", false,-1);
        tracep->declBit(c+7,"CountIsCorrectTester q_io_deq_ready_prng_io_out_1", false,-1);
        tracep->declBit(c+8,"CountIsCorrectTester q_io_deq_ready_prng_io_out_2", false,-1);
        tracep->declBit(c+9,"CountIsCorrectTester q_io_deq_ready_prng_io_out_3", false,-1);
        tracep->declBit(c+10,"CountIsCorrectTester q_io_deq_ready_prng_io_out_4", false,-1);
        tracep->declBit(c+11,"CountIsCorrectTester q_io_deq_ready_prng_io_out_5", false,-1);
        tracep->declBit(c+12,"CountIsCorrectTester q_io_deq_ready_prng_io_out_6", false,-1);
        tracep->declBit(c+13,"CountIsCorrectTester q_io_deq_ready_prng_io_out_7", false,-1);
        tracep->declBit(c+14,"CountIsCorrectTester q_io_deq_ready_prng_io_out_8", false,-1);
        tracep->declBit(c+15,"CountIsCorrectTester q_io_deq_ready_prng_io_out_9", false,-1);
        tracep->declBit(c+16,"CountIsCorrectTester q_io_deq_ready_prng_io_out_10", false,-1);
        tracep->declBit(c+17,"CountIsCorrectTester q_io_deq_ready_prng_io_out_11", false,-1);
        tracep->declBit(c+18,"CountIsCorrectTester q_io_deq_ready_prng_io_out_12", false,-1);
        tracep->declBit(c+19,"CountIsCorrectTester q_io_deq_ready_prng_io_out_13", false,-1);
        tracep->declBit(c+20,"CountIsCorrectTester q_io_deq_ready_prng_io_out_14", false,-1);
        tracep->declBit(c+21,"CountIsCorrectTester q_io_deq_ready_prng_io_out_15", false,-1);
        tracep->declBus(c+22,"CountIsCorrectTester value", false,-1, 4,0);
        tracep->declBus(c+23,"CountIsCorrectTester value_1", false,-1, 4,0);
        tracep->declBus(c+24,"CountIsCorrectTester q_io_deq_ready_lo", false,-1, 7,0);
        tracep->declBit(c+25,"CountIsCorrectTester wrap", false,-1);
        tracep->declBit(c+26,"CountIsCorrectTester wrap_1", false,-1);
        tracep->declBit(c+38,"CountIsCorrectTester q clock", false,-1);
        tracep->declBit(c+39,"CountIsCorrectTester q reset", false,-1);
        tracep->declBit(c+1,"CountIsCorrectTester q io_enq_ready", false,-1);
        tracep->declBit(c+2,"CountIsCorrectTester q io_enq_valid", false,-1);
        tracep->declBit(c+3,"CountIsCorrectTester q io_deq_ready", false,-1);
        tracep->declBit(c+4,"CountIsCorrectTester q io_deq_valid", false,-1);
        tracep->declBus(c+5,"CountIsCorrectTester q io_count", false,-1, 1,0);
        tracep->declBus(c+27,"CountIsCorrectTester q enq_ptr_value", false,-1, 1,0);
        tracep->declBus(c+28,"CountIsCorrectTester q deq_ptr_value", false,-1, 1,0);
        tracep->declBit(c+29,"CountIsCorrectTester q maybe_full", false,-1);
        tracep->declBit(c+30,"CountIsCorrectTester q ptr_match", false,-1);
        tracep->declBit(c+31,"CountIsCorrectTester q empty", false,-1);
        tracep->declBit(c+32,"CountIsCorrectTester q full", false,-1);
        tracep->declBit(c+33,"CountIsCorrectTester q do_enq", false,-1);
        tracep->declBit(c+34,"CountIsCorrectTester q do_deq", false,-1);
        tracep->declBit(c+35,"CountIsCorrectTester q wrap", false,-1);
        tracep->declBit(c+36,"CountIsCorrectTester q wrap_1", false,-1);
        tracep->declBus(c+37,"CountIsCorrectTester q ptr_diff", false,-1, 1,0);
        tracep->declBit(c+38,"CountIsCorrectTester q_io_deq_ready_prng clock", false,-1);
        tracep->declBit(c+39,"CountIsCorrectTester q_io_deq_ready_prng reset", false,-1);
        tracep->declBit(c+6,"CountIsCorrectTester q_io_deq_ready_prng io_out_0", false,-1);
        tracep->declBit(c+7,"CountIsCorrectTester q_io_deq_ready_prng io_out_1", false,-1);
        tracep->declBit(c+8,"CountIsCorrectTester q_io_deq_ready_prng io_out_2", false,-1);
        tracep->declBit(c+9,"CountIsCorrectTester q_io_deq_ready_prng io_out_3", false,-1);
        tracep->declBit(c+10,"CountIsCorrectTester q_io_deq_ready_prng io_out_4", false,-1);
        tracep->declBit(c+11,"CountIsCorrectTester q_io_deq_ready_prng io_out_5", false,-1);
        tracep->declBit(c+12,"CountIsCorrectTester q_io_deq_ready_prng io_out_6", false,-1);
        tracep->declBit(c+13,"CountIsCorrectTester q_io_deq_ready_prng io_out_7", false,-1);
        tracep->declBit(c+14,"CountIsCorrectTester q_io_deq_ready_prng io_out_8", false,-1);
        tracep->declBit(c+15,"CountIsCorrectTester q_io_deq_ready_prng io_out_9", false,-1);
        tracep->declBit(c+16,"CountIsCorrectTester q_io_deq_ready_prng io_out_10", false,-1);
        tracep->declBit(c+17,"CountIsCorrectTester q_io_deq_ready_prng io_out_11", false,-1);
        tracep->declBit(c+18,"CountIsCorrectTester q_io_deq_ready_prng io_out_12", false,-1);
        tracep->declBit(c+19,"CountIsCorrectTester q_io_deq_ready_prng io_out_13", false,-1);
        tracep->declBit(c+20,"CountIsCorrectTester q_io_deq_ready_prng io_out_14", false,-1);
        tracep->declBit(c+21,"CountIsCorrectTester q_io_deq_ready_prng io_out_15", false,-1);
        tracep->declBit(c+6,"CountIsCorrectTester q_io_deq_ready_prng state_0", false,-1);
        tracep->declBit(c+7,"CountIsCorrectTester q_io_deq_ready_prng state_1", false,-1);
        tracep->declBit(c+8,"CountIsCorrectTester q_io_deq_ready_prng state_2", false,-1);
        tracep->declBit(c+9,"CountIsCorrectTester q_io_deq_ready_prng state_3", false,-1);
        tracep->declBit(c+10,"CountIsCorrectTester q_io_deq_ready_prng state_4", false,-1);
        tracep->declBit(c+11,"CountIsCorrectTester q_io_deq_ready_prng state_5", false,-1);
        tracep->declBit(c+12,"CountIsCorrectTester q_io_deq_ready_prng state_6", false,-1);
        tracep->declBit(c+13,"CountIsCorrectTester q_io_deq_ready_prng state_7", false,-1);
        tracep->declBit(c+14,"CountIsCorrectTester q_io_deq_ready_prng state_8", false,-1);
        tracep->declBit(c+15,"CountIsCorrectTester q_io_deq_ready_prng state_9", false,-1);
        tracep->declBit(c+16,"CountIsCorrectTester q_io_deq_ready_prng state_10", false,-1);
        tracep->declBit(c+17,"CountIsCorrectTester q_io_deq_ready_prng state_11", false,-1);
        tracep->declBit(c+18,"CountIsCorrectTester q_io_deq_ready_prng state_12", false,-1);
        tracep->declBit(c+19,"CountIsCorrectTester q_io_deq_ready_prng state_13", false,-1);
        tracep->declBit(c+20,"CountIsCorrectTester q_io_deq_ready_prng state_14", false,-1);
        tracep->declBit(c+21,"CountIsCorrectTester q_io_deq_ready_prng state_15", false,-1);
    }
}

void VCountIsCorrectTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VCountIsCorrectTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VCountIsCorrectTester__Syms* __restrict vlSymsp = static_cast<VCountIsCorrectTester__Syms*>(userp);
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VCountIsCorrectTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VCountIsCorrectTester__Syms* __restrict vlSymsp = static_cast<VCountIsCorrectTester__Syms*>(userp);
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__full)))));
        tracep->fullBit(oldp+2,((0x14U > (IData)(vlTOPp->CountIsCorrectTester__DOT__value))));
        tracep->fullBit(oldp+3,((1U & ((IData)(vlTOPp->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                                       >> 4U))));
        tracep->fullBit(oldp+4,((1U & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty)))));
        tracep->fullCData(oldp+5,((3U & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match)
                                          ? ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full)
                                              ? 3U : 0U)
                                          : (((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value) 
                                              > (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value))
                                              ? ((IData)(3U) 
                                                 + (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_diff))
                                              : (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_diff))))),2);
        tracep->fullBit(oldp+6,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->fullBit(oldp+7,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->fullBit(oldp+8,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->fullBit(oldp+9,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->fullBit(oldp+10,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->fullBit(oldp+11,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->fullBit(oldp+12,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->fullBit(oldp+13,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->fullBit(oldp+14,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->fullBit(oldp+15,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->fullBit(oldp+16,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->fullBit(oldp+17,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->fullBit(oldp+18,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->fullBit(oldp+19,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->fullBit(oldp+20,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->fullBit(oldp+21,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->fullCData(oldp+22,(vlTOPp->CountIsCorrectTester__DOT__value),5);
        tracep->fullCData(oldp+23,(vlTOPp->CountIsCorrectTester__DOT__value_1),5);
        tracep->fullCData(oldp+24,((((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                     << 7U) | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                               << 1U) 
                                                              | (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->fullBit(oldp+25,((0x14U == (IData)(vlTOPp->CountIsCorrectTester__DOT__value))));
        tracep->fullBit(oldp+26,((0x14U == (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1))));
        tracep->fullCData(oldp+27,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value),2);
        tracep->fullCData(oldp+28,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value),2);
        tracep->fullBit(oldp+29,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full));
        tracep->fullBit(oldp+30,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match));
        tracep->fullBit(oldp+31,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty));
        tracep->fullBit(oldp+32,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__full));
        tracep->fullBit(oldp+33,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__do_enq));
        tracep->fullBit(oldp+34,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__do_deq));
        tracep->fullBit(oldp+35,((2U == (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value))));
        tracep->fullBit(oldp+36,((2U == (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value))));
        tracep->fullCData(oldp+37,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_diff),2);
        tracep->fullBit(oldp+38,(vlTOPp->clock));
        tracep->fullBit(oldp+39,(vlTOPp->reset));
    }
}
