// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftResetTester__Syms.h"


//======================

void VShiftResetTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VShiftResetTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShiftResetTester__Syms* __restrict vlSymsp = static_cast<VShiftResetTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VShiftResetTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VShiftResetTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VShiftResetTester__Syms* __restrict vlSymsp = static_cast<VShiftResetTester__Syms*>(userp);
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VShiftResetTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VShiftResetTester__Syms* __restrict vlSymsp = static_cast<VShiftResetTester__Syms*>(userp);
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+7,"clock", false,-1);
        tracep->declBit(c+8,"reset", false,-1);
        tracep->declBit(c+7,"ShiftResetTester clock", false,-1);
        tracep->declBit(c+8,"ShiftResetTester reset", false,-1);
        tracep->declBus(c+1,"ShiftResetTester cntVal", false,-1, 1,0);
        tracep->declBit(c+2,"ShiftResetTester wrap_wrap", false,-1);
        tracep->declBus(c+3,"ShiftResetTester sr_r", false,-1, 4,0);
        tracep->declBus(c+4,"ShiftResetTester sr_r_1", false,-1, 4,0);
        tracep->declBus(c+5,"ShiftResetTester sr_r_2", false,-1, 4,0);
        tracep->declBus(c+6,"ShiftResetTester sr", false,-1, 4,0);
    }
}

void VShiftResetTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VShiftResetTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VShiftResetTester__Syms* __restrict vlSymsp = static_cast<VShiftResetTester__Syms*>(userp);
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VShiftResetTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VShiftResetTester__Syms* __restrict vlSymsp = static_cast<VShiftResetTester__Syms*>(userp);
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->ShiftResetTester__DOT__cntVal),2);
        tracep->fullBit(oldp+2,((2U == (IData)(vlTOPp->ShiftResetTester__DOT__cntVal))));
        tracep->fullCData(oldp+3,(vlTOPp->ShiftResetTester__DOT__sr_r),5);
        tracep->fullCData(oldp+4,(vlTOPp->ShiftResetTester__DOT__sr_r_1),5);
        tracep->fullCData(oldp+5,(vlTOPp->ShiftResetTester__DOT__sr_r_2),5);
        tracep->fullCData(oldp+6,(vlTOPp->ShiftResetTester__DOT__sr),5);
        tracep->fullBit(oldp+7,(vlTOPp->clock));
        tracep->fullBit(oldp+8,(vlTOPp->reset));
    }
}
