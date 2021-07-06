// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPRNGStepTest__Syms.h"


void VPRNGStepTest::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VPRNGStepTest__Syms* __restrict vlSymsp = static_cast<VPRNGStepTest__Syms*>(userp);
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VPRNGStepTest::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VPRNGStepTest__Syms* __restrict vlSymsp = static_cast<VPRNGStepTest__Syms*>(userp);
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0));
            tracep->chgBit(oldp+1,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1));
            tracep->chgBit(oldp+2,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2));
            tracep->chgBit(oldp+3,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3));
            tracep->chgBit(oldp+4,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4));
            tracep->chgBit(oldp+5,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5));
            tracep->chgBit(oldp+6,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6));
            tracep->chgBit(oldp+7,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7));
            tracep->chgBit(oldp+8,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8));
            tracep->chgBit(oldp+9,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9));
            tracep->chgBit(oldp+10,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10));
            tracep->chgBit(oldp+11,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11));
            tracep->chgBit(oldp+12,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12));
            tracep->chgBit(oldp+13,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13));
            tracep->chgBit(oldp+14,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14));
            tracep->chgBit(oldp+15,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15));
            tracep->chgBit(oldp+16,(vlTOPp->PRNGStepTest__DOT__count2));
            tracep->chgBit(oldp+17,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0));
            tracep->chgBit(oldp+18,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1));
            tracep->chgBit(oldp+19,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2));
            tracep->chgBit(oldp+20,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3));
            tracep->chgBit(oldp+21,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4));
            tracep->chgBit(oldp+22,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5));
            tracep->chgBit(oldp+23,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6));
            tracep->chgBit(oldp+24,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7));
            tracep->chgBit(oldp+25,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8));
            tracep->chgBit(oldp+26,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9));
            tracep->chgBit(oldp+27,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10));
            tracep->chgBit(oldp+28,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11));
            tracep->chgBit(oldp+29,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12));
            tracep->chgBit(oldp+30,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13));
            tracep->chgBit(oldp+31,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14));
            tracep->chgBit(oldp+32,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15));
            tracep->chgBit(oldp+33,((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))));
            tracep->chgBit(oldp+34,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0));
            tracep->chgBit(oldp+35,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1));
            tracep->chgBit(oldp+36,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2));
            tracep->chgBit(oldp+37,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3));
            tracep->chgBit(oldp+38,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4));
            tracep->chgBit(oldp+39,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5));
            tracep->chgBit(oldp+40,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6));
            tracep->chgBit(oldp+41,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7));
            tracep->chgBit(oldp+42,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_8));
            tracep->chgBit(oldp+43,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_9));
            tracep->chgBit(oldp+44,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_10));
            tracep->chgBit(oldp+45,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_11));
            tracep->chgBit(oldp+46,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12));
            tracep->chgBit(oldp+47,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13));
            tracep->chgBit(oldp+48,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14));
            tracep->chgBit(oldp+49,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15));
            tracep->chgCData(oldp+50,(vlTOPp->PRNGStepTest__DOT__count4),2);
            tracep->chgCData(oldp+51,((((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                        << 7U) | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                   << 6U) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                      << 5U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0))))))))),8);
            tracep->chgSData(oldp+52,((((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                                        << 0xfU) | 
                                       (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0))))))))))))))))),16);
            tracep->chgCData(oldp+53,((((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                        << 7U) | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                   << 6U) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                      << 5U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0))))))))),8);
            tracep->chgSData(oldp+54,((((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                                        << 0xfU) | 
                                       (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0))))))))))))))))),16);
            tracep->chgCData(oldp+55,((((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7) 
                                        << 7U) | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6) 
                                                   << 6U) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5) 
                                                      << 5U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0))))))))),8);
            tracep->chgSData(oldp+56,((((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15) 
                                        << 0xfU) | 
                                       (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0))))))))))))))))),16);
            tracep->chgCData(oldp+57,(vlTOPp->PRNGStepTest__DOT__done_value),4);
            tracep->chgBit(oldp+58,((0xfU == (IData)(vlTOPp->PRNGStepTest__DOT__done_value))));
        }
        tracep->chgBit(oldp+59,(vlTOPp->clock));
        tracep->chgBit(oldp+60,(vlTOPp->reset));
    }
}

void VPRNGStepTest::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VPRNGStepTest__Syms* __restrict vlSymsp = static_cast<VPRNGStepTest__Syms*>(userp);
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
