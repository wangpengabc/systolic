// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedAggregateOneHotTester__Syms.h"


//======================

void VParameterizedAggregateOneHotTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VParameterizedAggregateOneHotTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedAggregateOneHotTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VParameterizedAggregateOneHotTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VParameterizedAggregateOneHotTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedAggregateOneHotTester__Syms*>(userp);
    VParameterizedAggregateOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VParameterizedAggregateOneHotTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedAggregateOneHotTester__Syms*>(userp);
    VParameterizedAggregateOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"ParameterizedAggregateOneHotTester clock", false,-1);
        tracep->declBit(c+2,"ParameterizedAggregateOneHotTester reset", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_io_selectors_1", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_io_selectors_2", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_io_selectors_3", false,-1);
        tracep->declBus(c+4,"ParameterizedAggregateOneHotTester dut_io_out_v_0", false,-1, 7,0);
        tracep->declBus(c+4,"ParameterizedAggregateOneHotTester dut_io_out_v_1", false,-1, 7,0);
        tracep->declBus(c+5,"ParameterizedAggregateOneHotTester dut_io_out_a_f1", false,-1, 6,0);
        tracep->declBus(c+6,"ParameterizedAggregateOneHotTester dut_io_out_a_f2", false,-1, 8,0);
        tracep->declBit(c+7,"ParameterizedAggregateOneHotTester dut_1_io_selectors_1", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_1_io_selectors_2", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_1_io_selectors_3", false,-1);
        tracep->declBus(c+8,"ParameterizedAggregateOneHotTester dut_1_io_out_v_0", false,-1, 7,0);
        tracep->declBus(c+9,"ParameterizedAggregateOneHotTester dut_1_io_out_v_1", false,-1, 7,0);
        tracep->declBus(c+10,"ParameterizedAggregateOneHotTester dut_1_io_out_a_f1", false,-1, 6,0);
        tracep->declBus(c+11,"ParameterizedAggregateOneHotTester dut_1_io_out_a_f2", false,-1, 8,0);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_2_io_selectors_1", false,-1);
        tracep->declBit(c+7,"ParameterizedAggregateOneHotTester dut_2_io_selectors_2", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_2_io_selectors_3", false,-1);
        tracep->declBus(c+9,"ParameterizedAggregateOneHotTester dut_2_io_out_v_0", false,-1, 7,0);
        tracep->declBus(c+12,"ParameterizedAggregateOneHotTester dut_2_io_out_v_1", false,-1, 7,0);
        tracep->declBus(c+13,"ParameterizedAggregateOneHotTester dut_2_io_out_a_f1", false,-1, 6,0);
        tracep->declBus(c+14,"ParameterizedAggregateOneHotTester dut_2_io_out_a_f2", false,-1, 8,0);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_3_io_selectors_1", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_3_io_selectors_2", false,-1);
        tracep->declBit(c+7,"ParameterizedAggregateOneHotTester dut_3_io_selectors_3", false,-1);
        tracep->declBus(c+15,"ParameterizedAggregateOneHotTester dut_3_io_out_v_0", false,-1, 7,0);
        tracep->declBus(c+16,"ParameterizedAggregateOneHotTester dut_3_io_out_v_1", false,-1, 7,0);
        tracep->declBus(c+17,"ParameterizedAggregateOneHotTester dut_3_io_out_a_f1", false,-1, 6,0);
        tracep->declBus(c+18,"ParameterizedAggregateOneHotTester dut_3_io_out_a_f2", false,-1, 8,0);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut io_selectors_1", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut io_selectors_2", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut io_selectors_3", false,-1);
        tracep->declBus(c+4,"ParameterizedAggregateOneHotTester dut io_out_v_0", false,-1, 7,0);
        tracep->declBus(c+4,"ParameterizedAggregateOneHotTester dut io_out_v_1", false,-1, 7,0);
        tracep->declBus(c+5,"ParameterizedAggregateOneHotTester dut io_out_a_f1", false,-1, 6,0);
        tracep->declBus(c+6,"ParameterizedAggregateOneHotTester dut io_out_a_f2", false,-1, 8,0);
        tracep->declBit(c+7,"ParameterizedAggregateOneHotTester dut_1 io_selectors_1", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_1 io_selectors_2", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_1 io_selectors_3", false,-1);
        tracep->declBus(c+8,"ParameterizedAggregateOneHotTester dut_1 io_out_v_0", false,-1, 7,0);
        tracep->declBus(c+9,"ParameterizedAggregateOneHotTester dut_1 io_out_v_1", false,-1, 7,0);
        tracep->declBus(c+10,"ParameterizedAggregateOneHotTester dut_1 io_out_a_f1", false,-1, 6,0);
        tracep->declBus(c+11,"ParameterizedAggregateOneHotTester dut_1 io_out_a_f2", false,-1, 8,0);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_2 io_selectors_1", false,-1);
        tracep->declBit(c+7,"ParameterizedAggregateOneHotTester dut_2 io_selectors_2", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_2 io_selectors_3", false,-1);
        tracep->declBus(c+9,"ParameterizedAggregateOneHotTester dut_2 io_out_v_0", false,-1, 7,0);
        tracep->declBus(c+12,"ParameterizedAggregateOneHotTester dut_2 io_out_v_1", false,-1, 7,0);
        tracep->declBus(c+13,"ParameterizedAggregateOneHotTester dut_2 io_out_a_f1", false,-1, 6,0);
        tracep->declBus(c+14,"ParameterizedAggregateOneHotTester dut_2 io_out_a_f2", false,-1, 8,0);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_3 io_selectors_1", false,-1);
        tracep->declBit(c+3,"ParameterizedAggregateOneHotTester dut_3 io_selectors_2", false,-1);
        tracep->declBit(c+7,"ParameterizedAggregateOneHotTester dut_3 io_selectors_3", false,-1);
        tracep->declBus(c+15,"ParameterizedAggregateOneHotTester dut_3 io_out_v_0", false,-1, 7,0);
        tracep->declBus(c+16,"ParameterizedAggregateOneHotTester dut_3 io_out_v_1", false,-1, 7,0);
        tracep->declBus(c+17,"ParameterizedAggregateOneHotTester dut_3 io_out_a_f1", false,-1, 6,0);
        tracep->declBus(c+18,"ParameterizedAggregateOneHotTester dut_3 io_out_a_f2", false,-1, 8,0);
    }
}

void VParameterizedAggregateOneHotTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VParameterizedAggregateOneHotTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedAggregateOneHotTester__Syms*>(userp);
    VParameterizedAggregateOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VParameterizedAggregateOneHotTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = static_cast<VParameterizedAggregateOneHotTester__Syms*>(userp);
    VParameterizedAggregateOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(0U));
        tracep->fullCData(oldp+4,(0U),8);
        tracep->fullCData(oldp+5,(0U),7);
        tracep->fullSData(oldp+6,(0U),9);
        tracep->fullBit(oldp+7,(1U));
        tracep->fullCData(oldp+8,(4U),8);
        tracep->fullCData(oldp+9,(8U),8);
        tracep->fullCData(oldp+10,(6U),7);
        tracep->fullSData(oldp+11,(0x20U),9);
        tracep->fullCData(oldp+12,(0x10U),8);
        tracep->fullCData(oldp+13,(0xcU),7);
        tracep->fullSData(oldp+14,(0x40U),9);
        tracep->fullCData(oldp+15,(0xcU),8);
        tracep->fullCData(oldp+16,(0x18U),8);
        tracep->fullCData(oldp+17,(0x12U),7);
        tracep->fullSData(oldp+18,(0x60U),9);
    }
}
