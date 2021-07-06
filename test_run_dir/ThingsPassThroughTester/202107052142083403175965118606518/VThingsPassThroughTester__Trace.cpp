// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThingsPassThroughTester__Syms.h"


void VThingsPassThroughTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VThingsPassThroughTester__Syms* __restrict vlSymsp = static_cast<VThingsPassThroughTester__Syms*>(userp);
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VThingsPassThroughTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VThingsPassThroughTester__Syms* __restrict vlSymsp = static_cast<VThingsPassThroughTester__Syms*>(userp);
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full)))));
            tracep->chgBit(oldp+1,((0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))));
            tracep->chgCData(oldp+2,(((0x13U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                       ? 6U : ((0x12U 
                                                == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                ? 2U
                                                : (
                                                   (0x11U 
                                                    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                    ? 4U
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                     ? 0U
                                                     : 
                                                    ((0xfU 
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
            tracep->chgBit(oldp+3,((1U & (IData)(vlTOPp->ThingsPassThroughTester__DOT___q_io_deq_ready_T))));
            tracep->chgBit(oldp+4,((1U & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty)))));
            tracep->chgCData(oldp+5,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram
                                     [vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value]),3);
            tracep->chgBit(oldp+6,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0));
            tracep->chgBit(oldp+7,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1));
            tracep->chgBit(oldp+8,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2));
            tracep->chgBit(oldp+9,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3));
            tracep->chgBit(oldp+10,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4));
            tracep->chgBit(oldp+11,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5));
            tracep->chgBit(oldp+12,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6));
            tracep->chgBit(oldp+13,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7));
            tracep->chgBit(oldp+14,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8));
            tracep->chgBit(oldp+15,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9));
            tracep->chgBit(oldp+16,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10));
            tracep->chgBit(oldp+17,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11));
            tracep->chgBit(oldp+18,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12));
            tracep->chgBit(oldp+19,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13));
            tracep->chgBit(oldp+20,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14));
            tracep->chgBit(oldp+21,(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15));
            tracep->chgCData(oldp+22,(vlTOPp->ThingsPassThroughTester__DOT__value),5);
            tracep->chgCData(oldp+23,(vlTOPp->ThingsPassThroughTester__DOT__value_1),5);
            tracep->chgCData(oldp+24,((((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
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
            tracep->chgBit(oldp+25,((0x14U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))));
            tracep->chgBit(oldp+26,((0x14U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))));
            tracep->chgCData(oldp+27,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[0]),3);
            tracep->chgCData(oldp+28,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[1]),3);
            tracep->chgCData(oldp+29,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[2]),3);
            tracep->chgCData(oldp+30,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[3]),3);
            tracep->chgCData(oldp+31,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+32,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+33,(((~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full)) 
                                     & (0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)))));
            tracep->chgBit(oldp+34,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__maybe_full));
            tracep->chgBit(oldp+35,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ptr_match));
            tracep->chgBit(oldp+36,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty));
            tracep->chgBit(oldp+37,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full));
            tracep->chgBit(oldp+38,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_enq));
            tracep->chgBit(oldp+39,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_deq));
        }
        tracep->chgBit(oldp+40,(vlTOPp->clock));
        tracep->chgBit(oldp+41,(vlTOPp->reset));
    }
}

void VThingsPassThroughTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VThingsPassThroughTester__Syms* __restrict vlSymsp = static_cast<VThingsPassThroughTester__Syms*>(userp);
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
