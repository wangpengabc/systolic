// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetAggregateTester__Syms.h"


//======================

void VAsyncResetAggregateTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VAsyncResetAggregateTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetAggregateTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAsyncResetAggregateTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VAsyncResetAggregateTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetAggregateTester__Syms*>(userp);
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VAsyncResetAggregateTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetAggregateTester__Syms*>(userp);
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+8,"clock", false,-1);
        tracep->declBit(c+9,"reset", false,-1);
        tracep->declBit(c+8,"AsyncResetAggregateTester clock", false,-1);
        tracep->declBit(c+9,"AsyncResetAggregateTester reset", false,-1);
        tracep->declBus(c+10,"AsyncResetAggregateTester cDiv_value", false,-1, 1,0);
        tracep->declBit(c+11,"AsyncResetAggregateTester slowClk", false,-1);
        tracep->declBus(c+5,"AsyncResetAggregateTester count", false,-1, 3,0);
        tracep->declBit(c+6,"AsyncResetAggregateTester wrap_wrap", false,-1);
        tracep->declBit(c+7,"AsyncResetAggregateTester asyncResetNext", false,-1);
        tracep->declBus(c+1,"AsyncResetAggregateTester reg_0_x", false,-1, 7,0);
        tracep->declBus(c+2,"AsyncResetAggregateTester reg_0_y", false,-1, 7,0);
        tracep->declBus(c+3,"AsyncResetAggregateTester reg_1_x", false,-1, 7,0);
        tracep->declBus(c+4,"AsyncResetAggregateTester reg_1_y", false,-1, 7,0);
    }
}

void VAsyncResetAggregateTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAsyncResetAggregateTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetAggregateTester__Syms*>(userp);
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VAsyncResetAggregateTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetAggregateTester__Syms*>(userp);
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x),8);
        tracep->fullCData(oldp+2,(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y),8);
        tracep->fullCData(oldp+3,(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x),8);
        tracep->fullCData(oldp+4,(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y),8);
        tracep->fullCData(oldp+5,(vlTOPp->AsyncResetAggregateTester__DOT__count),4);
        tracep->fullBit(oldp+6,((0xfU == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))));
        tracep->fullBit(oldp+7,(vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext));
        tracep->fullBit(oldp+8,(vlTOPp->clock));
        tracep->fullBit(oldp+9,(vlTOPp->reset));
        tracep->fullCData(oldp+10,(vlTOPp->AsyncResetAggregateTester__DOT__cDiv_value),2);
        tracep->fullBit(oldp+11,(vlTOPp->AsyncResetAggregateTester__DOT__slowClk));
    }
}
