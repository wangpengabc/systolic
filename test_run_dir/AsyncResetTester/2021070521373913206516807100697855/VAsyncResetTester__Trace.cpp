// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetTester__Syms.h"


void VAsyncResetTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetTester__Syms*>(userp);
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VAsyncResetTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetTester__Syms*>(userp);
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->AsyncResetTester__DOT__count),4);
            tracep->chgBit(oldp+1,((0xfU == (IData)(vlTOPp->AsyncResetTester__DOT__count))));
            tracep->chgBit(oldp+2,(vlTOPp->AsyncResetTester__DOT__asyncResetNext));
        }
        tracep->chgBit(oldp+3,(vlTOPp->clock));
        tracep->chgBit(oldp+4,(vlTOPp->reset));
        tracep->chgCData(oldp+5,(vlTOPp->AsyncResetTester__DOT__cDiv_value),2);
        tracep->chgBit(oldp+6,(vlTOPp->AsyncResetTester__DOT__slowClk));
        tracep->chgCData(oldp+7,(vlTOPp->AsyncResetTester__DOT__reg_),8);
    }
}

void VAsyncResetTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAsyncResetTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetTester__Syms*>(userp);
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
