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
            tracep->chgBit(oldp+2,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                          >> 2U))));
            tracep->chgBit(oldp+3,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                          >> 3U))));
            tracep->chgBit(oldp+4,((0x96U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
            tracep->chgCData(oldp+5,(vlTOPp->ParameterizedVendingMachineTester__DOT__idx),7);
            tracep->chgBit(oldp+6,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))));
            tracep->chgCData(oldp+7,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),8);
            tracep->chgCData(oldp+8,(((8U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                       ? 0x19U : ((4U 
                                                   & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                                   ? 0xaU
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                                     ? 1U
                                                     : 0U))))),8);
        }
        tracep->chgBit(oldp+9,(vlTOPp->clock));
        tracep->chgBit(oldp+10,(vlTOPp->reset));
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
