// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntervalTester2__Syms.h"


//======================

void VIntervalTester2::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VIntervalTester2::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalTester2__Syms* __restrict vlSymsp = static_cast<VIntervalTester2__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VIntervalTester2::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VIntervalTester2::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VIntervalTester2__Syms* __restrict vlSymsp = static_cast<VIntervalTester2__Syms*>(userp);
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VIntervalTester2::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VIntervalTester2__Syms* __restrict vlSymsp = static_cast<VIntervalTester2__Syms*>(userp);
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"IntervalTester2 clock", false,-1);
        tracep->declBit(c+2,"IntervalTester2 reset", false,-1);
        tracep->declBus(c+3,"IntervalTester2 cycle", false,-1, 3,0);
        tracep->declBit(c+4,"IntervalTester2 wrap_wrap", false,-1);
    }
}

void VIntervalTester2::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VIntervalTester2::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VIntervalTester2__Syms* __restrict vlSymsp = static_cast<VIntervalTester2__Syms*>(userp);
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VIntervalTester2::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VIntervalTester2__Syms* __restrict vlSymsp = static_cast<VIntervalTester2__Syms*>(userp);
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->IntervalTester2__DOT__cycle),4);
        tracep->fullBit(oldp+4,((0xaU == (IData)(vlTOPp->IntervalTester2__DOT__cycle))));
    }
}
