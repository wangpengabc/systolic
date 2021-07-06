// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntervalTester2__Syms.h"


void VIntervalTester2::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VIntervalTester2__Syms* __restrict vlSymsp = static_cast<VIntervalTester2__Syms*>(userp);
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VIntervalTester2::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VIntervalTester2__Syms* __restrict vlSymsp = static_cast<VIntervalTester2__Syms*>(userp);
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->IntervalTester2__DOT__cycle),4);
        tracep->chgBit(oldp+3,((0xaU == (IData)(vlTOPp->IntervalTester2__DOT__cycle))));
    }
}

void VIntervalTester2::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VIntervalTester2__Syms* __restrict vlSymsp = static_cast<VIntervalTester2__Syms*>(userp);
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
