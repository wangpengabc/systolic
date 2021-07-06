// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiBlackBoxTester__Syms.h"


//======================

void VMultiBlackBoxTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VMultiBlackBoxTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = static_cast<VMultiBlackBoxTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VMultiBlackBoxTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VMultiBlackBoxTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = static_cast<VMultiBlackBoxTester__Syms*>(userp);
    VMultiBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VMultiBlackBoxTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = static_cast<VMultiBlackBoxTester__Syms*>(userp);
    VMultiBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"MultiBlackBoxTester clock", false,-1);
        tracep->declBit(c+2,"MultiBlackBoxTester reset", false,-1);
        tracep->declBit(c+3,"MultiBlackBoxTester blackBoxInvPos_in", false,-1);
        tracep->declBit(c+4,"MultiBlackBoxTester blackBoxInvPos_out", false,-1);
        tracep->declBit(c+5,"MultiBlackBoxTester blackBoxInvNeg_in", false,-1);
        tracep->declBit(c+6,"MultiBlackBoxTester blackBoxInvNeg_out", false,-1);
        tracep->declBit(c+3,"MultiBlackBoxTester blackBoxPassPos_in", false,-1);
        tracep->declBit(c+3,"MultiBlackBoxTester blackBoxPassPos_out", false,-1);
        tracep->declBit(c+5,"MultiBlackBoxTester blackBoxPassNeg_in", false,-1);
        tracep->declBit(c+5,"MultiBlackBoxTester blackBoxPassNeg_out", false,-1);
        tracep->declBus(c+3,"MultiBlackBoxTester blackBoxInvPos in", false,-1, 0,0);
        tracep->declBus(c+4,"MultiBlackBoxTester blackBoxInvPos out", false,-1, 0,0);
        tracep->declBus(c+5,"MultiBlackBoxTester blackBoxInvNeg in", false,-1, 0,0);
        tracep->declBus(c+6,"MultiBlackBoxTester blackBoxInvNeg out", false,-1, 0,0);
        tracep->declBus(c+3,"MultiBlackBoxTester blackBoxPassPos in", false,-1, 0,0);
        tracep->declBus(c+3,"MultiBlackBoxTester blackBoxPassPos out", false,-1, 0,0);
        tracep->declBus(c+5,"MultiBlackBoxTester blackBoxPassNeg in", false,-1, 0,0);
        tracep->declBus(c+5,"MultiBlackBoxTester blackBoxPassNeg out", false,-1, 0,0);
    }
}

void VMultiBlackBoxTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VMultiBlackBoxTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = static_cast<VMultiBlackBoxTester__Syms*>(userp);
    VMultiBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VMultiBlackBoxTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = static_cast<VMultiBlackBoxTester__Syms*>(userp);
    VMultiBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
