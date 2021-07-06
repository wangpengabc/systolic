// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueFlowTester__Syms.h"


//======================

void VQueueFlowTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VQueueFlowTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueueFlowTester__Syms* __restrict vlSymsp = static_cast<VQueueFlowTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VQueueFlowTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VQueueFlowTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VQueueFlowTester__Syms* __restrict vlSymsp = static_cast<VQueueFlowTester__Syms*>(userp);
    VQueueFlowTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VQueueFlowTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VQueueFlowTester__Syms* __restrict vlSymsp = static_cast<VQueueFlowTester__Syms*>(userp);
    VQueueFlowTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+29,"clock", false,-1);
        tracep->declBit(c+30,"reset", false,-1);
        tracep->declBit(c+29,"QueueFlowTester clock", false,-1);
        tracep->declBit(c+30,"QueueFlowTester reset", false,-1);
        tracep->declBit(c+29,"QueueFlowTester q_clock", false,-1);
        tracep->declBit(c+30,"QueueFlowTester q_reset", false,-1);
        tracep->declBit(c+1,"QueueFlowTester q_io_enq_ready", false,-1);
        tracep->declBit(c+2,"QueueFlowTester q_io_enq_valid", false,-1);
        tracep->declBit(c+3,"QueueFlowTester q_io_deq_ready", false,-1);
        tracep->declBit(c+4,"QueueFlowTester q_io_deq_valid", false,-1);
        tracep->declBit(c+5,"QueueFlowTester q_io_count", false,-1);
        tracep->declBit(c+29,"QueueFlowTester q_io_deq_ready_prng_clock", false,-1);
        tracep->declBit(c+30,"QueueFlowTester q_io_deq_ready_prng_reset", false,-1);
        tracep->declBit(c+6,"QueueFlowTester q_io_deq_ready_prng_io_out_0", false,-1);
        tracep->declBit(c+7,"QueueFlowTester q_io_deq_ready_prng_io_out_1", false,-1);
        tracep->declBit(c+8,"QueueFlowTester q_io_deq_ready_prng_io_out_2", false,-1);
        tracep->declBit(c+9,"QueueFlowTester q_io_deq_ready_prng_io_out_3", false,-1);
        tracep->declBit(c+10,"QueueFlowTester q_io_deq_ready_prng_io_out_4", false,-1);
        tracep->declBit(c+11,"QueueFlowTester q_io_deq_ready_prng_io_out_5", false,-1);
        tracep->declBit(c+12,"QueueFlowTester q_io_deq_ready_prng_io_out_6", false,-1);
        tracep->declBit(c+13,"QueueFlowTester q_io_deq_ready_prng_io_out_7", false,-1);
        tracep->declBit(c+14,"QueueFlowTester q_io_deq_ready_prng_io_out_8", false,-1);
        tracep->declBit(c+15,"QueueFlowTester q_io_deq_ready_prng_io_out_9", false,-1);
        tracep->declBit(c+16,"QueueFlowTester q_io_deq_ready_prng_io_out_10", false,-1);
        tracep->declBit(c+17,"QueueFlowTester q_io_deq_ready_prng_io_out_11", false,-1);
        tracep->declBit(c+18,"QueueFlowTester q_io_deq_ready_prng_io_out_12", false,-1);
        tracep->declBit(c+19,"QueueFlowTester q_io_deq_ready_prng_io_out_13", false,-1);
        tracep->declBit(c+20,"QueueFlowTester q_io_deq_ready_prng_io_out_14", false,-1);
        tracep->declBit(c+21,"QueueFlowTester q_io_deq_ready_prng_io_out_15", false,-1);
        tracep->declBus(c+22,"QueueFlowTester value", false,-1, 4,0);
        tracep->declBus(c+23,"QueueFlowTester value_1", false,-1, 4,0);
        tracep->declBus(c+24,"QueueFlowTester q_io_deq_ready_lo", false,-1, 7,0);
        tracep->declBit(c+25,"QueueFlowTester wrap", false,-1);
        tracep->declBit(c+26,"QueueFlowTester wrap_1", false,-1);
        tracep->declBit(c+29,"QueueFlowTester q clock", false,-1);
        tracep->declBit(c+30,"QueueFlowTester q reset", false,-1);
        tracep->declBit(c+1,"QueueFlowTester q io_enq_ready", false,-1);
        tracep->declBit(c+2,"QueueFlowTester q io_enq_valid", false,-1);
        tracep->declBit(c+3,"QueueFlowTester q io_deq_ready", false,-1);
        tracep->declBit(c+4,"QueueFlowTester q io_deq_valid", false,-1);
        tracep->declBit(c+5,"QueueFlowTester q io_count", false,-1);
        tracep->declBit(c+5,"QueueFlowTester q maybe_full", false,-1);
        tracep->declBit(c+1,"QueueFlowTester q empty", false,-1);
        tracep->declBit(c+27,"QueueFlowTester q do_enq", false,-1);
        tracep->declBit(c+28,"QueueFlowTester q do_deq", false,-1);
        tracep->declBit(c+29,"QueueFlowTester q_io_deq_ready_prng clock", false,-1);
        tracep->declBit(c+30,"QueueFlowTester q_io_deq_ready_prng reset", false,-1);
        tracep->declBit(c+6,"QueueFlowTester q_io_deq_ready_prng io_out_0", false,-1);
        tracep->declBit(c+7,"QueueFlowTester q_io_deq_ready_prng io_out_1", false,-1);
        tracep->declBit(c+8,"QueueFlowTester q_io_deq_ready_prng io_out_2", false,-1);
        tracep->declBit(c+9,"QueueFlowTester q_io_deq_ready_prng io_out_3", false,-1);
        tracep->declBit(c+10,"QueueFlowTester q_io_deq_ready_prng io_out_4", false,-1);
        tracep->declBit(c+11,"QueueFlowTester q_io_deq_ready_prng io_out_5", false,-1);
        tracep->declBit(c+12,"QueueFlowTester q_io_deq_ready_prng io_out_6", false,-1);
        tracep->declBit(c+13,"QueueFlowTester q_io_deq_ready_prng io_out_7", false,-1);
        tracep->declBit(c+14,"QueueFlowTester q_io_deq_ready_prng io_out_8", false,-1);
        tracep->declBit(c+15,"QueueFlowTester q_io_deq_ready_prng io_out_9", false,-1);
        tracep->declBit(c+16,"QueueFlowTester q_io_deq_ready_prng io_out_10", false,-1);
        tracep->declBit(c+17,"QueueFlowTester q_io_deq_ready_prng io_out_11", false,-1);
        tracep->declBit(c+18,"QueueFlowTester q_io_deq_ready_prng io_out_12", false,-1);
        tracep->declBit(c+19,"QueueFlowTester q_io_deq_ready_prng io_out_13", false,-1);
        tracep->declBit(c+20,"QueueFlowTester q_io_deq_ready_prng io_out_14", false,-1);
        tracep->declBit(c+21,"QueueFlowTester q_io_deq_ready_prng io_out_15", false,-1);
        tracep->declBit(c+6,"QueueFlowTester q_io_deq_ready_prng state_0", false,-1);
        tracep->declBit(c+7,"QueueFlowTester q_io_deq_ready_prng state_1", false,-1);
        tracep->declBit(c+8,"QueueFlowTester q_io_deq_ready_prng state_2", false,-1);
        tracep->declBit(c+9,"QueueFlowTester q_io_deq_ready_prng state_3", false,-1);
        tracep->declBit(c+10,"QueueFlowTester q_io_deq_ready_prng state_4", false,-1);
        tracep->declBit(c+11,"QueueFlowTester q_io_deq_ready_prng state_5", false,-1);
        tracep->declBit(c+12,"QueueFlowTester q_io_deq_ready_prng state_6", false,-1);
        tracep->declBit(c+13,"QueueFlowTester q_io_deq_ready_prng state_7", false,-1);
        tracep->declBit(c+14,"QueueFlowTester q_io_deq_ready_prng state_8", false,-1);
        tracep->declBit(c+15,"QueueFlowTester q_io_deq_ready_prng state_9", false,-1);
        tracep->declBit(c+16,"QueueFlowTester q_io_deq_ready_prng state_10", false,-1);
        tracep->declBit(c+17,"QueueFlowTester q_io_deq_ready_prng state_11", false,-1);
        tracep->declBit(c+18,"QueueFlowTester q_io_deq_ready_prng state_12", false,-1);
        tracep->declBit(c+19,"QueueFlowTester q_io_deq_ready_prng state_13", false,-1);
        tracep->declBit(c+20,"QueueFlowTester q_io_deq_ready_prng state_14", false,-1);
        tracep->declBit(c+21,"QueueFlowTester q_io_deq_ready_prng state_15", false,-1);
    }
}

void VQueueFlowTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VQueueFlowTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VQueueFlowTester__Syms* __restrict vlSymsp = static_cast<VQueueFlowTester__Syms*>(userp);
    VQueueFlowTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VQueueFlowTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VQueueFlowTester__Syms* __restrict vlSymsp = static_cast<VQueueFlowTester__Syms*>(userp);
    VQueueFlowTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)(vlTOPp->QueueFlowTester__DOT__q__DOT__maybe_full)))));
        tracep->fullBit(oldp+2,((0x14U > (IData)(vlTOPp->QueueFlowTester__DOT__value))));
        tracep->fullBit(oldp+3,((1U & ((IData)(vlTOPp->QueueFlowTester__DOT___q_io_deq_ready_T) 
                                       >> 4U))));
        tracep->fullBit(oldp+4,(vlTOPp->QueueFlowTester__DOT__q_io_deq_valid));
        tracep->fullBit(oldp+5,(vlTOPp->QueueFlowTester__DOT__q__DOT__maybe_full));
        tracep->fullBit(oldp+6,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->fullBit(oldp+7,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->fullBit(oldp+8,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->fullBit(oldp+9,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->fullBit(oldp+10,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->fullBit(oldp+11,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->fullBit(oldp+12,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->fullBit(oldp+13,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->fullBit(oldp+14,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->fullBit(oldp+15,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->fullBit(oldp+16,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->fullBit(oldp+17,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->fullBit(oldp+18,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->fullBit(oldp+19,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->fullBit(oldp+20,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->fullBit(oldp+21,(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->fullCData(oldp+22,(vlTOPp->QueueFlowTester__DOT__value),5);
        tracep->fullCData(oldp+23,(vlTOPp->QueueFlowTester__DOT__value_1),5);
        tracep->fullCData(oldp+24,((((IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                     << 7U) | (((IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                               << 1U) 
                                                              | (IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->fullBit(oldp+25,((0x14U == (IData)(vlTOPp->QueueFlowTester__DOT__value))));
        tracep->fullBit(oldp+26,((0x14U == (IData)(vlTOPp->QueueFlowTester__DOT__value_1))));
        tracep->fullBit(oldp+27,(((IData)(vlTOPp->QueueFlowTester__DOT__q__DOT__maybe_full)
                                   ? (IData)(vlTOPp->QueueFlowTester__DOT__q__DOT___do_enq_T)
                                   : ((~ ((IData)(vlTOPp->QueueFlowTester__DOT___q_io_deq_ready_T) 
                                          >> 4U)) & (IData)(vlTOPp->QueueFlowTester__DOT__q__DOT___do_enq_T)))));
        tracep->fullBit(oldp+28,(((IData)(vlTOPp->QueueFlowTester__DOT__q__DOT__maybe_full) 
                                  & (((IData)(vlTOPp->QueueFlowTester__DOT___q_io_deq_ready_T) 
                                      >> 4U) & (IData)(vlTOPp->QueueFlowTester__DOT__q_io_deq_valid)))));
        tracep->fullBit(oldp+29,(vlTOPp->clock));
        tracep->fullBit(oldp+30,(vlTOPp->reset));
    }
}
