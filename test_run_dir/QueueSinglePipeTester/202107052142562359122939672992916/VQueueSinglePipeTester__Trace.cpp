// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueSinglePipeTester__Syms.h"


void VQueueSinglePipeTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VQueueSinglePipeTester__Syms* __restrict vlSymsp = static_cast<VQueueSinglePipeTester__Syms*>(userp);
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VQueueSinglePipeTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VQueueSinglePipeTester__Syms* __restrict vlSymsp = static_cast<VQueueSinglePipeTester__Syms*>(userp);
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready));
            tracep->chgBit(oldp+1,((0x14U > (IData)(vlTOPp->QueueSinglePipeTester__DOT__value))));
            tracep->chgBit(oldp+2,((1U & ((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                                          >> 0xeU))));
            tracep->chgBit(oldp+3,(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full));
            tracep->chgBit(oldp+4,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0));
            tracep->chgBit(oldp+5,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1));
            tracep->chgBit(oldp+6,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2));
            tracep->chgBit(oldp+7,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3));
            tracep->chgBit(oldp+8,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4));
            tracep->chgBit(oldp+9,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5));
            tracep->chgBit(oldp+10,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6));
            tracep->chgBit(oldp+11,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7));
            tracep->chgBit(oldp+12,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8));
            tracep->chgBit(oldp+13,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9));
            tracep->chgBit(oldp+14,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10));
            tracep->chgBit(oldp+15,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11));
            tracep->chgBit(oldp+16,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12));
            tracep->chgBit(oldp+17,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13));
            tracep->chgBit(oldp+18,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14));
            tracep->chgBit(oldp+19,(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15));
            tracep->chgCData(oldp+20,(vlTOPp->QueueSinglePipeTester__DOT__value),5);
            tracep->chgCData(oldp+21,(vlTOPp->QueueSinglePipeTester__DOT__value_1),5);
            tracep->chgCData(oldp+22,((((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                        << 7U) | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                   << 6U) 
                                                  | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                      << 5U) 
                                                     | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
            tracep->chgBit(oldp+23,((0x14U == (IData)(vlTOPp->QueueSinglePipeTester__DOT__value))));
            tracep->chgBit(oldp+24,((0x14U == (IData)(vlTOPp->QueueSinglePipeTester__DOT__value_1))));
            tracep->chgBit(oldp+25,((1U & (~ (IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full)))));
            tracep->chgBit(oldp+26,(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__do_enq));
            tracep->chgBit(oldp+27,((((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                                      >> 0xeU) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full))));
        }
        tracep->chgBit(oldp+28,(vlTOPp->clock));
        tracep->chgBit(oldp+29,(vlTOPp->reset));
    }
}

void VQueueSinglePipeTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VQueueSinglePipeTester__Syms* __restrict vlSymsp = static_cast<VQueueSinglePipeTester__Syms*>(userp);
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
