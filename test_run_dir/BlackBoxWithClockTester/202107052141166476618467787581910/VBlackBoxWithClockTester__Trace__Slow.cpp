// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxWithClockTester__Syms.h"


//======================

void VBlackBoxWithClockTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VBlackBoxWithClockTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithClockTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VBlackBoxWithClockTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VBlackBoxWithClockTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithClockTester__Syms*>(userp);
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VBlackBoxWithClockTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithClockTester__Syms*>(userp);
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+6,"clock", false,-1);
        tracep->declBit(c+7,"reset", false,-1);
        tracep->declBit(c+6,"BlackBoxWithClockTester clock", false,-1);
        tracep->declBit(c+7,"BlackBoxWithClockTester reset", false,-1);
        tracep->declBit(c+6,"BlackBoxWithClockTester blackBox_clock", false,-1);
        tracep->declBit(c+1,"BlackBoxWithClockTester blackBox_in", false,-1);
        tracep->declBit(c+2,"BlackBoxWithClockTester blackBox_out", false,-1);
        tracep->declBit(c+3,"BlackBoxWithClockTester model", false,-1);
        tracep->declBus(c+4,"BlackBoxWithClockTester cycles", false,-1, 3,0);
        tracep->declBit(c+5,"BlackBoxWithClockTester wrap_wrap", false,-1);
        tracep->declBus(c+6,"BlackBoxWithClockTester blackBox clock", false,-1, 0,0);
        tracep->declBus(c+1,"BlackBoxWithClockTester blackBox in", false,-1, 0,0);
        tracep->declBus(c+2,"BlackBoxWithClockTester blackBox out", false,-1, 0,0);
        tracep->declBus(c+2,"BlackBoxWithClockTester blackBox register", false,-1, 0,0);
    }
}

void VBlackBoxWithClockTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VBlackBoxWithClockTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithClockTester__Syms*>(userp);
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VBlackBoxWithClockTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithClockTester__Syms*>(userp);
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles))));
        tracep->fullBit(oldp+2,(vlTOPp->BlackBoxWithClockTester__DOT__blackBox__DOT__register));
        tracep->fullBit(oldp+3,(vlTOPp->BlackBoxWithClockTester__DOT__model));
        tracep->fullCData(oldp+4,(vlTOPp->BlackBoxWithClockTester__DOT__cycles),4);
        tracep->fullBit(oldp+5,((0xeU == (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles))));
        tracep->fullBit(oldp+6,(vlTOPp->clock));
        tracep->fullBit(oldp+7,(vlTOPp->reset));
    }
}
