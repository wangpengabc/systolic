// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxWithClockTester__Syms.h"


void VBlackBoxWithClockTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithClockTester__Syms*>(userp);
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBlackBoxWithClockTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithClockTester__Syms*>(userp);
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles))));
            tracep->chgBit(oldp+1,(vlTOPp->BlackBoxWithClockTester__DOT__blackBox__DOT__register));
            tracep->chgBit(oldp+2,(vlTOPp->BlackBoxWithClockTester__DOT__model));
            tracep->chgCData(oldp+3,(vlTOPp->BlackBoxWithClockTester__DOT__cycles),4);
            tracep->chgBit(oldp+4,((0xeU == (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles))));
        }
        tracep->chgBit(oldp+5,(vlTOPp->clock));
        tracep->chgBit(oldp+6,(vlTOPp->reset));
    }
}

void VBlackBoxWithClockTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithClockTester__Syms*>(userp);
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
