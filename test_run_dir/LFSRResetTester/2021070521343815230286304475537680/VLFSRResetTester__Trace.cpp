// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRResetTester__Syms.h"


void VLFSRResetTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VLFSRResetTester__Syms* __restrict vlSymsp = static_cast<VLFSRResetTester__Syms*>(userp);
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VLFSRResetTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VLFSRResetTester__Syms* __restrict vlSymsp = static_cast<VLFSRResetTester__Syms*>(userp);
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((3U == (IData)(vlTOPp->LFSRResetTester__DOT__count))));
            tracep->chgBit(oldp+1,((1U == (IData)(vlTOPp->LFSRResetTester__DOT__count))));
            tracep->chgBit(oldp+2,(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0));
            tracep->chgCData(oldp+3,(vlTOPp->LFSRResetTester__DOT__count),3);
            tracep->chgBit(oldp+4,((4U == (IData)(vlTOPp->LFSRResetTester__DOT__count))));
        }
        tracep->chgBit(oldp+5,(vlTOPp->clock));
        tracep->chgBit(oldp+6,(vlTOPp->reset));
    }
}

void VLFSRResetTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VLFSRResetTester__Syms* __restrict vlSymsp = static_cast<VLFSRResetTester__Syms*>(userp);
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
