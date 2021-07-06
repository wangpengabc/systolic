// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPRNGStepTest__Syms.h"


//======================

void VPRNGStepTest::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VPRNGStepTest::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPRNGStepTest__Syms* __restrict vlSymsp = static_cast<VPRNGStepTest__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VPRNGStepTest::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VPRNGStepTest::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VPRNGStepTest__Syms* __restrict vlSymsp = static_cast<VPRNGStepTest__Syms*>(userp);
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VPRNGStepTest::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VPRNGStepTest__Syms* __restrict vlSymsp = static_cast<VPRNGStepTest__Syms*>(userp);
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+60,"clock", false,-1);
        tracep->declBit(c+61,"reset", false,-1);
        tracep->declBit(c+60,"PRNGStepTest clock", false,-1);
        tracep->declBit(c+61,"PRNGStepTest reset", false,-1);
        tracep->declBit(c+60,"PRNGStepTest a_prng_clock", false,-1);
        tracep->declBit(c+61,"PRNGStepTest a_prng_reset", false,-1);
        tracep->declBit(c+1,"PRNGStepTest a_prng_io_out_0", false,-1);
        tracep->declBit(c+2,"PRNGStepTest a_prng_io_out_1", false,-1);
        tracep->declBit(c+3,"PRNGStepTest a_prng_io_out_2", false,-1);
        tracep->declBit(c+4,"PRNGStepTest a_prng_io_out_3", false,-1);
        tracep->declBit(c+5,"PRNGStepTest a_prng_io_out_4", false,-1);
        tracep->declBit(c+6,"PRNGStepTest a_prng_io_out_5", false,-1);
        tracep->declBit(c+7,"PRNGStepTest a_prng_io_out_6", false,-1);
        tracep->declBit(c+8,"PRNGStepTest a_prng_io_out_7", false,-1);
        tracep->declBit(c+9,"PRNGStepTest a_prng_io_out_8", false,-1);
        tracep->declBit(c+10,"PRNGStepTest a_prng_io_out_9", false,-1);
        tracep->declBit(c+11,"PRNGStepTest a_prng_io_out_10", false,-1);
        tracep->declBit(c+12,"PRNGStepTest a_prng_io_out_11", false,-1);
        tracep->declBit(c+13,"PRNGStepTest a_prng_io_out_12", false,-1);
        tracep->declBit(c+14,"PRNGStepTest a_prng_io_out_13", false,-1);
        tracep->declBit(c+15,"PRNGStepTest a_prng_io_out_14", false,-1);
        tracep->declBit(c+16,"PRNGStepTest a_prng_io_out_15", false,-1);
        tracep->declBit(c+60,"PRNGStepTest b_prng_clock", false,-1);
        tracep->declBit(c+61,"PRNGStepTest b_prng_reset", false,-1);
        tracep->declBit(c+17,"PRNGStepTest b_prng_io_increment", false,-1);
        tracep->declBit(c+18,"PRNGStepTest b_prng_io_out_0", false,-1);
        tracep->declBit(c+19,"PRNGStepTest b_prng_io_out_1", false,-1);
        tracep->declBit(c+20,"PRNGStepTest b_prng_io_out_2", false,-1);
        tracep->declBit(c+21,"PRNGStepTest b_prng_io_out_3", false,-1);
        tracep->declBit(c+22,"PRNGStepTest b_prng_io_out_4", false,-1);
        tracep->declBit(c+23,"PRNGStepTest b_prng_io_out_5", false,-1);
        tracep->declBit(c+24,"PRNGStepTest b_prng_io_out_6", false,-1);
        tracep->declBit(c+25,"PRNGStepTest b_prng_io_out_7", false,-1);
        tracep->declBit(c+26,"PRNGStepTest b_prng_io_out_8", false,-1);
        tracep->declBit(c+27,"PRNGStepTest b_prng_io_out_9", false,-1);
        tracep->declBit(c+28,"PRNGStepTest b_prng_io_out_10", false,-1);
        tracep->declBit(c+29,"PRNGStepTest b_prng_io_out_11", false,-1);
        tracep->declBit(c+30,"PRNGStepTest b_prng_io_out_12", false,-1);
        tracep->declBit(c+31,"PRNGStepTest b_prng_io_out_13", false,-1);
        tracep->declBit(c+32,"PRNGStepTest b_prng_io_out_14", false,-1);
        tracep->declBit(c+33,"PRNGStepTest b_prng_io_out_15", false,-1);
        tracep->declBit(c+60,"PRNGStepTest c_prng_clock", false,-1);
        tracep->declBit(c+61,"PRNGStepTest c_prng_reset", false,-1);
        tracep->declBit(c+34,"PRNGStepTest c_prng_io_increment", false,-1);
        tracep->declBit(c+35,"PRNGStepTest c_prng_io_out_0", false,-1);
        tracep->declBit(c+36,"PRNGStepTest c_prng_io_out_1", false,-1);
        tracep->declBit(c+37,"PRNGStepTest c_prng_io_out_2", false,-1);
        tracep->declBit(c+38,"PRNGStepTest c_prng_io_out_3", false,-1);
        tracep->declBit(c+39,"PRNGStepTest c_prng_io_out_4", false,-1);
        tracep->declBit(c+40,"PRNGStepTest c_prng_io_out_5", false,-1);
        tracep->declBit(c+41,"PRNGStepTest c_prng_io_out_6", false,-1);
        tracep->declBit(c+42,"PRNGStepTest c_prng_io_out_7", false,-1);
        tracep->declBit(c+43,"PRNGStepTest c_prng_io_out_8", false,-1);
        tracep->declBit(c+44,"PRNGStepTest c_prng_io_out_9", false,-1);
        tracep->declBit(c+45,"PRNGStepTest c_prng_io_out_10", false,-1);
        tracep->declBit(c+46,"PRNGStepTest c_prng_io_out_11", false,-1);
        tracep->declBit(c+47,"PRNGStepTest c_prng_io_out_12", false,-1);
        tracep->declBit(c+48,"PRNGStepTest c_prng_io_out_13", false,-1);
        tracep->declBit(c+49,"PRNGStepTest c_prng_io_out_14", false,-1);
        tracep->declBit(c+50,"PRNGStepTest c_prng_io_out_15", false,-1);
        tracep->declBit(c+17,"PRNGStepTest count2", false,-1);
        tracep->declBus(c+51,"PRNGStepTest count4", false,-1, 1,0);
        tracep->declBus(c+52,"PRNGStepTest a_lo", false,-1, 7,0);
        tracep->declBus(c+53,"PRNGStepTest a", false,-1, 15,0);
        tracep->declBus(c+54,"PRNGStepTest b_lo", false,-1, 7,0);
        tracep->declBus(c+55,"PRNGStepTest b", false,-1, 15,0);
        tracep->declBus(c+56,"PRNGStepTest c_lo", false,-1, 7,0);
        tracep->declBus(c+57,"PRNGStepTest c", false,-1, 15,0);
        tracep->declBus(c+58,"PRNGStepTest done_value", false,-1, 3,0);
        tracep->declBit(c+59,"PRNGStepTest done_wrap_wrap", false,-1);
        tracep->declBit(c+60,"PRNGStepTest a_prng clock", false,-1);
        tracep->declBit(c+61,"PRNGStepTest a_prng reset", false,-1);
        tracep->declBit(c+1,"PRNGStepTest a_prng io_out_0", false,-1);
        tracep->declBit(c+2,"PRNGStepTest a_prng io_out_1", false,-1);
        tracep->declBit(c+3,"PRNGStepTest a_prng io_out_2", false,-1);
        tracep->declBit(c+4,"PRNGStepTest a_prng io_out_3", false,-1);
        tracep->declBit(c+5,"PRNGStepTest a_prng io_out_4", false,-1);
        tracep->declBit(c+6,"PRNGStepTest a_prng io_out_5", false,-1);
        tracep->declBit(c+7,"PRNGStepTest a_prng io_out_6", false,-1);
        tracep->declBit(c+8,"PRNGStepTest a_prng io_out_7", false,-1);
        tracep->declBit(c+9,"PRNGStepTest a_prng io_out_8", false,-1);
        tracep->declBit(c+10,"PRNGStepTest a_prng io_out_9", false,-1);
        tracep->declBit(c+11,"PRNGStepTest a_prng io_out_10", false,-1);
        tracep->declBit(c+12,"PRNGStepTest a_prng io_out_11", false,-1);
        tracep->declBit(c+13,"PRNGStepTest a_prng io_out_12", false,-1);
        tracep->declBit(c+14,"PRNGStepTest a_prng io_out_13", false,-1);
        tracep->declBit(c+15,"PRNGStepTest a_prng io_out_14", false,-1);
        tracep->declBit(c+16,"PRNGStepTest a_prng io_out_15", false,-1);
        tracep->declBit(c+1,"PRNGStepTest a_prng state_0", false,-1);
        tracep->declBit(c+2,"PRNGStepTest a_prng state_1", false,-1);
        tracep->declBit(c+3,"PRNGStepTest a_prng state_2", false,-1);
        tracep->declBit(c+4,"PRNGStepTest a_prng state_3", false,-1);
        tracep->declBit(c+5,"PRNGStepTest a_prng state_4", false,-1);
        tracep->declBit(c+6,"PRNGStepTest a_prng state_5", false,-1);
        tracep->declBit(c+7,"PRNGStepTest a_prng state_6", false,-1);
        tracep->declBit(c+8,"PRNGStepTest a_prng state_7", false,-1);
        tracep->declBit(c+9,"PRNGStepTest a_prng state_8", false,-1);
        tracep->declBit(c+10,"PRNGStepTest a_prng state_9", false,-1);
        tracep->declBit(c+11,"PRNGStepTest a_prng state_10", false,-1);
        tracep->declBit(c+12,"PRNGStepTest a_prng state_11", false,-1);
        tracep->declBit(c+13,"PRNGStepTest a_prng state_12", false,-1);
        tracep->declBit(c+14,"PRNGStepTest a_prng state_13", false,-1);
        tracep->declBit(c+15,"PRNGStepTest a_prng state_14", false,-1);
        tracep->declBit(c+16,"PRNGStepTest a_prng state_15", false,-1);
        tracep->declBit(c+60,"PRNGStepTest b_prng clock", false,-1);
        tracep->declBit(c+61,"PRNGStepTest b_prng reset", false,-1);
        tracep->declBit(c+17,"PRNGStepTest b_prng io_increment", false,-1);
        tracep->declBit(c+18,"PRNGStepTest b_prng io_out_0", false,-1);
        tracep->declBit(c+19,"PRNGStepTest b_prng io_out_1", false,-1);
        tracep->declBit(c+20,"PRNGStepTest b_prng io_out_2", false,-1);
        tracep->declBit(c+21,"PRNGStepTest b_prng io_out_3", false,-1);
        tracep->declBit(c+22,"PRNGStepTest b_prng io_out_4", false,-1);
        tracep->declBit(c+23,"PRNGStepTest b_prng io_out_5", false,-1);
        tracep->declBit(c+24,"PRNGStepTest b_prng io_out_6", false,-1);
        tracep->declBit(c+25,"PRNGStepTest b_prng io_out_7", false,-1);
        tracep->declBit(c+26,"PRNGStepTest b_prng io_out_8", false,-1);
        tracep->declBit(c+27,"PRNGStepTest b_prng io_out_9", false,-1);
        tracep->declBit(c+28,"PRNGStepTest b_prng io_out_10", false,-1);
        tracep->declBit(c+29,"PRNGStepTest b_prng io_out_11", false,-1);
        tracep->declBit(c+30,"PRNGStepTest b_prng io_out_12", false,-1);
        tracep->declBit(c+31,"PRNGStepTest b_prng io_out_13", false,-1);
        tracep->declBit(c+32,"PRNGStepTest b_prng io_out_14", false,-1);
        tracep->declBit(c+33,"PRNGStepTest b_prng io_out_15", false,-1);
        tracep->declBit(c+18,"PRNGStepTest b_prng state_0", false,-1);
        tracep->declBit(c+19,"PRNGStepTest b_prng state_1", false,-1);
        tracep->declBit(c+20,"PRNGStepTest b_prng state_2", false,-1);
        tracep->declBit(c+21,"PRNGStepTest b_prng state_3", false,-1);
        tracep->declBit(c+22,"PRNGStepTest b_prng state_4", false,-1);
        tracep->declBit(c+23,"PRNGStepTest b_prng state_5", false,-1);
        tracep->declBit(c+24,"PRNGStepTest b_prng state_6", false,-1);
        tracep->declBit(c+25,"PRNGStepTest b_prng state_7", false,-1);
        tracep->declBit(c+26,"PRNGStepTest b_prng state_8", false,-1);
        tracep->declBit(c+27,"PRNGStepTest b_prng state_9", false,-1);
        tracep->declBit(c+28,"PRNGStepTest b_prng state_10", false,-1);
        tracep->declBit(c+29,"PRNGStepTest b_prng state_11", false,-1);
        tracep->declBit(c+30,"PRNGStepTest b_prng state_12", false,-1);
        tracep->declBit(c+31,"PRNGStepTest b_prng state_13", false,-1);
        tracep->declBit(c+32,"PRNGStepTest b_prng state_14", false,-1);
        tracep->declBit(c+33,"PRNGStepTest b_prng state_15", false,-1);
        tracep->declBit(c+60,"PRNGStepTest c_prng clock", false,-1);
        tracep->declBit(c+61,"PRNGStepTest c_prng reset", false,-1);
        tracep->declBit(c+34,"PRNGStepTest c_prng io_increment", false,-1);
        tracep->declBit(c+35,"PRNGStepTest c_prng io_out_0", false,-1);
        tracep->declBit(c+36,"PRNGStepTest c_prng io_out_1", false,-1);
        tracep->declBit(c+37,"PRNGStepTest c_prng io_out_2", false,-1);
        tracep->declBit(c+38,"PRNGStepTest c_prng io_out_3", false,-1);
        tracep->declBit(c+39,"PRNGStepTest c_prng io_out_4", false,-1);
        tracep->declBit(c+40,"PRNGStepTest c_prng io_out_5", false,-1);
        tracep->declBit(c+41,"PRNGStepTest c_prng io_out_6", false,-1);
        tracep->declBit(c+42,"PRNGStepTest c_prng io_out_7", false,-1);
        tracep->declBit(c+43,"PRNGStepTest c_prng io_out_8", false,-1);
        tracep->declBit(c+44,"PRNGStepTest c_prng io_out_9", false,-1);
        tracep->declBit(c+45,"PRNGStepTest c_prng io_out_10", false,-1);
        tracep->declBit(c+46,"PRNGStepTest c_prng io_out_11", false,-1);
        tracep->declBit(c+47,"PRNGStepTest c_prng io_out_12", false,-1);
        tracep->declBit(c+48,"PRNGStepTest c_prng io_out_13", false,-1);
        tracep->declBit(c+49,"PRNGStepTest c_prng io_out_14", false,-1);
        tracep->declBit(c+50,"PRNGStepTest c_prng io_out_15", false,-1);
        tracep->declBit(c+35,"PRNGStepTest c_prng state_0", false,-1);
        tracep->declBit(c+36,"PRNGStepTest c_prng state_1", false,-1);
        tracep->declBit(c+37,"PRNGStepTest c_prng state_2", false,-1);
        tracep->declBit(c+38,"PRNGStepTest c_prng state_3", false,-1);
        tracep->declBit(c+39,"PRNGStepTest c_prng state_4", false,-1);
        tracep->declBit(c+40,"PRNGStepTest c_prng state_5", false,-1);
        tracep->declBit(c+41,"PRNGStepTest c_prng state_6", false,-1);
        tracep->declBit(c+42,"PRNGStepTest c_prng state_7", false,-1);
        tracep->declBit(c+43,"PRNGStepTest c_prng state_8", false,-1);
        tracep->declBit(c+44,"PRNGStepTest c_prng state_9", false,-1);
        tracep->declBit(c+45,"PRNGStepTest c_prng state_10", false,-1);
        tracep->declBit(c+46,"PRNGStepTest c_prng state_11", false,-1);
        tracep->declBit(c+47,"PRNGStepTest c_prng state_12", false,-1);
        tracep->declBit(c+48,"PRNGStepTest c_prng state_13", false,-1);
        tracep->declBit(c+49,"PRNGStepTest c_prng state_14", false,-1);
        tracep->declBit(c+50,"PRNGStepTest c_prng state_15", false,-1);
    }
}

void VPRNGStepTest::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VPRNGStepTest::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VPRNGStepTest__Syms* __restrict vlSymsp = static_cast<VPRNGStepTest__Syms*>(userp);
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VPRNGStepTest::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VPRNGStepTest__Syms* __restrict vlSymsp = static_cast<VPRNGStepTest__Syms*>(userp);
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0));
        tracep->fullBit(oldp+2,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1));
        tracep->fullBit(oldp+3,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2));
        tracep->fullBit(oldp+4,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3));
        tracep->fullBit(oldp+5,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4));
        tracep->fullBit(oldp+6,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5));
        tracep->fullBit(oldp+7,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6));
        tracep->fullBit(oldp+8,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7));
        tracep->fullBit(oldp+9,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8));
        tracep->fullBit(oldp+10,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9));
        tracep->fullBit(oldp+11,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10));
        tracep->fullBit(oldp+12,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11));
        tracep->fullBit(oldp+13,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12));
        tracep->fullBit(oldp+14,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13));
        tracep->fullBit(oldp+15,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14));
        tracep->fullBit(oldp+16,(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15));
        tracep->fullBit(oldp+17,(vlTOPp->PRNGStepTest__DOT__count2));
        tracep->fullBit(oldp+18,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0));
        tracep->fullBit(oldp+19,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1));
        tracep->fullBit(oldp+20,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2));
        tracep->fullBit(oldp+21,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3));
        tracep->fullBit(oldp+22,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4));
        tracep->fullBit(oldp+23,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5));
        tracep->fullBit(oldp+24,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6));
        tracep->fullBit(oldp+25,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7));
        tracep->fullBit(oldp+26,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8));
        tracep->fullBit(oldp+27,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9));
        tracep->fullBit(oldp+28,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10));
        tracep->fullBit(oldp+29,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11));
        tracep->fullBit(oldp+30,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12));
        tracep->fullBit(oldp+31,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13));
        tracep->fullBit(oldp+32,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14));
        tracep->fullBit(oldp+33,(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15));
        tracep->fullBit(oldp+34,((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))));
        tracep->fullBit(oldp+35,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0));
        tracep->fullBit(oldp+36,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1));
        tracep->fullBit(oldp+37,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2));
        tracep->fullBit(oldp+38,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3));
        tracep->fullBit(oldp+39,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4));
        tracep->fullBit(oldp+40,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5));
        tracep->fullBit(oldp+41,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6));
        tracep->fullBit(oldp+42,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7));
        tracep->fullBit(oldp+43,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_8));
        tracep->fullBit(oldp+44,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_9));
        tracep->fullBit(oldp+45,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_10));
        tracep->fullBit(oldp+46,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_11));
        tracep->fullBit(oldp+47,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12));
        tracep->fullBit(oldp+48,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13));
        tracep->fullBit(oldp+49,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14));
        tracep->fullBit(oldp+50,(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15));
        tracep->fullCData(oldp+51,(vlTOPp->PRNGStepTest__DOT__count4),2);
        tracep->fullCData(oldp+52,((((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7) 
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
        tracep->fullSData(oldp+53,((((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                                     << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                                  << 0xeU) 
                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13) 
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
        tracep->fullCData(oldp+54,((((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7) 
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
        tracep->fullSData(oldp+55,((((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                                     << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                                  << 0xeU) 
                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13) 
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
        tracep->fullCData(oldp+56,((((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7) 
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
        tracep->fullSData(oldp+57,((((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15) 
                                     << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14) 
                                                  << 0xeU) 
                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13) 
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
        tracep->fullCData(oldp+58,(vlTOPp->PRNGStepTest__DOT__done_value),4);
        tracep->fullBit(oldp+59,((0xfU == (IData)(vlTOPp->PRNGStepTest__DOT__done_value))));
        tracep->fullBit(oldp+60,(vlTOPp->clock));
        tracep->fullBit(oldp+61,(vlTOPp->reset));
    }
}
