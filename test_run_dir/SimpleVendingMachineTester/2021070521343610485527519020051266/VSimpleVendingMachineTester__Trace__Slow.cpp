// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimpleVendingMachineTester__Syms.h"


//======================

void VSimpleVendingMachineTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSimpleVendingMachineTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VSimpleVendingMachineTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSimpleVendingMachineTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSimpleVendingMachineTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VSimpleVendingMachineTester__Syms*>(userp);
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSimpleVendingMachineTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VSimpleVendingMachineTester__Syms*>(userp);
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+7,"clock", false,-1);
        tracep->declBit(c+8,"reset", false,-1);
        tracep->declBit(c+7,"SimpleVendingMachineTester clock", false,-1);
        tracep->declBit(c+8,"SimpleVendingMachineTester reset", false,-1);
        tracep->declBit(c+7,"SimpleVendingMachineTester dut_clock", false,-1);
        tracep->declBit(c+8,"SimpleVendingMachineTester dut_reset", false,-1);
        tracep->declBit(c+1,"SimpleVendingMachineTester dut_io_nickel", false,-1);
        tracep->declBit(c+2,"SimpleVendingMachineTester dut_io_dime", false,-1);
        tracep->declBit(c+3,"SimpleVendingMachineTester dut_io_dispense", false,-1);
        tracep->declBus(c+4,"SimpleVendingMachineTester cycle", false,-1, 3,0);
        tracep->declBit(c+5,"SimpleVendingMachineTester wrap_wrap", false,-1);
        tracep->declBit(c+7,"SimpleVendingMachineTester dut clock", false,-1);
        tracep->declBit(c+8,"SimpleVendingMachineTester dut reset", false,-1);
        tracep->declBit(c+1,"SimpleVendingMachineTester dut io_nickel", false,-1);
        tracep->declBit(c+2,"SimpleVendingMachineTester dut io_dime", false,-1);
        tracep->declBit(c+3,"SimpleVendingMachineTester dut io_dispense", false,-1);
        tracep->declBit(c+1,"SimpleVendingMachineTester dut impl_nickel", false,-1);
        tracep->declBit(c+2,"SimpleVendingMachineTester dut impl_dime", false,-1);
        tracep->declBit(c+3,"SimpleVendingMachineTester dut impl_dispense", false,-1);
        tracep->declBit(c+7,"SimpleVendingMachineTester dut impl_clock", false,-1);
        tracep->declBit(c+8,"SimpleVendingMachineTester dut impl_reset", false,-1);
        tracep->declBit(c+7,"SimpleVendingMachineTester dut impl clock", false,-1);
        tracep->declBit(c+8,"SimpleVendingMachineTester dut impl reset", false,-1);
        tracep->declBit(c+1,"SimpleVendingMachineTester dut impl nickel", false,-1);
        tracep->declBit(c+2,"SimpleVendingMachineTester dut impl dime", false,-1);
        tracep->declBit(c+3,"SimpleVendingMachineTester dut impl dispense", false,-1);
        tracep->declBus(c+9,"SimpleVendingMachineTester dut impl sIdle", false,-1, 2,0);
        tracep->declBus(c+10,"SimpleVendingMachineTester dut impl s5", false,-1, 2,0);
        tracep->declBus(c+11,"SimpleVendingMachineTester dut impl s10", false,-1, 2,0);
        tracep->declBus(c+12,"SimpleVendingMachineTester dut impl s15", false,-1, 2,0);
        tracep->declBus(c+13,"SimpleVendingMachineTester dut impl sOk", false,-1, 2,0);
        tracep->declBus(c+6,"SimpleVendingMachineTester dut impl state", false,-1, 2,0);
    }
}

void VSimpleVendingMachineTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSimpleVendingMachineTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VSimpleVendingMachineTester__Syms*>(userp);
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSimpleVendingMachineTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VSimpleVendingMachineTester__Syms*>(userp);
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((9U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                 & ((8U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                    | ((7U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                       & ((6U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                          & (5U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))))))));
        tracep->fullBit(oldp+2,(((9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                 | ((8U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                    & ((7U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                       & ((6U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                          | (5U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))))))));
        tracep->fullBit(oldp+3,((4U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state))));
        tracep->fullCData(oldp+4,(vlTOPp->SimpleVendingMachineTester__DOT__cycle),4);
        tracep->fullBit(oldp+5,((9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))));
        tracep->fullCData(oldp+6,(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state),3);
        tracep->fullBit(oldp+7,(vlTOPp->clock));
        tracep->fullBit(oldp+8,(vlTOPp->reset));
        tracep->fullCData(oldp+9,(0U),3);
        tracep->fullCData(oldp+10,(1U),3);
        tracep->fullCData(oldp+11,(2U),3);
        tracep->fullCData(oldp+12,(3U),3);
        tracep->fullCData(oldp+13,(4U),3);
    }
}
