// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopTester__Syms.h"


//======================

void VTopTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VTopTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTopTester__Syms* __restrict vlSymsp = static_cast<VTopTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VTopTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VTopTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VTopTester__Syms* __restrict vlSymsp = static_cast<VTopTester__Syms*>(userp);
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VTopTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VTopTester__Syms* __restrict vlSymsp = static_cast<VTopTester__Syms*>(userp);
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"TopTester clock", false,-1);
        tracep->declBit(c+2,"TopTester reset", false,-1);
        tracep->declBit(c+1,"TopTester dut_clock", false,-1);
        tracep->declBit(c+2,"TopTester dut_reset", false,-1);
        tracep->declBit(c+3,"TopTester done_value", false,-1);
        tracep->declBit(c+1,"TopTester dut clock", false,-1);
        tracep->declBit(c+2,"TopTester dut reset", false,-1);
        tracep->declBus(c+4,"TopTester dut sources_1_x_1", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sources_2_x_0", false,-1, 3,0);
        tracep->declBus(c+6,"TopTester dut sinks_0_out", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_1_out", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_1_x_1", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_2_out", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_2_x_1", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_3_out", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_3_x_1", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_4_out", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_4_x_1", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_5_out", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_5_x_1", false,-1, 3,0);
        tracep->declBus(c+6,"TopTester dut sources_0 x", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sources_1 x_1", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sources_1 x", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sources_2 x_0", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sources_2 x", false,-1, 3,0);
        tracep->declBus(c+6,"TopTester dut sinks_0 out", false,-1, 3,0);
        tracep->declBus(c+6,"TopTester dut sinks_0 x", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_1 out", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_1 x_1", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_1 x", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_2 out", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_2 x_1", false,-1, 3,0);
        tracep->declBus(c+4,"TopTester dut sinks_2 x", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_3 out", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_3 x_1", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_3 x", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_4 out", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_4 x_1", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_4 x", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_5 out", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_5 x_1", false,-1, 3,0);
        tracep->declBus(c+5,"TopTester dut sinks_5 x", false,-1, 3,0);
    }
}

void VTopTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VTopTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VTopTester__Syms* __restrict vlSymsp = static_cast<VTopTester__Syms*>(userp);
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VTopTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VTopTester__Syms* __restrict vlSymsp = static_cast<VTopTester__Syms*>(userp);
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->TopTester__DOT__done_value));
        tracep->fullCData(oldp+4,(1U),4);
        tracep->fullCData(oldp+5,(2U),4);
        tracep->fullCData(oldp+6,(0U),4);
    }
}
