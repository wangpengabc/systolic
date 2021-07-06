// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFoo__Syms.h"


//======================

void VFoo::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VFoo::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFoo__Syms* __restrict vlSymsp = static_cast<VFoo__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFoo::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VFoo::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VFoo__Syms* __restrict vlSymsp = static_cast<VFoo__Syms*>(userp);
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VFoo::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VFoo__Syms* __restrict vlSymsp = static_cast<VFoo__Syms*>(userp);
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"Foo clock", false,-1);
        tracep->declBit(c+2,"Foo reset", false,-1);
        tracep->declBus(c+3,"Foo done_value", false,-1, 1,0);
        tracep->declBit(c+4,"Foo done_wrap_wrap", false,-1);
    }
}

void VFoo::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VFoo::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VFoo__Syms* __restrict vlSymsp = static_cast<VFoo__Syms*>(userp);
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VFoo::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VFoo__Syms* __restrict vlSymsp = static_cast<VFoo__Syms*>(userp);
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->Foo__DOT__done_value),2);
        tracep->fullBit(oldp+4,((3U == (IData)(vlTOPp->Foo__DOT__done_value))));
    }
}
