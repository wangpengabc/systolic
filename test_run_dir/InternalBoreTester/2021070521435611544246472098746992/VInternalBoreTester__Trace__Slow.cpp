// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInternalBoreTester__Syms.h"


//======================

void VInternalBoreTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VInternalBoreTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VInternalBoreTester__Syms* __restrict vlSymsp = static_cast<VInternalBoreTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VInternalBoreTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VInternalBoreTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VInternalBoreTester__Syms* __restrict vlSymsp = static_cast<VInternalBoreTester__Syms*>(userp);
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VInternalBoreTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VInternalBoreTester__Syms* __restrict vlSymsp = static_cast<VInternalBoreTester__Syms*>(userp);
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"InternalBoreTester clock", false,-1);
        tracep->declBit(c+2,"InternalBoreTester reset", false,-1);
        tracep->declBit(c+4,"InternalBoreTester dut_in", false,-1);
        tracep->declBit(c+4,"InternalBoreTester dut_out", false,-1);
        tracep->declBit(c+3,"InternalBoreTester done_value", false,-1);
        tracep->declBit(c+4,"InternalBoreTester dut in", false,-1);
        tracep->declBit(c+4,"InternalBoreTester dut out", false,-1);
    }
}

void VInternalBoreTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VInternalBoreTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VInternalBoreTester__Syms* __restrict vlSymsp = static_cast<VInternalBoreTester__Syms*>(userp);
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VInternalBoreTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VInternalBoreTester__Syms* __restrict vlSymsp = static_cast<VInternalBoreTester__Syms*>(userp);
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->InternalBoreTester__DOT__done_value));
        tracep->fullBit(oldp+4,(1U));
    }
}
