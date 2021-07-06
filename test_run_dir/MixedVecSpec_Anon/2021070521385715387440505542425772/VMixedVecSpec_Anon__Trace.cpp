// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecSpec_Anon__Syms.h"


void VMixedVecSpec_Anon::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VMixedVecSpec_Anon__Syms* __restrict vlSymsp = static_cast<VMixedVecSpec_Anon__Syms*>(userp);
    VMixedVecSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VMixedVecSpec_Anon::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VMixedVecSpec_Anon__Syms* __restrict vlSymsp = static_cast<VMixedVecSpec_Anon__Syms*>(userp);
    VMixedVecSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
    }
}

void VMixedVecSpec_Anon::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VMixedVecSpec_Anon__Syms* __restrict vlSymsp = static_cast<VMixedVecSpec_Anon__Syms*>(userp);
    VMixedVecSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
