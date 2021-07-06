// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedOneHotTester__Syms.h"


//======================

void VParameterizedOneHotTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VParameterizedOneHotTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedOneHotTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VParameterizedOneHotTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VParameterizedOneHotTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedOneHotTester__Syms*>(userp);
    VParameterizedOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VParameterizedOneHotTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedOneHotTester__Syms*>(userp);
    VParameterizedOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"ParameterizedOneHotTester clock", false,-1);
        tracep->declBit(c+2,"ParameterizedOneHotTester reset", false,-1);
        tracep->declBit(c+3,"ParameterizedOneHotTester dut_io_selectors_0", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_io_selectors_1", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_io_selectors_2", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_io_selectors_3", false,-1);
        tracep->declBus(c+5,"ParameterizedOneHotTester dut_io_out", false,-1, 7,0);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_1_io_selectors_0", false,-1);
        tracep->declBit(c+3,"ParameterizedOneHotTester dut_1_io_selectors_1", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_1_io_selectors_2", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_1_io_selectors_3", false,-1);
        tracep->declBus(c+6,"ParameterizedOneHotTester dut_1_io_out", false,-1, 7,0);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_2_io_selectors_0", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_2_io_selectors_1", false,-1);
        tracep->declBit(c+3,"ParameterizedOneHotTester dut_2_io_selectors_2", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_2_io_selectors_3", false,-1);
        tracep->declBus(c+7,"ParameterizedOneHotTester dut_2_io_out", false,-1, 7,0);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_3_io_selectors_0", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_3_io_selectors_1", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_3_io_selectors_2", false,-1);
        tracep->declBit(c+3,"ParameterizedOneHotTester dut_3_io_selectors_3", false,-1);
        tracep->declBus(c+8,"ParameterizedOneHotTester dut_3_io_out", false,-1, 7,0);
        tracep->declBit(c+3,"ParameterizedOneHotTester dut io_selectors_0", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut io_selectors_1", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut io_selectors_2", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut io_selectors_3", false,-1);
        tracep->declBus(c+5,"ParameterizedOneHotTester dut io_out", false,-1, 7,0);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_1 io_selectors_0", false,-1);
        tracep->declBit(c+3,"ParameterizedOneHotTester dut_1 io_selectors_1", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_1 io_selectors_2", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_1 io_selectors_3", false,-1);
        tracep->declBus(c+6,"ParameterizedOneHotTester dut_1 io_out", false,-1, 7,0);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_2 io_selectors_0", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_2 io_selectors_1", false,-1);
        tracep->declBit(c+3,"ParameterizedOneHotTester dut_2 io_selectors_2", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_2 io_selectors_3", false,-1);
        tracep->declBus(c+7,"ParameterizedOneHotTester dut_2 io_out", false,-1, 7,0);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_3 io_selectors_0", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_3 io_selectors_1", false,-1);
        tracep->declBit(c+4,"ParameterizedOneHotTester dut_3 io_selectors_2", false,-1);
        tracep->declBit(c+3,"ParameterizedOneHotTester dut_3 io_selectors_3", false,-1);
        tracep->declBus(c+8,"ParameterizedOneHotTester dut_3 io_out", false,-1, 7,0);
    }
}

void VParameterizedOneHotTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VParameterizedOneHotTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedOneHotTester__Syms*>(userp);
    VParameterizedOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VParameterizedOneHotTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedOneHotTester__Syms*>(userp);
    VParameterizedOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(1U));
        tracep->fullBit(oldp+4,(0U));
        tracep->fullCData(oldp+5,(0xfdU),8);
        tracep->fullCData(oldp+6,(0xfbU),8);
        tracep->fullCData(oldp+7,(0xf9U),8);
        tracep->fullCData(oldp+8,(0xf5U),8);
    }
}
