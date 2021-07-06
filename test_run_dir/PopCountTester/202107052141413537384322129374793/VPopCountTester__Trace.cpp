// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPopCountTester__Syms.h"


void VPopCountTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VPopCountTester__Syms* __restrict vlSymsp = static_cast<VPopCountTester__Syms*>(userp);
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VPopCountTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VPopCountTester__Syms* __restrict vlSymsp = static_cast<VPopCountTester__Syms*>(userp);
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->PopCountTester__DOT__x),2);
            tracep->chgBit(oldp+1,(vlTOPp->PopCountTester__DOT__REG));
            tracep->chgCData(oldp+2,((3U & ((1U & (IData)(vlTOPp->PopCountTester__DOT__x)) 
                                            + (1U & 
                                               ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                >> 1U))))),2);
            tracep->chgCData(oldp+3,((7U & ((1U & (IData)(vlTOPp->PopCountTester__DOT__x)) 
                                            + (1U & 
                                               ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                >> 1U))))),3);
        }
        tracep->chgBit(oldp+4,(vlTOPp->clock));
        tracep->chgBit(oldp+5,(vlTOPp->reset));
    }
}

void VPopCountTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VPopCountTester__Syms* __restrict vlSymsp = static_cast<VPopCountTester__Syms*>(userp);
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
