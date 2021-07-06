// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


//======================

void VParameterizedVendingMachineTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VParameterizedVendingMachineTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VParameterizedVendingMachineTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VParameterizedVendingMachineTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VParameterizedVendingMachineTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VParameterizedVendingMachineTester__Syms*>(userp);
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VParameterizedVendingMachineTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VParameterizedVendingMachineTester__Syms*>(userp);
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+10,"clock", false,-1);
        tracep->declBit(c+11,"reset", false,-1);
        tracep->declBit(c+10,"ParameterizedVendingMachineTester clock", false,-1);
        tracep->declBit(c+11,"ParameterizedVendingMachineTester reset", false,-1);
        tracep->declBit(c+10,"ParameterizedVendingMachineTester dut_clock", false,-1);
        tracep->declBit(c+11,"ParameterizedVendingMachineTester dut_reset", false,-1);
        tracep->declBit(c+1,"ParameterizedVendingMachineTester dut_io_inputs_0", false,-1);
        tracep->declBit(c+2,"ParameterizedVendingMachineTester dut_io_inputs_1", false,-1);
        tracep->declBit(c+3,"ParameterizedVendingMachineTester dut_io_inputs_2", false,-1);
        tracep->declBit(c+4,"ParameterizedVendingMachineTester dut_io_inputs_3", false,-1);
        tracep->declBit(c+5,"ParameterizedVendingMachineTester dut_io_dispense", false,-1);
        tracep->declBus(c+6,"ParameterizedVendingMachineTester idx", false,-1, 6,0);
        tracep->declBit(c+7,"ParameterizedVendingMachineTester wrap_wrap", false,-1);
        tracep->declBit(c+10,"ParameterizedVendingMachineTester dut clock", false,-1);
        tracep->declBit(c+11,"ParameterizedVendingMachineTester dut reset", false,-1);
        tracep->declBit(c+1,"ParameterizedVendingMachineTester dut io_inputs_0", false,-1);
        tracep->declBit(c+2,"ParameterizedVendingMachineTester dut io_inputs_1", false,-1);
        tracep->declBit(c+3,"ParameterizedVendingMachineTester dut io_inputs_2", false,-1);
        tracep->declBit(c+4,"ParameterizedVendingMachineTester dut io_inputs_3", false,-1);
        tracep->declBit(c+5,"ParameterizedVendingMachineTester dut io_dispense", false,-1);
        tracep->declBus(c+8,"ParameterizedVendingMachineTester dut value", false,-1, 7,0);
        tracep->declBit(c+5,"ParameterizedVendingMachineTester dut doDispense", false,-1);
        tracep->declBus(c+9,"ParameterizedVendingMachineTester dut incValue", false,-1, 7,0);
    }
}

void VParameterizedVendingMachineTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VParameterizedVendingMachineTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VParameterizedVendingMachineTester__Syms*>(userp);
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VParameterizedVendingMachineTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = static_cast<VParameterizedVendingMachineTester__Syms*>(userp);
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))));
        tracep->fullBit(oldp+2,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                       >> 1U))));
        tracep->fullBit(oldp+3,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                       >> 2U))));
        tracep->fullBit(oldp+4,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                       >> 3U))));
        tracep->fullBit(oldp+5,((0x96U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
        tracep->fullCData(oldp+6,(vlTOPp->ParameterizedVendingMachineTester__DOT__idx),7);
        tracep->fullBit(oldp+7,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))));
        tracep->fullCData(oldp+8,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),8);
        tracep->fullCData(oldp+9,(((8U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                    ? 0x19U : ((4U 
                                                & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                                ? 0xaU
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                                     ? 1U
                                                     : 0U))))),8);
        tracep->fullBit(oldp+10,(vlTOPp->clock));
        tracep->fullBit(oldp+11,(vlTOPp->reset));
    }
}
