// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFailingAssertTester__Syms.h"


//======================

void VFailingAssertTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VFailingAssertTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFailingAssertTester__Syms* __restrict vlSymsp = static_cast<VFailingAssertTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFailingAssertTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VFailingAssertTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VFailingAssertTester__Syms* __restrict vlSymsp = static_cast<VFailingAssertTester__Syms*>(userp);
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VFailingAssertTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VFailingAssertTester__Syms* __restrict vlSymsp = static_cast<VFailingAssertTester__Syms*>(userp);
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"FailingAssertTester clock", false,-1);
        tracep->declBit(c+2,"FailingAssertTester reset", false,-1);
        tracep->declBus(c+3,"FailingAssertTester done_value", false,-1, 1,0);
        tracep->declBit(c+4,"FailingAssertTester done_wrap_wrap", false,-1);
        tracep->declBit(c+5,"FailingAssertTester done", false,-1);
    }
}

void VFailingAssertTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VFailingAssertTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VFailingAssertTester__Syms* __restrict vlSymsp = static_cast<VFailingAssertTester__Syms*>(userp);
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VFailingAssertTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VFailingAssertTester__Syms* __restrict vlSymsp = static_cast<VFailingAssertTester__Syms*>(userp);
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->FailingAssertTester__DOT__done_value),2);
        tracep->fullBit(oldp+4,((3U == (IData)(vlTOPp->FailingAssertTester__DOT__done_value))));
        tracep->fullBit(oldp+5,(((~ (IData)(vlTOPp->reset)) 
                                 & (3U == (IData)(vlTOPp->FailingAssertTester__DOT__done_value)))));
    }
}
