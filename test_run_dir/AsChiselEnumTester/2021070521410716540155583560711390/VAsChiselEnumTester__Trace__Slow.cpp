// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsChiselEnumTester__Syms.h"


//======================

void VAsChiselEnumTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VAsChiselEnumTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsChiselEnumTester__Syms* __restrict vlSymsp = static_cast<VAsChiselEnumTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAsChiselEnumTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VAsChiselEnumTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VAsChiselEnumTester__Syms* __restrict vlSymsp = static_cast<VAsChiselEnumTester__Syms*>(userp);
    VAsChiselEnumTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VAsChiselEnumTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VAsChiselEnumTester__Syms* __restrict vlSymsp = static_cast<VAsChiselEnumTester__Syms*>(userp);
    VAsChiselEnumTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"AsChiselEnumTester clock", false,-1);
        tracep->declBit(c+2,"AsChiselEnumTester reset", false,-1);
    }
}

void VAsChiselEnumTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAsChiselEnumTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VAsChiselEnumTester__Syms* __restrict vlSymsp = static_cast<VAsChiselEnumTester__Syms*>(userp);
    VAsChiselEnumTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VAsChiselEnumTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VAsChiselEnumTester__Syms* __restrict vlSymsp = static_cast<VAsChiselEnumTester__Syms*>(userp);
    VAsChiselEnumTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
    }
}
