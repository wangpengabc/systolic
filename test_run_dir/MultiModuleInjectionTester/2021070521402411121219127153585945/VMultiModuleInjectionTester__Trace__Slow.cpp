// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiModuleInjectionTester__Syms.h"


//======================

void VMultiModuleInjectionTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VMultiModuleInjectionTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiModuleInjectionTester__Syms* __restrict vlSymsp = static_cast<VMultiModuleInjectionTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VMultiModuleInjectionTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VMultiModuleInjectionTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VMultiModuleInjectionTester__Syms* __restrict vlSymsp = static_cast<VMultiModuleInjectionTester__Syms*>(userp);
    VMultiModuleInjectionTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VMultiModuleInjectionTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VMultiModuleInjectionTester__Syms* __restrict vlSymsp = static_cast<VMultiModuleInjectionTester__Syms*>(userp);
    VMultiModuleInjectionTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"MultiModuleInjectionTester clock", false,-1);
        tracep->declBit(c+2,"MultiModuleInjectionTester reset", false,-1);
        tracep->declBit(c+1,"MultiModuleInjectionTester subA0_clock", false,-1);
        tracep->declBit(c+2,"MultiModuleInjectionTester subA0_reset", false,-1);
        tracep->declBit(c+1,"MultiModuleInjectionTester subA1_clock", false,-1);
        tracep->declBit(c+2,"MultiModuleInjectionTester subA1_reset", false,-1);
        tracep->declBit(c+1,"MultiModuleInjectionTester subA0 clock", false,-1);
        tracep->declBit(c+2,"MultiModuleInjectionTester subA0 reset", false,-1);
        tracep->declBit(c+2,"MultiModuleInjectionTester subA0 wire_", false,-1);
        tracep->declBit(c+1,"MultiModuleInjectionTester subA1 clock", false,-1);
        tracep->declBit(c+2,"MultiModuleInjectionTester subA1 reset", false,-1);
        tracep->declBit(c+2,"MultiModuleInjectionTester subA1 wire_", false,-1);
    }
}

void VMultiModuleInjectionTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VMultiModuleInjectionTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VMultiModuleInjectionTester__Syms* __restrict vlSymsp = static_cast<VMultiModuleInjectionTester__Syms*>(userp);
    VMultiModuleInjectionTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VMultiModuleInjectionTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VMultiModuleInjectionTester__Syms* __restrict vlSymsp = static_cast<VMultiModuleInjectionTester__Syms*>(userp);
    VMultiModuleInjectionTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
    }
}
