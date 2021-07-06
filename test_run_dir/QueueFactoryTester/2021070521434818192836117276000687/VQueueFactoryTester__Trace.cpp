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
            tracep->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full)))));
            tracep->chgBit(oldp+1,((0x14U > (IData)(vlTOPp->QueueFactoryTester__DOT__value))));
            tracep->chgCData(oldp+2,(((0x13U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                       ? 4U : ((0x12U 
                                                == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                ? 6U
                                                : (
                                                   (0x11U 
                                                    == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                    ? 1U
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                     ? 0xeU
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                      ? 0xbU
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                       ? 0xbU
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                        ? 5U
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                         ? 2U
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                          ? 0xeU
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                           ? 2U
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                            ? 0xfU
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                             ? 0xeU
                                                             : 
                                                            ((7U 
                                                              == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                              ? 1U
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                               ? 4U
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                                ? 0xeU
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                                 ? 9U
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                                  ? 0xcU
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                                   ? 0xdU
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                                    ? 2U
                                                                    : 1U)))))))))))))))))))),4);
            tracep->chgBit(oldp+3,((1U & ((IData)(vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                                          >> 0xeU))));
            tracep->chgBit(oldp+4,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full));
            tracep->chgCData(oldp+5,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram
                                     [0U]),4);
            tracep->chgBit(oldp+6,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0));
            tracep->chgBit(oldp+7,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1));
            tracep->chgBit(oldp+8,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2));
            tracep->chgBit(oldp+9,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3));
            tracep->chgBit(oldp+10,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4));
            tracep->chgBit(oldp+11,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5));
            tracep->chgBit(oldp+12,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6));
            tracep->chgBit(oldp+13,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7));
            tracep->chgBit(oldp+14,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8));
            tracep->chgBit(oldp+15,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9));
            tracep->chgBit(oldp+16,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10));
            tracep->chgBit(oldp+17,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11));
            tracep->chgBit(oldp+18,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12));
            tracep->chgBit(oldp+19,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13));
            tracep->chgBit(oldp+20,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14));
            tracep->chgBit(oldp+21,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15));
            tracep->chgCData(oldp+22,(vlTOPp->QueueFactoryTester__DOT__value),5);
            tracep->chgCData(oldp+23,(vlTOPp->QueueFactoryTester__DOT__value_1),5);
            tracep->chgCData(oldp+24,((((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7) 
                                        << 7U) | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6) 
                                                   << 6U) 
                                                  | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5) 
                                                      << 5U) 
                                                     | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0))))))))),8);
            tracep->chgBit(oldp+25,((0x14U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))));
            tracep->chgBit(oldp+26,((0x14U == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))));
            tracep->chgCData(oldp+27,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram[0]),4);
            tracep->chgBit(oldp+28,(((~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full)) 
                                     & (0x14U > (IData)(vlTOPp->QueueFactoryTester__DOT__value)))));
            tracep->chgBit(oldp+29,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_enq));
            tracep->chgBit(oldp+30,((((IData)(vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                                      >> 0xeU) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full))));
        }
        tracep->chgBit(oldp+31,(vlTOPp->clock));
        tracep->chgBit(oldp+32,(vlTOPp->reset));
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
