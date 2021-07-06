// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftResetTester__Syms.h"


void VShiftResetTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VShiftResetTester__Syms* __restrict vlSymsp = static_cast<VShiftResetTester__Syms*>(userp);
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VShiftResetTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VShiftResetTester__Syms* __restrict vlSymsp = static_cast<VShiftResetTester__Syms*>(userp);
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->ShiftResetTester__DOT__sr),5);
    }
}

void VShiftResetTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VShiftResetTester__Syms* __restrict vlSymsp = static_cast<VShiftResetTester__Syms*>(userp);
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
