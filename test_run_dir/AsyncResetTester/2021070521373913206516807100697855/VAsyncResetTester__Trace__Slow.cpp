// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetTester__Syms.h"


//======================

void VAsyncResetTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VAsyncResetTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsyncResetTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAsyncResetTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VAsyncResetTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VAsyncResetTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetTester__Syms*>(userp);
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VAsyncResetTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetTester__Syms*>(userp);
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"clock", false,-1);
        tracep->declBit(c+5,"reset", false,-1);
        tracep->declBit(c+4,"AsyncResetTester clock", false,-1);
        tracep->declBit(c+5,"AsyncResetTester reset", false,-1);
        tracep->declBus(c+6,"AsyncResetTester cDiv_value", false,-1, 1,0);
        tracep->declBit(c+7,"AsyncResetTester slowClk", false,-1);
        tracep->declBus(c+1,"AsyncResetTester count", false,-1, 3,0);
        tracep->declBit(c+2,"AsyncResetTester wrap_wrap", false,-1);
        tracep->declBit(c+3,"AsyncResetTester asyncResetNext", false,-1);
        tracep->declBus(c+8,"AsyncResetTester reg_", false,-1, 7,0);
    }
}

void VAsyncResetTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAsyncResetTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetTester__Syms*>(userp);
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VAsyncResetTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetTester__Syms*>(userp);
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->AsyncResetTester__DOT__count),4);
        tracep->fullBit(oldp+2,((0xfU == (IData)(vlTOPp->AsyncResetTester__DOT__count))));
        tracep->fullBit(oldp+3,(vlTOPp->AsyncResetTester__DOT__asyncResetNext));
        tracep->fullBit(oldp+4,(vlTOPp->clock));
        tracep->fullBit(oldp+5,(vlTOPp->reset));
        tracep->fullCData(oldp+6,(vlTOPp->AsyncResetTester__DOT__cDiv_value),2);
        tracep->fullBit(oldp+7,(vlTOPp->AsyncResetTester__DOT__slowClk));
        tracep->fullCData(oldp+8,(vlTOPp->AsyncResetTester__DOT__reg_),8);
    }
}
