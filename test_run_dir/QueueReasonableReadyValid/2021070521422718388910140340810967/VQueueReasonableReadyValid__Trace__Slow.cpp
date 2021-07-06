// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueReasonableReadyValid__Syms.h"


//======================

void VQueueReasonableReadyValid::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VQueueReasonableReadyValid::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = static_cast<VQueueReasonableReadyValid__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VQueueReasonableReadyValid::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VQueueReasonableReadyValid::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = static_cast<VQueueReasonableReadyValid__Syms*>(userp);
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VQueueReasonableReadyValid::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = static_cast<VQueueReasonableReadyValid__Syms*>(userp);
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+36,"clock", false,-1);
        tracep->declBit(c+37,"reset", false,-1);
        tracep->declBit(c+36,"QueueReasonableReadyValid clock", false,-1);
        tracep->declBit(c+37,"QueueReasonableReadyValid reset", false,-1);
        tracep->declBit(c+36,"QueueReasonableReadyValid q_clock", false,-1);
        tracep->declBit(c+37,"QueueReasonableReadyValid q_reset", false,-1);
        tracep->declBit(c+1,"QueueReasonableReadyValid q_io_enq_ready", false,-1);
        tracep->declBit(c+2,"QueueReasonableReadyValid q_io_enq_valid", false,-1);
        tracep->declBit(c+3,"QueueReasonableReadyValid q_io_deq_ready", false,-1);
        tracep->declBit(c+4,"QueueReasonableReadyValid q_io_deq_valid", false,-1);
        tracep->declBus(c+5,"QueueReasonableReadyValid q_io_count", false,-1, 1,0);
        tracep->declBit(c+36,"QueueReasonableReadyValid q_io_deq_ready_prng_clock", false,-1);
        tracep->declBit(c+37,"QueueReasonableReadyValid q_io_deq_ready_prng_reset", false,-1);
        tracep->declBit(c+6,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_0", false,-1);
        tracep->declBit(c+7,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_1", false,-1);
        tracep->declBit(c+8,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_2", false,-1);
        tracep->declBit(c+9,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_3", false,-1);
        tracep->declBit(c+10,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_4", false,-1);
        tracep->declBit(c+11,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_5", false,-1);
        tracep->declBit(c+12,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_6", false,-1);
        tracep->declBit(c+13,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_7", false,-1);
        tracep->declBit(c+14,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_8", false,-1);
        tracep->declBit(c+15,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_9", false,-1);
        tracep->declBit(c+16,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_10", false,-1);
        tracep->declBit(c+17,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_11", false,-1);
        tracep->declBit(c+18,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_12", false,-1);
        tracep->declBit(c+19,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_13", false,-1);
        tracep->declBit(c+20,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_14", false,-1);
        tracep->declBit(c+21,"QueueReasonableReadyValid q_io_deq_ready_prng_io_out_15", false,-1);
        tracep->declBus(c+22,"QueueReasonableReadyValid value", false,-1, 4,0);
        tracep->declBus(c+23,"QueueReasonableReadyValid value_1", false,-1, 4,0);
        tracep->declBus(c+24,"QueueReasonableReadyValid q_io_deq_ready_lo", false,-1, 7,0);
        tracep->declBit(c+25,"QueueReasonableReadyValid wrap", false,-1);
        tracep->declBit(c+26,"QueueReasonableReadyValid wrap_1", false,-1);
        tracep->declBit(c+36,"QueueReasonableReadyValid q clock", false,-1);
        tracep->declBit(c+37,"QueueReasonableReadyValid q reset", false,-1);
        tracep->declBit(c+1,"QueueReasonableReadyValid q io_enq_ready", false,-1);
        tracep->declBit(c+2,"QueueReasonableReadyValid q io_enq_valid", false,-1);
        tracep->declBit(c+3,"QueueReasonableReadyValid q io_deq_ready", false,-1);
        tracep->declBit(c+4,"QueueReasonableReadyValid q io_deq_valid", false,-1);
        tracep->declBus(c+5,"QueueReasonableReadyValid q io_count", false,-1, 1,0);
        tracep->declBit(c+27,"QueueReasonableReadyValid q enq_ptr_value", false,-1);
        tracep->declBit(c+28,"QueueReasonableReadyValid q deq_ptr_value", false,-1);
        tracep->declBit(c+29,"QueueReasonableReadyValid q maybe_full", false,-1);
        tracep->declBit(c+30,"QueueReasonableReadyValid q ptr_match", false,-1);
        tracep->declBit(c+31,"QueueReasonableReadyValid q empty", false,-1);
        tracep->declBit(c+32,"QueueReasonableReadyValid q full", false,-1);
        tracep->declBit(c+33,"QueueReasonableReadyValid q do_enq", false,-1);
        tracep->declBit(c+34,"QueueReasonableReadyValid q do_deq", false,-1);
        tracep->declBit(c+35,"QueueReasonableReadyValid q ptr_diff", false,-1);
        tracep->declBit(c+36,"QueueReasonableReadyValid q_io_deq_ready_prng clock", false,-1);
        tracep->declBit(c+37,"QueueReasonableReadyValid q_io_deq_ready_prng reset", false,-1);
        tracep->declBit(c+6,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_0", false,-1);
        tracep->declBit(c+7,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_1", false,-1);
        tracep->declBit(c+8,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_2", false,-1);
        tracep->declBit(c+9,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_3", false,-1);
        tracep->declBit(c+10,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_4", false,-1);
        tracep->declBit(c+11,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_5", false,-1);
        tracep->declBit(c+12,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_6", false,-1);
        tracep->declBit(c+13,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_7", false,-1);
        tracep->declBit(c+14,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_8", false,-1);
        tracep->declBit(c+15,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_9", false,-1);
        tracep->declBit(c+16,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_10", false,-1);
        tracep->declBit(c+17,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_11", false,-1);
        tracep->declBit(c+18,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_12", false,-1);
        tracep->declBit(c+19,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_13", false,-1);
        tracep->declBit(c+20,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_14", false,-1);
        tracep->declBit(c+21,"QueueReasonableReadyValid q_io_deq_ready_prng io_out_15", false,-1);
        tracep->declBit(c+6,"QueueReasonableReadyValid q_io_deq_ready_prng state_0", false,-1);
        tracep->declBit(c+7,"QueueReasonableReadyValid q_io_deq_ready_prng state_1", false,-1);
        tracep->declBit(c+8,"QueueReasonableReadyValid q_io_deq_ready_prng state_2", false,-1);
        tracep->declBit(c+9,"QueueReasonableReadyValid q_io_deq_ready_prng state_3", false,-1);
        tracep->declBit(c+10,"QueueReasonableReadyValid q_io_deq_ready_prng state_4", false,-1);
        tracep->declBit(c+11,"QueueReasonableReadyValid q_io_deq_ready_prng state_5", false,-1);
        tracep->declBit(c+12,"QueueReasonableReadyValid q_io_deq_ready_prng state_6", false,-1);
        tracep->declBit(c+13,"QueueReasonableReadyValid q_io_deq_ready_prng state_7", false,-1);
        tracep->declBit(c+14,"QueueReasonableReadyValid q_io_deq_ready_prng state_8", false,-1);
        tracep->declBit(c+15,"QueueReasonableReadyValid q_io_deq_ready_prng state_9", false,-1);
        tracep->declBit(c+16,"QueueReasonableReadyValid q_io_deq_ready_prng state_10", false,-1);
        tracep->declBit(c+17,"QueueReasonableReadyValid q_io_deq_ready_prng state_11", false,-1);
        tracep->declBit(c+18,"QueueReasonableReadyValid q_io_deq_ready_prng state_12", false,-1);
        tracep->declBit(c+19,"QueueReasonableReadyValid q_io_deq_ready_prng state_13", false,-1);
        tracep->declBit(c+20,"QueueReasonableReadyValid q_io_deq_ready_prng state_14", false,-1);
        tracep->declBit(c+21,"QueueReasonableReadyValid q_io_deq_ready_prng state_15", false,-1);
    }
}

void VQueueReasonableReadyValid::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VQueueReasonableReadyValid::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = static_cast<VQueueReasonableReadyValid__Syms*>(userp);
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VQueueReasonableReadyValid::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = static_cast<VQueueReasonableReadyValid__Syms*>(userp);
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full)))));
        tracep->fullBit(oldp+2,((0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value))));
        tracep->fullBit(oldp+3,((1U & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                                       >> 0xaU))));
        tracep->fullBit(oldp+4,((1U & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty)))));
        tracep->fullCData(oldp+5,(((((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                     & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                     ? 2U : 0U) | (1U 
                                                   & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                      - (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value))))),2);
        tracep->fullBit(oldp+6,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->fullBit(oldp+7,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->fullBit(oldp+8,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->fullBit(oldp+9,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->fullBit(oldp+10,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->fullBit(oldp+11,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->fullBit(oldp+12,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->fullBit(oldp+13,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->fullBit(oldp+14,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->fullBit(oldp+15,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->fullBit(oldp+16,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->fullBit(oldp+17,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->fullBit(oldp+18,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->fullBit(oldp+19,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->fullBit(oldp+20,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->fullBit(oldp+21,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->fullCData(oldp+22,(vlTOPp->QueueReasonableReadyValid__DOT__value),5);
        tracep->fullCData(oldp+23,(vlTOPp->QueueReasonableReadyValid__DOT__value_1),5);
        tracep->fullCData(oldp+24,((((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                     << 7U) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                               << 1U) 
                                                              | (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->fullBit(oldp+25,((0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value))));
        tracep->fullBit(oldp+26,((0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1))));
        tracep->fullBit(oldp+27,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value));
        tracep->fullBit(oldp+28,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value));
        tracep->fullBit(oldp+29,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full));
        tracep->fullBit(oldp+30,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match));
        tracep->fullBit(oldp+31,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty));
        tracep->fullBit(oldp+32,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full));
        tracep->fullBit(oldp+33,(((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full)) 
                                  & (0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)))));
        tracep->fullBit(oldp+34,((1U & (((IData)(vlTOPp->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                                         >> 0xaU) & 
                                        (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty))))));
        tracep->fullBit(oldp+35,((1U & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                        - (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value)))));
        tracep->fullBit(oldp+36,(vlTOPp->clock));
        tracep->fullBit(oldp+37,(vlTOPp->reset));
    }
}
