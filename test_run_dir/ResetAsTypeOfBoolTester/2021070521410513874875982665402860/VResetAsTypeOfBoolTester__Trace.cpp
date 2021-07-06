// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VResetAsTypeOfBoolTester__Syms.h"


void VResetAsTypeOfBoolTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VResetAsTypeOfBoolTester__Syms* __restrict vlSymsp = static_cast<VResetAsTypeOfBoolTester__Syms*>(userp);
    VResetAsTypeOfBoolTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VResetAsTypeOfBoolTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VResetAsTypeOfBoolTester__Syms* __restrict vlSymsp = static_cast<VResetAsTypeOfBoolTester__Syms*>(userp);
    VResetAsTypeOfBoolTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
    }
}

void VResetAsTypeOfBoolTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VResetAsTypeOfBoolTester__Syms* __restrict vlSymsp = static_cast<VResetAsTypeOfBoolTester__Syms*>(userp);
    VResetAsTypeOfBoolTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
