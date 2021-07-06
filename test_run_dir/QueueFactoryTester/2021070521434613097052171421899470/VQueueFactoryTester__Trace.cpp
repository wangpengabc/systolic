// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueFactoryTester__Syms.h"


void VQueueFactoryTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VQueueFactoryTester__Syms* __restrict vlSymsp = static_cast<VQueueFactoryTester__Syms*>(userp);
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VQueueFactoryTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VQueueFactoryTester__Syms* __restrict vlSymsp = static_cast<VQueueFactoryTester__Syms*>(userp);
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_0));
            tracep->chgBit(oldp+1,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_1));
            tracep->chgBit(oldp+2,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_2));
            tracep->chgBit(oldp+3,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_3));
            tracep->chgBit(oldp+4,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_4));
            tracep->chgBit(oldp+5,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_5));
            tracep->chgBit(oldp+6,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_6));
            tracep->chgBit(oldp+7,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_7));
            tracep->chgBit(oldp+8,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_8));
            tracep->chgBit(oldp+9,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_9));
            tracep->chgBit(oldp+10,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_10));
            tracep->chgBit(oldp+11,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_11));
            tracep->chgBit(oldp+12,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_12));
            tracep->chgBit(oldp+13,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_13));
            tracep->chgBit(oldp+14,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_14));
            tracep->chgBit(oldp+15,(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_15));
            tracep->chgCData(oldp+16,(vlTOPp->QueueFactoryTester__DOT__value),5);
            tracep->chgCData(oldp+17,(vlTOPp->QueueFactoryTester__DOT__value_1),5);
            tracep->chgBit(oldp+18,((0x14U > (IData)(vlTOPp->QueueFactoryTester__DOT__value))));
            tracep->chgCData(oldp+19,((((IData)(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_7) 
                                        << 7U) | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_6) 
                                                   << 6U) 
                                                  | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_5) 
                                                      << 5U) 
                                                     | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_4) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_3) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_2) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_0))))))))),8);
            tracep->chgCData(oldp+20,(((0x13U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                        ? 5U : ((0x12U 
                                                 == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                 ? 3U
                                                 : 
                                                ((0x11U 
                                                  == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                  ? 4U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                   ? 0U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                    ? 6U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                     ? 0U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                      ? 1U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                       ? 6U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                         ? 2U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                          ? 7U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                           ? 2U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                            ? 6U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                             ? 5U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                              ? 5U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                               ? 5U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                                ? 3U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                                 ? 2U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                                  ? 6U
                                                                  : 1U)))))))))))))))))))),3);
            tracep->chgBit(oldp+21,((0x14U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))));
            tracep->chgBit(oldp+22,((0x14U == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))));
        }
        tracep->chgBit(oldp+23,(vlTOPp->clock));
        tracep->chgBit(oldp+24,(vlTOPp->reset));
    }
}

void VQueueFactoryTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VQueueFactoryTester__Syms* __restrict vlSymsp = static_cast<VQueueFactoryTester__Syms*>(userp);
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
