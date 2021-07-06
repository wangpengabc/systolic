// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VExtModuleTester__Syms.h"


//======================

void VExtModuleTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VExtModuleTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VExtModuleTester__Syms* __restrict vlSymsp = static_cast<VExtModuleTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VExtModuleTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VExtModuleTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VExtModuleTester__Syms* __restrict vlSymsp = static_cast<VExtModuleTester__Syms*>(userp);
    VExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VExtModuleTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VExtModuleTester__Syms* __restrict vlSymsp = static_cast<VExtModuleTester__Syms*>(userp);
    VExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"ExtModuleTester clock", false,-1);
        tracep->declBit(c+2,"ExtModuleTester reset", false,-1);
        tracep->declBit(c+3,"ExtModuleTester blackBoxPos_in", false,-1);
        tracep->declBit(c+4,"ExtModuleTester blackBoxPos_out", false,-1);
        tracep->declBit(c+5,"ExtModuleTester blackBoxNeg_in", false,-1);
        tracep->declBit(c+6,"ExtModuleTester blackBoxNeg_out", false,-1);
        tracep->declBus(c+3,"ExtModuleTester blackBoxPos in", false,-1, 0,0);
        tracep->declBus(c+4,"ExtModuleTester blackBoxPos out", false,-1, 0,0);
        tracep->declBus(c+5,"ExtModuleTester blackBoxNeg in", false,-1, 0,0);
        tracep->declBus(c+6,"ExtModuleTester blackBoxNeg out", false,-1, 0,0);
    }
}

void VExtModuleTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VExtModuleTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VExtModuleTester__Syms* __restrict vlSymsp = static_cast<VExtModuleTester__Syms*>(userp);
    VExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VExtModuleTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VExtModuleTester__Syms* __restrict vlSymsp = static_cast<VExtModuleTester__Syms*>(userp);
    VExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(1U));
        tracep->fullBit(oldp+4,(0U));
        tracep->fullBit(oldp+5,(0U));
        tracep->fullBit(oldp+6,(1U));
    }
}
