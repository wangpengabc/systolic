// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetSpec_Anon__Syms.h"


void VAsyncResetSpec_Anon::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = static_cast<VAsyncResetSpec_Anon__Syms*>(userp);
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VAsyncResetSpec_Anon::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = static_cast<VAsyncResetSpec_Anon__Syms*>(userp);
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->AsyncResetSpec_Anon__DOT__reg_),7);
        tracep->chgCData(oldp+3,(vlTOPp->AsyncResetSpec_Anon__DOT__count),2);
        tracep->chgBit(oldp+4,((3U == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count))));
    }
}

void VAsyncResetSpec_Anon::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = static_cast<VAsyncResetSpec_Anon__Syms*>(userp);
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
