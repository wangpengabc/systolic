// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelinedResetTester__Syms.h"


//======================

void VPipelinedResetTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VPipelinedResetTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPipelinedResetTester__Syms* __restrict vlSymsp = static_cast<VPipelinedResetTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VPipelinedResetTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VPipelinedResetTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VPipelinedResetTester__Syms* __restrict vlSymsp = static_cast<VPipelinedResetTester__Syms*>(userp);
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VPipelinedResetTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VPipelinedResetTester__Syms* __restrict vlSymsp = static_cast<VPipelinedResetTester__Syms*>(userp);
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"PipelinedResetTester clock", false,-1);
        tracep->declBit(c+2,"PipelinedResetTester reset", false,-1);
        tracep->declBus(c+3,"PipelinedResetTester done_value", false,-1, 1,0);
        tracep->declBit(c+4,"PipelinedResetTester done_wrap_wrap", false,-1);
        tracep->declBit(c+5,"PipelinedResetTester done", false,-1);
    }
}

void VPipelinedResetTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VPipelinedResetTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VPipelinedResetTester__Syms* __restrict vlSymsp = static_cast<VPipelinedResetTester__Syms*>(userp);
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VPipelinedResetTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VPipelinedResetTester__Syms* __restrict vlSymsp = static_cast<VPipelinedResetTester__Syms*>(userp);
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->PipelinedResetTester__DOT__done_value),2);
        tracep->fullBit(oldp+4,((3U == (IData)(vlTOPp->PipelinedResetTester__DOT__done_value))));
        tracep->fullBit(oldp+5,(((~ (IData)(vlTOPp->reset)) 
                                 & (3U == (IData)(vlTOPp->PipelinedResetTester__DOT__done_value)))));
    }
}
