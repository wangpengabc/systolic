// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueuePipeTester__Syms.h"


//======================

void VQueuePipeTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VQueuePipeTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueuePipeTester__Syms* __restrict vlSymsp = static_cast<VQueuePipeTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VQueuePipeTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VQueuePipeTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VQueuePipeTester__Syms* __restrict vlSymsp = static_cast<VQueuePipeTester__Syms*>(userp);
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VQueuePipeTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VQueuePipeTester__Syms* __restrict vlSymsp = static_cast<VQueuePipeTester__Syms*>(userp);
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+29,"clock", false,-1);
        tracep->declBit(c+30,"reset", false,-1);
        tracep->declBit(c+29,"QueuePipeTester clock", false,-1);
        tracep->declBit(c+30,"QueuePipeTester reset", false,-1);
        tracep->declBit(c+29,"QueuePipeTester q_clock", false,-1);
        tracep->declBit(c+30,"QueuePipeTester q_reset", false,-1);
        tracep->declBit(c+1,"QueuePipeTester q_io_enq_ready", false,-1);
        tracep->declBit(c+2,"QueuePipeTester q_io_enq_valid", false,-1);
        tracep->declBit(c+3,"QueuePipeTester q_io_deq_ready", false,-1);
        tracep->declBit(c+4,"QueuePipeTester q_io_deq_valid", false,-1);
        tracep->declBit(c+4,"QueuePipeTester q_io_count", false,-1);
        tracep->declBit(c+29,"QueuePipeTester q_io_deq_ready_prng_clock", false,-1);
        tracep->declBit(c+30,"QueuePipeTester q_io_deq_ready_prng_reset", false,-1);
        tracep->declBit(c+5,"QueuePipeTester q_io_deq_ready_prng_io_out_0", false,-1);
        tracep->declBit(c+6,"QueuePipeTester q_io_deq_ready_prng_io_out_1", false,-1);
        tracep->declBit(c+7,"QueuePipeTester q_io_deq_ready_prng_io_out_2", false,-1);
        tracep->declBit(c+8,"QueuePipeTester q_io_deq_ready_prng_io_out_3", false,-1);
        tracep->declBit(c+9,"QueuePipeTester q_io_deq_ready_prng_io_out_4", false,-1);
        tracep->declBit(c+10,"QueuePipeTester q_io_deq_ready_prng_io_out_5", false,-1);
        tracep->declBit(c+11,"QueuePipeTester q_io_deq_ready_prng_io_out_6", false,-1);
        tracep->declBit(c+12,"QueuePipeTester q_io_deq_ready_prng_io_out_7", false,-1);
        tracep->declBit(c+13,"QueuePipeTester q_io_deq_ready_prng_io_out_8", false,-1);
        tracep->declBit(c+14,"QueuePipeTester q_io_deq_ready_prng_io_out_9", false,-1);
        tracep->declBit(c+15,"QueuePipeTester q_io_deq_ready_prng_io_out_10", false,-1);
        tracep->declBit(c+16,"QueuePipeTester q_io_deq_ready_prng_io_out_11", false,-1);
        tracep->declBit(c+17,"QueuePipeTester q_io_deq_ready_prng_io_out_12", false,-1);
        tracep->declBit(c+18,"QueuePipeTester q_io_deq_ready_prng_io_out_13", false,-1);
        tracep->declBit(c+19,"QueuePipeTester q_io_deq_ready_prng_io_out_14", false,-1);
        tracep->declBit(c+20,"QueuePipeTester q_io_deq_ready_prng_io_out_15", false,-1);
        tracep->declBus(c+21,"QueuePipeTester value", false,-1, 4,0);
        tracep->declBus(c+22,"QueuePipeTester value_1", false,-1, 4,0);
        tracep->declBus(c+23,"QueuePipeTester q_io_deq_ready_lo", false,-1, 7,0);
        tracep->declBit(c+24,"QueuePipeTester wrap", false,-1);
        tracep->declBit(c+25,"QueuePipeTester wrap_1", false,-1);
        tracep->declBit(c+29,"QueuePipeTester q clock", false,-1);
        tracep->declBit(c+30,"QueuePipeTester q reset", false,-1);
        tracep->declBit(c+1,"QueuePipeTester q io_enq_ready", false,-1);
        tracep->declBit(c+2,"QueuePipeTester q io_enq_valid", false,-1);
        tracep->declBit(c+3,"QueuePipeTester q io_deq_ready", false,-1);
        tracep->declBit(c+4,"QueuePipeTester q io_deq_valid", false,-1);
        tracep->declBit(c+4,"QueuePipeTester q io_count", false,-1);
        tracep->declBit(c+4,"QueuePipeTester q maybe_full", false,-1);
        tracep->declBit(c+26,"QueuePipeTester q empty", false,-1);
        tracep->declBit(c+27,"QueuePipeTester q do_enq", false,-1);
        tracep->declBit(c+28,"QueuePipeTester q do_deq", false,-1);
        tracep->declBit(c+29,"QueuePipeTester q_io_deq_ready_prng clock", false,-1);
        tracep->declBit(c+30,"QueuePipeTester q_io_deq_ready_prng reset", false,-1);
        tracep->declBit(c+5,"QueuePipeTester q_io_deq_ready_prng io_out_0", false,-1);
        tracep->declBit(c+6,"QueuePipeTester q_io_deq_ready_prng io_out_1", false,-1);
        tracep->declBit(c+7,"QueuePipeTester q_io_deq_ready_prng io_out_2", false,-1);
        tracep->declBit(c+8,"QueuePipeTester q_io_deq_ready_prng io_out_3", false,-1);
        tracep->declBit(c+9,"QueuePipeTester q_io_deq_ready_prng io_out_4", false,-1);
        tracep->declBit(c+10,"QueuePipeTester q_io_deq_ready_prng io_out_5", false,-1);
        tracep->declBit(c+11,"QueuePipeTester q_io_deq_ready_prng io_out_6", false,-1);
        tracep->declBit(c+12,"QueuePipeTester q_io_deq_ready_prng io_out_7", false,-1);
        tracep->declBit(c+13,"QueuePipeTester q_io_deq_ready_prng io_out_8", false,-1);
        tracep->declBit(c+14,"QueuePipeTester q_io_deq_ready_prng io_out_9", false,-1);
        tracep->declBit(c+15,"QueuePipeTester q_io_deq_ready_prng io_out_10", false,-1);
        tracep->declBit(c+16,"QueuePipeTester q_io_deq_ready_prng io_out_11", false,-1);
        tracep->declBit(c+17,"QueuePipeTester q_io_deq_ready_prng io_out_12", false,-1);
        tracep->declBit(c+18,"QueuePipeTester q_io_deq_ready_prng io_out_13", false,-1);
        tracep->declBit(c+19,"QueuePipeTester q_io_deq_ready_prng io_out_14", false,-1);
        tracep->declBit(c+20,"QueuePipeTester q_io_deq_ready_prng io_out_15", false,-1);
        tracep->declBit(c+5,"QueuePipeTester q_io_deq_ready_prng state_0", false,-1);
        tracep->declBit(c+6,"QueuePipeTester q_io_deq_ready_prng state_1", false,-1);
        tracep->declBit(c+7,"QueuePipeTester q_io_deq_ready_prng state_2", false,-1);
        tracep->declBit(c+8,"QueuePipeTester q_io_deq_ready_prng state_3", false,-1);
        tracep->declBit(c+9,"QueuePipeTester q_io_deq_ready_prng state_4", false,-1);
        tracep->declBit(c+10,"QueuePipeTester q_io_deq_ready_prng state_5", false,-1);
        tracep->declBit(c+11,"QueuePipeTester q_io_deq_ready_prng state_6", false,-1);
        tracep->declBit(c+12,"QueuePipeTester q_io_deq_ready_prng state_7", false,-1);
        tracep->declBit(c+13,"QueuePipeTester q_io_deq_ready_prng state_8", false,-1);
        tracep->declBit(c+14,"QueuePipeTester q_io_deq_ready_prng state_9", false,-1);
        tracep->declBit(c+15,"QueuePipeTester q_io_deq_ready_prng state_10", false,-1);
        tracep->declBit(c+16,"QueuePipeTester q_io_deq_ready_prng state_11", false,-1);
        tracep->declBit(c+17,"QueuePipeTester q_io_deq_ready_prng state_12", false,-1);
        tracep->declBit(c+18,"QueuePipeTester q_io_deq_ready_prng state_13", false,-1);
        tracep->declBit(c+19,"QueuePipeTester q_io_deq_ready_prng state_14", false,-1);
        tracep->declBit(c+20,"QueuePipeTester q_io_deq_ready_prng state_15", false,-1);
    }
}

void VQueuePipeTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VQueuePipeTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VQueuePipeTester__Syms* __restrict vlSymsp = static_cast<VQueuePipeTester__Syms*>(userp);
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VQueuePipeTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VQueuePipeTester__Syms* __restrict vlSymsp = static_cast<VQueuePipeTester__Syms*>(userp);
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready));
        tracep->fullBit(oldp+2,((0x14U > (IData)(vlTOPp->QueuePipeTester__DOT__value))));
        tracep->fullBit(oldp+3,((1U & ((IData)(vlTOPp->QueuePipeTester__DOT___q_io_deq_ready_T) 
                                       >> 5U))));
        tracep->fullBit(oldp+4,(vlTOPp->QueuePipeTester__DOT__q__DOT__maybe_full));
        tracep->fullBit(oldp+5,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->fullBit(oldp+6,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->fullBit(oldp+7,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->fullBit(oldp+8,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->fullBit(oldp+9,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->fullBit(oldp+10,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->fullBit(oldp+11,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->fullBit(oldp+12,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->fullBit(oldp+13,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->fullBit(oldp+14,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->fullBit(oldp+15,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->fullBit(oldp+16,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->fullBit(oldp+17,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->fullBit(oldp+18,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->fullBit(oldp+19,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->fullBit(oldp+20,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->fullCData(oldp+21,(vlTOPp->QueuePipeTester__DOT__value),5);
        tracep->fullCData(oldp+22,(vlTOPp->QueuePipeTester__DOT__value_1),5);
        tracep->fullCData(oldp+23,((((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                     << 7U) | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                               << 1U) 
                                                              | (IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->fullBit(oldp+24,((0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value))));
        tracep->fullBit(oldp+25,((0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value_1))));
        tracep->fullBit(oldp+26,((1U & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__maybe_full)))));
        tracep->fullBit(oldp+27,(vlTOPp->QueuePipeTester__DOT__q__DOT__do_enq));
        tracep->fullBit(oldp+28,((((IData)(vlTOPp->QueuePipeTester__DOT___q_io_deq_ready_T) 
                                   >> 5U) & (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__maybe_full))));
        tracep->fullBit(oldp+29,(vlTOPp->clock));
        tracep->fullBit(oldp+30,(vlTOPp->reset));
    }
}
