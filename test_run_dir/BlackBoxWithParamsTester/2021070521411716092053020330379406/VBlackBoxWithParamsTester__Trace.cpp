// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxWithParamsTester__Syms.h"


void VBlackBoxWithParamsTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithParamsTester__Syms*>(userp);
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBlackBoxWithParamsTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithParamsTester__Syms*>(userp);
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->BlackBoxWithParamsTester__DOT__cycles),2);
        tracep->chgBit(oldp+3,((3U == (IData)(vlTOPp->BlackBoxWithParamsTester__DOT__cycles))));
    }
}

void VBlackBoxWithParamsTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithParamsTester__Syms*>(userp);
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
