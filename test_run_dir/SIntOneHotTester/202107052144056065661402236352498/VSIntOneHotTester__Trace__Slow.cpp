// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSIntOneHotTester__Syms.h"


//======================

void VSIntOneHotTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSIntOneHotTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSIntOneHotTester__Syms* __restrict vlSymsp = static_cast<VSIntOneHotTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSIntOneHotTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSIntOneHotTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSIntOneHotTester__Syms* __restrict vlSymsp = static_cast<VSIntOneHotTester__Syms*>(userp);
    VSIntOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSIntOneHotTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSIntOneHotTester__Syms* __restrict vlSymsp = static_cast<VSIntOneHotTester__Syms*>(userp);
    VSIntOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"SIntOneHotTester clock", false,-1);
        tracep->declBit(c+2,"SIntOneHotTester reset", false,-1);
    }
}

void VSIntOneHotTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSIntOneHotTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSIntOneHotTester__Syms* __restrict vlSymsp = static_cast<VSIntOneHotTester__Syms*>(userp);
    VSIntOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSIntOneHotTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSIntOneHotTester__Syms* __restrict vlSymsp = static_cast<VSIntOneHotTester__Syms*>(userp);
    VSIntOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
    }
}
