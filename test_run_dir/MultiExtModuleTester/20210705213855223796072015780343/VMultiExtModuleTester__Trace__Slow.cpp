// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiExtModuleTester__Syms.h"


//======================

void VMultiExtModuleTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VMultiExtModuleTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiExtModuleTester__Syms* __restrict vlSymsp = static_cast<VMultiExtModuleTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VMultiExtModuleTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VMultiExtModuleTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VMultiExtModuleTester__Syms* __restrict vlSymsp = static_cast<VMultiExtModuleTester__Syms*>(userp);
    VMultiExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VMultiExtModuleTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VMultiExtModuleTester__Syms* __restrict vlSymsp = static_cast<VMultiExtModuleTester__Syms*>(userp);
    VMultiExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"MultiExtModuleTester clock", false,-1);
        tracep->declBit(c+2,"MultiExtModuleTester reset", false,-1);
        tracep->declBit(c+3,"MultiExtModuleTester blackBoxInvPos_in", false,-1);
        tracep->declBit(c+4,"MultiExtModuleTester blackBoxInvPos_out", false,-1);
        tracep->declBit(c+5,"MultiExtModuleTester blackBoxInvNeg_in", false,-1);
        tracep->declBit(c+6,"MultiExtModuleTester blackBoxInvNeg_out", false,-1);
        tracep->declBit(c+3,"MultiExtModuleTester blackBoxPassPos_in", false,-1);
        tracep->declBit(c+3,"MultiExtModuleTester blackBoxPassPos_out", false,-1);
        tracep->declBit(c+5,"MultiExtModuleTester blackBoxPassNeg_in", false,-1);
        tracep->declBit(c+5,"MultiExtModuleTester blackBoxPassNeg_out", false,-1);
        tracep->declBus(c+3,"MultiExtModuleTester blackBoxInvPos in", false,-1, 0,0);
        tracep->declBus(c+4,"MultiExtModuleTester blackBoxInvPos out", false,-1, 0,0);
        tracep->declBus(c+5,"MultiExtModuleTester blackBoxInvNeg in", false,-1, 0,0);
        tracep->declBus(c+6,"MultiExtModuleTester blackBoxInvNeg out", false,-1, 0,0);
        tracep->declBus(c+3,"MultiExtModuleTester blackBoxPassPos in", false,-1, 0,0);
        tracep->declBus(c+3,"MultiExtModuleTester blackBoxPassPos out", false,-1, 0,0);
        tracep->declBus(c+5,"MultiExtModuleTester blackBoxPassNeg in", false,-1, 0,0);
        tracep->declBus(c+5,"MultiExtModuleTester blackBoxPassNeg out", false,-1, 0,0);
    }
}

void VMultiExtModuleTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VMultiExtModuleTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VMultiExtModuleTester__Syms* __restrict vlSymsp = static_cast<VMultiExtModuleTester__Syms*>(userp);
    VMultiExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VMultiExtModuleTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VMultiExtModuleTester__Syms* __restrict vlSymsp = static_cast<VMultiExtModuleTester__Syms*>(userp);
    VMultiExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
