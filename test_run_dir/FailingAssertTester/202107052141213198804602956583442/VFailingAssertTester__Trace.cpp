// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFailingAssertTester__Syms.h"


void VFailingAssertTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFailingAssertTester__Syms* __restrict vlSymsp = static_cast<VFailingAssertTester__Syms*>(userp);
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFailingAssertTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFailingAssertTester__Syms* __restrict vlSymsp = static_cast<VFailingAssertTester__Syms*>(userp);
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->FailingAssertTester__DOT__done_value),2);
        tracep->chgBit(oldp+3,((3U == (IData)(vlTOPp->FailingAssertTester__DOT__done_value))));
        tracep->chgBit(oldp+4,(((~ (IData)(vlTOPp->reset)) 
                                & (3U == (IData)(vlTOPp->FailingAssertTester__DOT__done_value)))));
    }
}

void VFailingAssertTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFailingAssertTester__Syms* __restrict vlSymsp = static_cast<VFailingAssertTester__Syms*>(userp);
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
