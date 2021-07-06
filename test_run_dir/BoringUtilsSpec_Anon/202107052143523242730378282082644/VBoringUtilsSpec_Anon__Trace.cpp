// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBoringUtilsSpec_Anon__Syms.h"


void VBoringUtilsSpec_Anon::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBoringUtilsSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBoringUtilsSpec_Anon__Syms*>(userp);
    VBoringUtilsSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBoringUtilsSpec_Anon::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBoringUtilsSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBoringUtilsSpec_Anon__Syms*>(userp);
    VBoringUtilsSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->BoringUtilsSpec_Anon__DOT__done_value));
    }
}

void VBoringUtilsSpec_Anon::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBoringUtilsSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBoringUtilsSpec_Anon__Syms*>(userp);
    VBoringUtilsSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
