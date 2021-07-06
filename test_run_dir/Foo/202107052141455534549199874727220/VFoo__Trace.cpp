// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFoo__Syms.h"


void VFoo::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFoo__Syms* __restrict vlSymsp = static_cast<VFoo__Syms*>(userp);
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFoo::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFoo__Syms* __restrict vlSymsp = static_cast<VFoo__Syms*>(userp);
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->Foo__DOT__done_value),2);
        tracep->chgBit(oldp+3,((3U == (IData)(vlTOPp->Foo__DOT__done_value))));
    }
}

void VFoo::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFoo__Syms* __restrict vlSymsp = static_cast<VFoo__Syms*>(userp);
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
