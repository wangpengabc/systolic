// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSqueezeFunctionalityTester__Syms.h"


//======================

void VSqueezeFunctionalityTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSqueezeFunctionalityTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = static_cast<VSqueezeFunctionalityTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSqueezeFunctionalityTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSqueezeFunctionalityTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = static_cast<VSqueezeFunctionalityTester__Syms*>(userp);
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSqueezeFunctionalityTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = static_cast<VSqueezeFunctionalityTester__Syms*>(userp);
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"SqueezeFunctionalityTester clock", false,-1);
        tracep->declBit(c+2,"SqueezeFunctionalityTester reset", false,-1);
        tracep->declBus(c+3,"SqueezeFunctionalityTester counter", false,-1, 9,0);
        tracep->declBus(c+4,"SqueezeFunctionalityTester toSqueeze", false,-1, 3,0);
        tracep->declBus(c+4,"SqueezeFunctionalityTester squeezeTemplate", false,-1, 3,0);
    }
}

void VSqueezeFunctionalityTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSqueezeFunctionalityTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = static_cast<VSqueezeFunctionalityTester__Syms*>(userp);
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSqueezeFunctionalityTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = static_cast<VSqueezeFunctionalityTester__Syms*>(userp);
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullSData(oldp+3,(vlTOPp->SqueezeFunctionalityTester__DOT__counter),10);
        tracep->fullCData(oldp+4,((0xfU & ((0x1fU & 
                                            VL_EXTENDS_II(5,4, 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SqueezeFunctionalityTester__DOT__counter)))) 
                                           - (IData)(6U)))),4);
    }
}
