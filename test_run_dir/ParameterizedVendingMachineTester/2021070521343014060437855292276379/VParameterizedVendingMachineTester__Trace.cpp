// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


void VParameterizedVendingMachineTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VParameterizedVendingMachineTester__Syms*>(userp);
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VParameterizedVendingMachineTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VParameterizedVendingMachineTester__Syms*>(userp);
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))));
            tracep->chgBit(oldp+1,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                          >> 1U))));
            tracep->chgBit(oldp+2,((0x1edU <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
            tracep->chgCData(oldp+3,(vlTOPp->ParameterizedVendingMachineTester__DOT__idx),7);
            tracep->chgBit(oldp+4,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))));
            tracep->chgSData(oldp+5,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),10);
            tracep->chgSData(oldp+6,(((2U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                       ? 0x1dU : ((1U 
                                                   & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                                   ? 1U
                                                   : 0U))),10);
        }
        tracep->chgBit(oldp+7,(vlTOPp->clock));
        tracep->chgBit(oldp+8,(vlTOPp->reset));
    }
}

void VParameterizedVendingMachineTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VParameterizedVendingMachineTester__Syms*>(userp);
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}