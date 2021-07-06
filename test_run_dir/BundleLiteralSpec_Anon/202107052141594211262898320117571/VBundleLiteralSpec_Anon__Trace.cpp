// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBundleLiteralSpec_Anon__Syms.h"


void VBundleLiteralSpec_Anon::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBundleLiteralSpec_Anon__Syms*>(userp);
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBundleLiteralSpec_Anon::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBundleLiteralSpec_Anon__Syms*>(userp);
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->BundleLiteralSpec_Anon__DOT__r_a),8);
            tracep->chgBit(oldp+1,(vlTOPp->BundleLiteralSpec_Anon__DOT__r_b));
            tracep->chgBit(oldp+2,(vlTOPp->BundleLiteralSpec_Anon__DOT__r_c));
        }
        tracep->chgBit(oldp+3,(vlTOPp->clock));
        tracep->chgBit(oldp+4,(vlTOPp->reset));
    }
}

void VBundleLiteralSpec_Anon::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBundleLiteralSpec_Anon__Syms*>(userp);
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
