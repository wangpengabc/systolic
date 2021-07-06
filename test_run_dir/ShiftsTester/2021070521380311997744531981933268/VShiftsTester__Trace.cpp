// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftsTester__Syms.h"


void VShiftsTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VShiftsTester__Syms* __restrict vlSymsp = static_cast<VShiftsTester__Syms*>(userp);
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VShiftsTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VShiftsTester__Syms* __restrict vlSymsp = static_cast<VShiftsTester__Syms*>(userp);
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->ShiftsTester__DOT__cntVal),2);
            tracep->chgBit(oldp+1,((2U == (IData)(vlTOPp->ShiftsTester__DOT__cntVal))));
            tracep->chgCData(oldp+2,(vlTOPp->ShiftsTester__DOT__srs_0),5);
            tracep->chgCData(oldp+3,(vlTOPp->ShiftsTester__DOT__srs_1),5);
            tracep->chgCData(oldp+4,(vlTOPp->ShiftsTester__DOT__srs_2),5);
            tracep->chgBit(oldp+5,(vlTOPp->ShiftsTester__DOT__REG));
        }
        tracep->chgBit(oldp+6,(vlTOPp->clock));
        tracep->chgBit(oldp+7,(vlTOPp->reset));
    }
}

void VShiftsTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VShiftsTester__Syms* __restrict vlSymsp = static_cast<VShiftsTester__Syms*>(userp);
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
