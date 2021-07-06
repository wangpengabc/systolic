// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxTesterSuggestName__Syms.h"


//======================

void VBlackBoxTesterSuggestName::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VBlackBoxTesterSuggestName::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp = static_cast<VBlackBoxTesterSuggestName__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VBlackBoxTesterSuggestName::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VBlackBoxTesterSuggestName::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp = static_cast<VBlackBoxTesterSuggestName__Syms*>(userp);
    VBlackBoxTesterSuggestName* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VBlackBoxTesterSuggestName::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp = static_cast<VBlackBoxTesterSuggestName__Syms*>(userp);
    VBlackBoxTesterSuggestName* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"BlackBoxTesterSuggestName clock", false,-1);
        tracep->declBit(c+2,"BlackBoxTesterSuggestName reset", false,-1);
        tracep->declBit(c+3,"BlackBoxTesterSuggestName blackBoxPos_in", false,-1);
        tracep->declBit(c+4,"BlackBoxTesterSuggestName blackBoxPos_out", false,-1);
        tracep->declBit(c+5,"BlackBoxTesterSuggestName blackBoxNeg_in", false,-1);
        tracep->declBit(c+6,"BlackBoxTesterSuggestName blackBoxNeg_out", false,-1);
        tracep->declBus(c+3,"BlackBoxTesterSuggestName blackBoxPos in", false,-1, 0,0);
        tracep->declBus(c+4,"BlackBoxTesterSuggestName blackBoxPos out", false,-1, 0,0);
        tracep->declBus(c+5,"BlackBoxTesterSuggestName blackBoxNeg in", false,-1, 0,0);
        tracep->declBus(c+6,"BlackBoxTesterSuggestName blackBoxNeg out", false,-1, 0,0);
    }
}

void VBlackBoxTesterSuggestName::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VBlackBoxTesterSuggestName::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp = static_cast<VBlackBoxTesterSuggestName__Syms*>(userp);
    VBlackBoxTesterSuggestName* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VBlackBoxTesterSuggestName::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp = static_cast<VBlackBoxTesterSuggestName__Syms*>(userp);
    VBlackBoxTesterSuggestName* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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