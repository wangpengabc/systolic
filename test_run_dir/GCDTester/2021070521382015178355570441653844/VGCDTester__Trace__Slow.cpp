// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCDTester__Syms.h"


//======================

void VGCDTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VGCDTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VGCDTester__Syms* __restrict vlSymsp = static_cast<VGCDTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VGCDTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VGCDTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VGCDTester__Syms* __restrict vlSymsp = static_cast<VGCDTester__Syms*>(userp);
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VGCDTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VGCDTester__Syms* __restrict vlSymsp = static_cast<VGCDTester__Syms*>(userp);
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clock", false,-1);
        tracep->declBit(c+6,"reset", false,-1);
        tracep->declBit(c+5,"GCDTester clock", false,-1);
        tracep->declBit(c+6,"GCDTester reset", false,-1);
        tracep->declBit(c+5,"GCDTester dut_clock", false,-1);
        tracep->declBit(c+1,"GCDTester dut_io_e", false,-1);
        tracep->declBus(c+2,"GCDTester dut_io_z", false,-1, 31,0);
        tracep->declBit(c+3,"GCDTester dut_io_v", false,-1);
        tracep->declBit(c+1,"GCDTester first", false,-1);
        tracep->declBit(c+5,"GCDTester dut clock", false,-1);
        tracep->declBit(c+1,"GCDTester dut io_e", false,-1);
        tracep->declBus(c+2,"GCDTester dut io_z", false,-1, 31,0);
        tracep->declBit(c+3,"GCDTester dut io_v", false,-1);
        tracep->declBus(c+2,"GCDTester dut x", false,-1, 31,0);
        tracep->declBus(c+4,"GCDTester dut y", false,-1, 31,0);
    }
}

void VGCDTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VGCDTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VGCDTester__Syms* __restrict vlSymsp = static_cast<VGCDTester__Syms*>(userp);
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VGCDTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VGCDTester__Syms* __restrict vlSymsp = static_cast<VGCDTester__Syms*>(userp);
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->GCDTester__DOT__first));
        tracep->fullIData(oldp+2,(vlTOPp->GCDTester__DOT__dut__DOT__x),32);
        tracep->fullBit(oldp+3,((0U == vlTOPp->GCDTester__DOT__dut__DOT__y)));
        tracep->fullIData(oldp+4,(vlTOPp->GCDTester__DOT__dut__DOT__y),32);
        tracep->fullBit(oldp+5,(vlTOPp->clock));
        tracep->fullBit(oldp+6,(vlTOPp->reset));
    }
}
