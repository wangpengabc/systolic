// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecFromVecTester__Syms.h"


void VMixedVecFromVecTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VMixedVecFromVecTester__Syms* __restrict vlSymsp = static_cast<VMixedVecFromVecTester__Syms*>(userp);
    VMixedVecFromVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VMixedVecFromVecTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VMixedVecFromVecTester__Syms* __restrict vlSymsp = static_cast<VMixedVecFromVecTester__Syms*>(userp);
    VMixedVecFromVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
    }
}

void VMixedVecFromVecTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VMixedVecFromVecTester__Syms* __restrict vlSymsp = static_cast<VMixedVecFromVecTester__Syms*>(userp);
    VMixedVecFromVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
