// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBundleLiteralSpec_Anon__Syms.h"


//======================

void VBundleLiteralSpec_Anon::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VBundleLiteralSpec_Anon::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBundleLiteralSpec_Anon__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VBundleLiteralSpec_Anon::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VBundleLiteralSpec_Anon::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBundleLiteralSpec_Anon__Syms*>(userp);
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VBundleLiteralSpec_Anon::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBundleLiteralSpec_Anon__Syms*>(userp);
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"clock", false,-1);
        tracep->declBit(c+5,"reset", false,-1);
        tracep->declBit(c+4,"BundleLiteralSpec_Anon clock", false,-1);
        tracep->declBit(c+5,"BundleLiteralSpec_Anon reset", false,-1);
        tracep->declBus(c+1,"BundleLiteralSpec_Anon r_a", false,-1, 7,0);
        tracep->declBit(c+2,"BundleLiteralSpec_Anon r_b", false,-1);
        tracep->declBit(c+3,"BundleLiteralSpec_Anon r_c", false,-1);
    }
}

void VBundleLiteralSpec_Anon::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VBundleLiteralSpec_Anon::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBundleLiteralSpec_Anon__Syms*>(userp);
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VBundleLiteralSpec_Anon::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = static_cast<VBundleLiteralSpec_Anon__Syms*>(userp);
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->BundleLiteralSpec_Anon__DOT__r_a),8);
        tracep->fullBit(oldp+2,(vlTOPp->BundleLiteralSpec_Anon__DOT__r_b));
        tracep->fullBit(oldp+3,(vlTOPp->BundleLiteralSpec_Anon__DOT__r_c));
        tracep->fullBit(oldp+4,(vlTOPp->clock));
        tracep->fullBit(oldp+5,(vlTOPp->reset));
    }
}
