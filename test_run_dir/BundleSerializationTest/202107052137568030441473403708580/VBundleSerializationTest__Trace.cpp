// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBundleSerializationTest__Syms.h"


void VBundleSerializationTest::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBundleSerializationTest__Syms* __restrict vlSymsp = static_cast<VBundleSerializationTest__Syms*>(userp);
    VBundleSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBundleSerializationTest::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBundleSerializationTest__Syms* __restrict vlSymsp = static_cast<VBundleSerializationTest__Syms*>(userp);
    VBundleSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
    }
}

void VBundleSerializationTest::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBundleSerializationTest__Syms* __restrict vlSymsp = static_cast<VBundleSerializationTest__Syms*>(userp);
    VBundleSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
