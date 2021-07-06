// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUIntToOHTester__Syms.h"


//======================

void VUIntToOHTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VUIntToOHTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VUIntToOHTester__Syms* __restrict vlSymsp = static_cast<VUIntToOHTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VUIntToOHTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VUIntToOHTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VUIntToOHTester__Syms* __restrict vlSymsp = static_cast<VUIntToOHTester__Syms*>(userp);
    VUIntToOHTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VUIntToOHTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VUIntToOHTester__Syms* __restrict vlSymsp = static_cast<VUIntToOHTester__Syms*>(userp);
    VUIntToOHTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"UIntToOHTester clock", false,-1);
        tracep->declBit(c+2,"UIntToOHTester reset", false,-1);
    }
}

void VUIntToOHTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VUIntToOHTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VUIntToOHTester__Syms* __restrict vlSymsp = static_cast<VUIntToOHTester__Syms*>(userp);
    VUIntToOHTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VUIntToOHTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VUIntToOHTester__Syms* __restrict vlSymsp = static_cast<VUIntToOHTester__Syms*>(userp);
    VUIntToOHTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
    }
}
