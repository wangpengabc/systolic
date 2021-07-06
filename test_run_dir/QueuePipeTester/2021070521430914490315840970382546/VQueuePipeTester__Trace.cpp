// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueuePipeTester__Syms.h"


void VQueuePipeTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VQueuePipeTester__Syms* __restrict vlSymsp = static_cast<VQueuePipeTester__Syms*>(userp);
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VQueuePipeTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VQueuePipeTester__Syms* __restrict vlSymsp = static_cast<VQueuePipeTester__Syms*>(userp);
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready));
            tracep->chgBit(oldp+1,((0x14U > (IData)(vlTOPp->QueuePipeTester__DOT__value))));
            tracep->chgBit(oldp+2,((1U & ((IData)(vlTOPp->QueuePipeTester__DOT___q_io_deq_ready_T) 
                                          >> 0xcU))));
            tracep->chgBit(oldp+3,((1U & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__empty)))));
            tracep->chgCData(oldp+4,((3U & ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_match)
                                             ? ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__maybe_full)
                                                 ? 3U
                                                 : 0U)
                                             : (((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__deq_ptr_value) 
                                                 > (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__enq_ptr_value))
                                                 ? 
                                                ((IData)(3U) 
                                                 + (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_diff))
                                                 : (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_diff))))),2);
            tracep->chgBit(oldp+5,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0));
            tracep->chgBit(oldp+6,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1));
            tracep->chgBit(oldp+7,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2));
            tracep->chgBit(oldp+8,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3));
            tracep->chgBit(oldp+9,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4));
            tracep->chgBit(oldp+10,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5));
            tracep->chgBit(oldp+11,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6));
            tracep->chgBit(oldp+12,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7));
            tracep->chgBit(oldp+13,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8));
            tracep->chgBit(oldp+14,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9));
            tracep->chgBit(oldp+15,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10));
            tracep->chgBit(oldp+16,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11));
            tracep->chgBit(oldp+17,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12));
            tracep->chgBit(oldp+18,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13));
            tracep->chgBit(oldp+19,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14));
            tracep->chgBit(oldp+20,(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15));
            tracep->chgCData(oldp+21,(vlTOPp->QueuePipeTester__DOT__value),5);
            tracep->chgCData(oldp+22,(vlTOPp->QueuePipeTester__DOT__value_1),5);
            tracep->chgCData(oldp+23,((((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
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
            tracep->chgBit(oldp+24,((0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value))));
            tracep->chgBit(oldp+25,((0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value_1))));
            tracep->chgCData(oldp+26,(vlTOPp->QueuePipeTester__DOT__q__DOT__enq_ptr_value),2);
            tracep->chgCData(oldp+27,(vlTOPp->QueuePipeTester__DOT__q__DOT__deq_ptr_value),2);
            tracep->chgBit(oldp+28,(vlTOPp->QueuePipeTester__DOT__q__DOT__maybe_full));
            tracep->chgBit(oldp+29,(vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_match));
            tracep->chgBit(oldp+30,(vlTOPp->QueuePipeTester__DOT__q__DOT__empty));
            tracep->chgBit(oldp+31,(((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_match) 
                                     & (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__maybe_full))));
            tracep->chgBit(oldp+32,(vlTOPp->QueuePipeTester__DOT__q__DOT__do_enq));
            tracep->chgBit(oldp+33,(vlTOPp->QueuePipeTester__DOT__q__DOT__do_deq));
            tracep->chgBit(oldp+34,((2U == (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__enq_ptr_value))));
            tracep->chgBit(oldp+35,((2U == (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__deq_ptr_value))));
            tracep->chgCData(oldp+36,(vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_diff),2);
        }
        tracep->chgBit(oldp+37,(vlTOPp->clock));
        tracep->chgBit(oldp+38,(vlTOPp->reset));
    }
}

void VQueuePipeTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VQueuePipeTester__Syms* __restrict vlSymsp = static_cast<VQueuePipeTester__Syms*>(userp);
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
