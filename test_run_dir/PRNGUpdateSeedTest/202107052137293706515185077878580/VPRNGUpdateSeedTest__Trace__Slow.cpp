// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPRNGUpdateSeedTest__Syms.h"


//======================

void VPRNGUpdateSeedTest::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VPRNGUpdateSeedTest::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = static_cast<VPRNGUpdateSeedTest__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VPRNGUpdateSeedTest::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VPRNGUpdateSeedTest::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = static_cast<VPRNGUpdateSeedTest__Syms*>(userp);
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VPRNGUpdateSeedTest::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = static_cast<VPRNGUpdateSeedTest__Syms*>(userp);
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+21,"clock", false,-1);
        tracep->declBit(c+22,"reset", false,-1);
        tracep->declBit(c+21,"PRNGUpdateSeedTest clock", false,-1);
        tracep->declBit(c+22,"PRNGUpdateSeedTest reset", false,-1);
        tracep->declBit(c+21,"PRNGUpdateSeedTest a_clock", false,-1);
        tracep->declBit(c+22,"PRNGUpdateSeedTest a_reset", false,-1);
        tracep->declBit(c+1,"PRNGUpdateSeedTest a_io_seed_valid", false,-1);
        tracep->declBit(c+2,"PRNGUpdateSeedTest a_io_out_0", false,-1);
        tracep->declBit(c+3,"PRNGUpdateSeedTest a_io_out_1", false,-1);
        tracep->declBit(c+4,"PRNGUpdateSeedTest a_io_out_2", false,-1);
        tracep->declBit(c+5,"PRNGUpdateSeedTest a_io_out_3", false,-1);
        tracep->declBit(c+6,"PRNGUpdateSeedTest a_io_out_4", false,-1);
        tracep->declBit(c+7,"PRNGUpdateSeedTest a_io_out_5", false,-1);
        tracep->declBit(c+8,"PRNGUpdateSeedTest a_io_out_6", false,-1);
        tracep->declBit(c+9,"PRNGUpdateSeedTest a_io_out_7", false,-1);
        tracep->declBit(c+10,"PRNGUpdateSeedTest a_io_out_8", false,-1);
        tracep->declBit(c+11,"PRNGUpdateSeedTest a_io_out_9", false,-1);
        tracep->declBit(c+12,"PRNGUpdateSeedTest a_io_out_10", false,-1);
        tracep->declBit(c+13,"PRNGUpdateSeedTest a_io_out_11", false,-1);
        tracep->declBit(c+14,"PRNGUpdateSeedTest a_io_out_12", false,-1);
        tracep->declBit(c+15,"PRNGUpdateSeedTest a_io_out_13", false,-1);
        tracep->declBit(c+16,"PRNGUpdateSeedTest a_io_out_14", false,-1);
        tracep->declBit(c+17,"PRNGUpdateSeedTest a_io_out_15", false,-1);
        tracep->declBus(c+18,"PRNGUpdateSeedTest count", false,-1, 1,0);
        tracep->declBit(c+19,"PRNGUpdateSeedTest wrap_wrap", false,-1);
        tracep->declBus(c+20,"PRNGUpdateSeedTest lo", false,-1, 7,0);
        tracep->declBit(c+21,"PRNGUpdateSeedTest a clock", false,-1);
        tracep->declBit(c+22,"PRNGUpdateSeedTest a reset", false,-1);
        tracep->declBit(c+1,"PRNGUpdateSeedTest a io_seed_valid", false,-1);
        tracep->declBit(c+2,"PRNGUpdateSeedTest a io_out_0", false,-1);
        tracep->declBit(c+3,"PRNGUpdateSeedTest a io_out_1", false,-1);
        tracep->declBit(c+4,"PRNGUpdateSeedTest a io_out_2", false,-1);
        tracep->declBit(c+5,"PRNGUpdateSeedTest a io_out_3", false,-1);
        tracep->declBit(c+6,"PRNGUpdateSeedTest a io_out_4", false,-1);
        tracep->declBit(c+7,"PRNGUpdateSeedTest a io_out_5", false,-1);
        tracep->declBit(c+8,"PRNGUpdateSeedTest a io_out_6", false,-1);
        tracep->declBit(c+9,"PRNGUpdateSeedTest a io_out_7", false,-1);
        tracep->declBit(c+10,"PRNGUpdateSeedTest a io_out_8", false,-1);
        tracep->declBit(c+11,"PRNGUpdateSeedTest a io_out_9", false,-1);
        tracep->declBit(c+12,"PRNGUpdateSeedTest a io_out_10", false,-1);
        tracep->declBit(c+13,"PRNGUpdateSeedTest a io_out_11", false,-1);
        tracep->declBit(c+14,"PRNGUpdateSeedTest a io_out_12", false,-1);
        tracep->declBit(c+15,"PRNGUpdateSeedTest a io_out_13", false,-1);
        tracep->declBit(c+16,"PRNGUpdateSeedTest a io_out_14", false,-1);
        tracep->declBit(c+17,"PRNGUpdateSeedTest a io_out_15", false,-1);
        tracep->declBit(c+2,"PRNGUpdateSeedTest a state_0", false,-1);
        tracep->declBit(c+3,"PRNGUpdateSeedTest a state_1", false,-1);
        tracep->declBit(c+4,"PRNGUpdateSeedTest a state_2", false,-1);
        tracep->declBit(c+5,"PRNGUpdateSeedTest a state_3", false,-1);
        tracep->declBit(c+6,"PRNGUpdateSeedTest a state_4", false,-1);
        tracep->declBit(c+7,"PRNGUpdateSeedTest a state_5", false,-1);
        tracep->declBit(c+8,"PRNGUpdateSeedTest a state_6", false,-1);
        tracep->declBit(c+9,"PRNGUpdateSeedTest a state_7", false,-1);
        tracep->declBit(c+10,"PRNGUpdateSeedTest a state_8", false,-1);
        tracep->declBit(c+11,"PRNGUpdateSeedTest a state_9", false,-1);
        tracep->declBit(c+12,"PRNGUpdateSeedTest a state_10", false,-1);
        tracep->declBit(c+13,"PRNGUpdateSeedTest a state_11", false,-1);
        tracep->declBit(c+14,"PRNGUpdateSeedTest a state_12", false,-1);
        tracep->declBit(c+15,"PRNGUpdateSeedTest a state_13", false,-1);
        tracep->declBit(c+16,"PRNGUpdateSeedTest a state_14", false,-1);
        tracep->declBit(c+17,"PRNGUpdateSeedTest a state_15", false,-1);
    }
}

void VPRNGUpdateSeedTest::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VPRNGUpdateSeedTest::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = static_cast<VPRNGUpdateSeedTest__Syms*>(userp);
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VPRNGUpdateSeedTest::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = static_cast<VPRNGUpdateSeedTest__Syms*>(userp);
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((2U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count))));
        tracep->fullBit(oldp+2,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_0));
        tracep->fullBit(oldp+3,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_1));
        tracep->fullBit(oldp+4,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_2));
        tracep->fullBit(oldp+5,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_3));
        tracep->fullBit(oldp+6,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_4));
        tracep->fullBit(oldp+7,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_5));
        tracep->fullBit(oldp+8,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_6));
        tracep->fullBit(oldp+9,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_7));
        tracep->fullBit(oldp+10,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_8));
        tracep->fullBit(oldp+11,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_9));
        tracep->fullBit(oldp+12,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_10));
        tracep->fullBit(oldp+13,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_11));
        tracep->fullBit(oldp+14,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_12));
        tracep->fullBit(oldp+15,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_13));
        tracep->fullBit(oldp+16,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_14));
        tracep->fullBit(oldp+17,(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_15));
        tracep->fullCData(oldp+18,(vlTOPp->PRNGUpdateSeedTest__DOT__count),2);
        tracep->fullBit(oldp+19,((3U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count))));
        tracep->fullCData(oldp+20,((((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_7) 
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
        tracep->fullBit(oldp+21,(vlTOPp->clock));
        tracep->fullBit(oldp+22,(vlTOPp->reset));
    }
}
