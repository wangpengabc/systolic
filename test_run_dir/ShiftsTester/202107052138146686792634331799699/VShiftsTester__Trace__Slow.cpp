// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftsTester__Syms.h"


//======================

void VShiftsTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VShiftsTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShiftsTester__Syms* __restrict vlSymsp = static_cast<VShiftsTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VShiftsTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VShiftsTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VShiftsTester__Syms* __restrict vlSymsp = static_cast<VShiftsTester__Syms*>(userp);
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VShiftsTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VShiftsTester__Syms* __restrict vlSymsp = static_cast<VShiftsTester__Syms*>(userp);
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clock", false,-1);
        tracep->declBit(c+6,"reset", false,-1);
        tracep->declBit(c+5,"ShiftsTester clock", false,-1);
        tracep->declBit(c+6,"ShiftsTester reset", false,-1);
        tracep->declBit(c+1,"ShiftsTester cntVal", false,-1);
        tracep->declBus(c+2,"ShiftsTester srs_0", false,-1, 4,0);
        tracep->declBus(c+3,"ShiftsTester srs_1", false,-1, 4,0);
        tracep->declBit(c+4,"ShiftsTester REG", false,-1);
    }
}

void VShiftsTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VShiftsTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VShiftsTester__Syms* __restrict vlSymsp = static_cast<VShiftsTester__Syms*>(userp);
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VShiftsTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VShiftsTester__Syms* __restrict vlSymsp = static_cast<VShiftsTester__Syms*>(userp);
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->ShiftsTester__DOT__cntVal));
        tracep->fullCData(oldp+2,(vlTOPp->ShiftsTester__DOT__srs_0),5);
        tracep->fullCData(oldp+3,(vlTOPp->ShiftsTester__DOT__srs_1),5);
        tracep->fullBit(oldp+4,(vlTOPp->ShiftsTester__DOT__REG));
        tracep->fullBit(oldp+5,(vlTOPp->clock));
        tracep->fullBit(oldp+6,(vlTOPp->reset));
    }
}
