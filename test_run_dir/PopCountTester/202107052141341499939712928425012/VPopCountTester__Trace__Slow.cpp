// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPopCountTester__Syms.h"


//======================

void VPopCountTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VPopCountTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPopCountTester__Syms* __restrict vlSymsp = static_cast<VPopCountTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VPopCountTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VPopCountTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VPopCountTester__Syms* __restrict vlSymsp = static_cast<VPopCountTester__Syms*>(userp);
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VPopCountTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VPopCountTester__Syms* __restrict vlSymsp = static_cast<VPopCountTester__Syms*>(userp);
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clock", false,-1);
        tracep->declBit(c+6,"reset", false,-1);
        tracep->declBit(c+5,"PopCountTester clock", false,-1);
        tracep->declBit(c+6,"PopCountTester reset", false,-1);
        tracep->declBus(c+1,"PopCountTester x", false,-1, 2,0);
        tracep->declBit(c+2,"PopCountTester REG", false,-1);
        tracep->declBus(c+3,"PopCountTester result", false,-1, 1,0);
        tracep->declBus(c+4,"PopCountTester expected", false,-1, 3,0);
    }
}

void VPopCountTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VPopCountTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VPopCountTester__Syms* __restrict vlSymsp = static_cast<VPopCountTester__Syms*>(userp);
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VPopCountTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VPopCountTester__Syms* __restrict vlSymsp = static_cast<VPopCountTester__Syms*>(userp);
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->PopCountTester__DOT__x),3);
        tracep->fullBit(oldp+2,(vlTOPp->PopCountTester__DOT__REG));
        tracep->fullCData(oldp+3,((3U & ((1U & (IData)(vlTOPp->PopCountTester__DOT__x)) 
                                         + ((1U & ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                   >> 1U)) 
                                            + (1U & 
                                               ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                >> 2U)))))),2);
        tracep->fullCData(oldp+4,((0xfU & ((7U & ((1U 
                                                   & (IData)(vlTOPp->PopCountTester__DOT__x)) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                      >> 1U)))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                               >> 2U))))),4);
        tracep->fullBit(oldp+5,(vlTOPp->clock));
        tracep->fullBit(oldp+6,(vlTOPp->reset));
    }
}