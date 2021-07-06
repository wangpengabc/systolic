// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInternalBoreTester__Syms.h"


void VInternalBoreTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VInternalBoreTester__Syms* __restrict vlSymsp = static_cast<VInternalBoreTester__Syms*>(userp);
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VInternalBoreTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VInternalBoreTester__Syms* __restrict vlSymsp = static_cast<VInternalBoreTester__Syms*>(userp);
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->InternalBoreTester__DOT__done_value));
    }
}

void VInternalBoreTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VInternalBoreTester__Syms* __restrict vlSymsp = static_cast<VInternalBoreTester__Syms*>(userp);
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
