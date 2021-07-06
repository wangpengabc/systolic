// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCDTester__Syms.h"


void VGCDTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VGCDTester__Syms* __restrict vlSymsp = static_cast<VGCDTester__Syms*>(userp);
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VGCDTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VGCDTester__Syms* __restrict vlSymsp = static_cast<VGCDTester__Syms*>(userp);
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->GCDTester__DOT__first));
            tracep->chgIData(oldp+1,(vlTOPp->GCDTester__DOT__dut__DOT__x),32);
            tracep->chgBit(oldp+2,((0U == vlTOPp->GCDTester__DOT__dut__DOT__y)));
            tracep->chgIData(oldp+3,(vlTOPp->GCDTester__DOT__dut__DOT__y),32);
        }
        tracep->chgBit(oldp+4,(vlTOPp->clock));
        tracep->chgBit(oldp+5,(vlTOPp->reset));
    }
}

void VGCDTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VGCDTester__Syms* __restrict vlSymsp = static_cast<VGCDTester__Syms*>(userp);
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
