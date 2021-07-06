// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPRNGUpdateSeedTest__Syms.h"


void VPRNGUpdateSeedTest::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = static_cast<VPRNGUpdateSeedTest__Syms*>(userp);
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VPRNGUpdateSeedTest::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = static_cast<VPRNGUpdateSeedTest__Syms*>(userp);
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((2U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count))));
            tracep->chgBit(oldp+1,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_0));
            tracep->chgBit(oldp+2,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_1));
            tracep->chgBit(oldp+3,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_2));
            tracep->chgBit(oldp+4,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_3));
            tracep->chgBit(oldp+5,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_4));
            tracep->chgBit(oldp+6,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_5));
            tracep->chgBit(oldp+7,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_6));
            tracep->chgBit(oldp+8,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_7));
            tracep->chgBit(oldp+9,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_8));
            tracep->chgBit(oldp+10,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_9));
            tracep->chgBit(oldp+11,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_10));
            tracep->chgBit(oldp+12,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_11));
            tracep->chgBit(oldp+13,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_12));
            tracep->chgBit(oldp+14,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_13));
            tracep->chgBit(oldp+15,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_14));
            tracep->chgBit(oldp+16,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_15));
            tracep->chgCData(oldp+17,(vlTOPp->PRNGUpdateSeedTest__DOT__count),2);
            tracep->chgBit(oldp+18,((3U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count))));
            tracep->chgCData(oldp+19,((((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_7) 
                                        << 7U) | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_6) 
                                                   << 6U) 
                                                  | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_5) 
                                                      << 5U) 
                                                     | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_4) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_3) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_2) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_0))))))))),8);
        }
        tracep->chgBit(oldp+20,(vlTOPp->clock));
        tracep->chgBit(oldp+21,(vlTOPp->reset));
    }
}

void VPRNGUpdateSeedTest::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = static_cast<VPRNGUpdateSeedTest__Syms*>(userp);
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
