// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetAggregateTester__Syms.h"


void VAsyncResetAggregateTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetAggregateTester__Syms*>(userp);
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VAsyncResetAggregateTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetAggregateTester__Syms*>(userp);
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x),8);
            tracep->chgCData(oldp+1,(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y),8);
            tracep->chgCData(oldp+2,(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x),8);
            tracep->chgCData(oldp+3,(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+4,(vlTOPp->AsyncResetAggregateTester__DOT__count),4);
            tracep->chgBit(oldp+5,((0xfU == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))));
            tracep->chgBit(oldp+6,(vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext));
        }
        tracep->chgBit(oldp+7,(vlTOPp->clock));
        tracep->chgBit(oldp+8,(vlTOPp->reset));
        tracep->chgCData(oldp+9,(vlTOPp->AsyncResetAggregateTester__DOT__cDiv_value),2);
        tracep->chgBit(oldp+10,(vlTOPp->AsyncResetAggregateTester__DOT__slowClk));
    }
}

void VAsyncResetAggregateTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetAggregateTester__Syms*>(userp);
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
