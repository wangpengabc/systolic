// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntervalSpec_Anon__Syms.h"


//======================

void VIntervalSpec_Anon::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VIntervalSpec_Anon::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalSpec_Anon__Syms* __restrict vlSymsp = static_cast<VIntervalSpec_Anon__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VIntervalSpec_Anon::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VIntervalSpec_Anon::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VIntervalSpec_Anon__Syms* __restrict vlSymsp = static_cast<VIntervalSpec_Anon__Syms*>(userp);
    VIntervalSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VIntervalSpec_Anon::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VIntervalSpec_Anon__Syms* __restrict vlSymsp = static_cast<VIntervalSpec_Anon__Syms*>(userp);
    VIntervalSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"IntervalSpec_Anon clock", false,-1);
        tracep->declBit(c+2,"IntervalSpec_Anon reset", false,-1);
    }
}

void VIntervalSpec_Anon::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VIntervalSpec_Anon::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VIntervalSpec_Anon__Syms* __restrict vlSymsp = static_cast<VIntervalSpec_Anon__Syms*>(userp);
    VIntervalSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VIntervalSpec_Anon::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VIntervalSpec_Anon__Syms* __restrict vlSymsp = static_cast<VIntervalSpec_Anon__Syms*>(userp);
    VIntervalSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
    }
}
