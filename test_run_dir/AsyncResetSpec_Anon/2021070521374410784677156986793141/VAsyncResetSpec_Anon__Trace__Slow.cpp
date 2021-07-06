// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetSpec_Anon__Syms.h"


//======================

void VAsyncResetSpec_Anon::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VAsyncResetSpec_Anon::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = static_cast<VAsyncResetSpec_Anon__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAsyncResetSpec_Anon::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VAsyncResetSpec_Anon::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = static_cast<VAsyncResetSpec_Anon__Syms*>(userp);
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VAsyncResetSpec_Anon::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = static_cast<VAsyncResetSpec_Anon__Syms*>(userp);
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"AsyncResetSpec_Anon clock", false,-1);
        tracep->declBit(c+2,"AsyncResetSpec_Anon reset", false,-1);
        tracep->declBus(c+3,"AsyncResetSpec_Anon reg_", false,-1, 6,0);
        tracep->declBus(c+4,"AsyncResetSpec_Anon count", false,-1, 1,0);
        tracep->declBit(c+5,"AsyncResetSpec_Anon wrap_wrap", false,-1);
    }
}

void VAsyncResetSpec_Anon::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAsyncResetSpec_Anon::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = static_cast<VAsyncResetSpec_Anon__Syms*>(userp);
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VAsyncResetSpec_Anon::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = static_cast<VAsyncResetSpec_Anon__Syms*>(userp);
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->AsyncResetSpec_Anon__DOT__reg_),7);
        tracep->fullCData(oldp+4,(vlTOPp->AsyncResetSpec_Anon__DOT__count),2);
        tracep->fullBit(oldp+5,((3U == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count))));
    }
}
