// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSqueezeFunctionalityTester__Syms.h"


void VSqueezeFunctionalityTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = static_cast<VSqueezeFunctionalityTester__Syms*>(userp);
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSqueezeFunctionalityTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = static_cast<VSqueezeFunctionalityTester__Syms*>(userp);
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgSData(oldp+2,(vlTOPp->SqueezeFunctionalityTester__DOT__counter),10);
        tracep->chgCData(oldp+3,((0xfU & ((0x1fU & 
                                           VL_EXTENDS_II(5,4, 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SqueezeFunctionalityTester__DOT__counter)))) 
                                          - (IData)(6U)))),4);
    }
}

void VSqueezeFunctionalityTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = static_cast<VSqueezeFunctionalityTester__Syms*>(userp);
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
