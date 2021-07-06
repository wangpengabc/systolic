// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsTypeOfBundleTester__Syms.h"


void VAsTypeOfBundleTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VAsTypeOfBundleTester__Syms* __restrict vlSymsp = static_cast<VAsTypeOfBundleTester__Syms*>(userp);
    VAsTypeOfBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VAsTypeOfBundleTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VAsTypeOfBundleTester__Syms* __restrict vlSymsp = static_cast<VAsTypeOfBundleTester__Syms*>(userp);
    VAsTypeOfBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
    }
}

void VAsTypeOfBundleTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAsTypeOfBundleTester__Syms* __restrict vlSymsp = static_cast<VAsTypeOfBundleTester__Syms*>(userp);
    VAsTypeOfBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
