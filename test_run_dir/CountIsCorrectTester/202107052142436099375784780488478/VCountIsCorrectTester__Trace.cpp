// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCountIsCorrectTester__Syms.h"


void VCountIsCorrectTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VCountIsCorrectTester__Syms* __restrict vlSymsp = static_cast<VCountIsCorrectTester__Syms*>(userp);
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VCountIsCorrectTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VCountIsCorrectTester__Syms* __restrict vlSymsp = static_cast<VCountIsCorrectTester__Syms*>(userp);
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__full)))));
            tracep->chgBit(oldp+1,((0x14U > (IData)(vlTOPp->CountIsCorrectTester__DOT__value))));
            tracep->chgBit(oldp+2,((1U & ((IData)(vlTOPp->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                                          >> 8U))));
            tracep->chgBit(oldp+3,((1U & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty)))));
            tracep->chgCData(oldp+4,(((((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                                        & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                                        ? 4U : 0U) 
                                      | (3U & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                               - (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value))))),3);
            tracep->chgBit(oldp+5,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0));
            tracep->chgBit(oldp+6,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1));
            tracep->chgBit(oldp+7,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2));
            tracep->chgBit(oldp+8,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3));
            tracep->chgBit(oldp+9,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4));
            tracep->chgBit(oldp+10,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5));
            tracep->chgBit(oldp+11,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6));
            tracep->chgBit(oldp+12,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7));
            tracep->chgBit(oldp+13,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_8));
            tracep->chgBit(oldp+14,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_9));
            tracep->chgBit(oldp+15,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10));
            tracep->chgBit(oldp+16,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_11));
            tracep->chgBit(oldp+17,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12));
            tracep->chgBit(oldp+18,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13));
            tracep->chgBit(oldp+19,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_14));
            tracep->chgBit(oldp+20,(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_15));
            tracep->chgCData(oldp+21,(vlTOPp->CountIsCorrectTester__DOT__value),5);
            tracep->chgCData(oldp+22,(vlTOPp->CountIsCorrectTester__DOT__value_1),5);
            tracep->chgCData(oldp+23,((((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
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
            tracep->chgBit(oldp+24,((0x14U == (IData)(vlTOPp->CountIsCorrectTester__DOT__value))));
            tracep->chgBit(oldp+25,((0x14U == (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1))));
            tracep->chgCData(oldp+26,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value),2);
            tracep->chgCData(oldp+27,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value),2);
            tracep->chgBit(oldp+28,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full));
            tracep->chgBit(oldp+29,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match));
            tracep->chgBit(oldp+30,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty));
            tracep->chgBit(oldp+31,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__full));
            tracep->chgBit(oldp+32,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__do_enq));
            tracep->chgBit(oldp+33,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__do_deq));
            tracep->chgCData(oldp+34,((3U & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                             - (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))),2);
        }
        tracep->chgBit(oldp+35,(vlTOPp->clock));
        tracep->chgBit(oldp+36,(vlTOPp->reset));
    }
}

void VCountIsCorrectTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VCountIsCorrectTester__Syms* __restrict vlSymsp = static_cast<VCountIsCorrectTester__Syms*>(userp);
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
