// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntervalRegisterTester__Syms.h"


void VIntervalRegisterTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VIntervalRegisterTester__Syms* __restrict vlSymsp = static_cast<VIntervalRegisterTester__Syms*>(userp);
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VIntervalRegisterTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VIntervalRegisterTester__Syms* __restrict vlSymsp = static_cast<VIntervalRegisterTester__Syms*>(userp);
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->IntervalRegisterTester__DOT__counter),4);
    }
}

void VIntervalRegisterTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VIntervalRegisterTester__Syms* __restrict vlSymsp = static_cast<VIntervalRegisterTester__Syms*>(userp);
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
