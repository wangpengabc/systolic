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
            tracep->chgBit(oldp+0,(((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                    | ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                       | ((0x61U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                          & ((0x60U 
                                              == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                             | ((0x5fU 
                                                 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                | ((0x5eU 
                                                    != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                   & ((0x5dU 
                                                       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                      | ((0x5cU 
                                                          == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                         | ((0x5bU 
                                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                            & ((0x5aU 
                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                               & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_92)))))))))))));
            tracep->chgBit(oldp+1,((6U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
            tracep->chgCData(oldp+2,(vlTOPp->ParameterizedVendingMachineTester__DOT__idx),7);
            tracep->chgBit(oldp+3,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))));
            tracep->chgCData(oldp+4,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),3);
            tracep->chgCData(oldp+5,((((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                       | ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                          | ((0x61U 
                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                             & ((0x60U 
                                                 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                | ((0x5fU 
                                                    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                   | ((0x5eU 
                                                       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                      & ((0x5dU 
                                                          == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                         | ((0x5cU 
                                                             == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                            | ((0x5bU 
                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                               & ((0x5aU 
                                                                   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                  & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_92)))))))))))
                                       ? 1U : 0U)),3);
        }
        tracep->chgBit(oldp+6,(vlTOPp->clock));
        tracep->chgBit(oldp+7,(vlTOPp->reset));
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
