// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimpleVendingMachineTester__Syms.h"


void VSimpleVendingMachineTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VSimpleVendingMachineTester__Syms*>(userp);
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSimpleVendingMachineTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VSimpleVendingMachineTester__Syms*>(userp);
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((9U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                    & ((8U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                       | ((7U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                          & ((6U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                             & (5U 
                                                != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))))))));
            tracep->chgBit(oldp+1,(((9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                    | ((8U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                       & ((7U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                          & ((6U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                             | (5U 
                                                == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))))))));
            tracep->chgBit(oldp+2,((4U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state))));
            tracep->chgCData(oldp+3,(vlTOPp->SimpleVendingMachineTester__DOT__cycle),4);
            tracep->chgBit(oldp+4,((9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))));
            tracep->chgCData(oldp+5,(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state),3);
        }
        tracep->chgBit(oldp+6,(vlTOPp->clock));
        tracep->chgBit(oldp+7,(vlTOPp->reset));
    }
}

void VSimpleVendingMachineTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VSimpleVendingMachineTester__Syms*>(userp);
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
