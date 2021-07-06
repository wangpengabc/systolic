// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxFlipTester__Syms.h"


void VBlackBoxFlipTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxFlipTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxFlipTester__Syms*>(userp);
    VBlackBoxFlipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBlackBoxFlipTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxFlipTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxFlipTester__Syms*>(userp);
    VBlackBoxFlipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
    }
}

void VBlackBoxFlipTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBlackBoxFlipTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxFlipTester__Syms*>(userp);
    VBlackBoxFlipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
