// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetQueueTester__Syms.h"


//======================

void VAsyncResetQueueTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VAsyncResetQueueTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetQueueTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAsyncResetQueueTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VAsyncResetQueueTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetQueueTester__Syms*>(userp);
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VAsyncResetQueueTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetQueueTester__Syms*>(userp);
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+11,"clock", false,-1);
        tracep->declBit(c+12,"reset", false,-1);
        tracep->declBit(c+11,"AsyncResetQueueTester clock", false,-1);
        tracep->declBit(c+12,"AsyncResetQueueTester reset", false,-1);
        tracep->declBit(c+1,"AsyncResetQueueTester queue_clock", false,-1);
        tracep->declBit(c+13,"AsyncResetQueueTester queue_reset", false,-1);
        tracep->declBit(c+6,"AsyncResetQueueTester queue_io_enq_ready", false,-1);
        tracep->declBus(c+14,"AsyncResetQueueTester queue_io_count", false,-1, 2,0);
        tracep->declBus(c+2,"AsyncResetQueueTester cDiv_value", false,-1, 1,0);
        tracep->declBus(c+3,"AsyncResetQueueTester count", false,-1, 3,0);
        tracep->declBit(c+4,"AsyncResetQueueTester wrap_wrap", false,-1);
        tracep->declBit(c+13,"AsyncResetQueueTester asyncResetNext", false,-1);
        tracep->declBit(c+5,"AsyncResetQueueTester doCheck", false,-1);
        tracep->declBit(c+1,"AsyncResetQueueTester queue clock", false,-1);
        tracep->declBit(c+13,"AsyncResetQueueTester queue reset", false,-1);
        tracep->declBit(c+6,"AsyncResetQueueTester queue io_enq_ready", false,-1);
        tracep->declBus(c+14,"AsyncResetQueueTester queue io_count", false,-1, 2,0);
        tracep->declBus(c+7,"AsyncResetQueueTester queue enq_ptr_value", false,-1, 1,0);
        tracep->declBit(c+8,"AsyncResetQueueTester queue maybe_full", false,-1);
        tracep->declBit(c+9,"AsyncResetQueueTester queue ptr_match", false,-1);
        tracep->declBit(c+10,"AsyncResetQueueTester queue full", false,-1);
        tracep->declBus(c+7,"AsyncResetQueueTester queue ptr_diff", false,-1, 1,0);
    }
}

void VAsyncResetQueueTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAsyncResetQueueTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetQueueTester__Syms*>(userp);
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VAsyncResetQueueTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetQueueTester__Syms*>(userp);
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->AsyncResetQueueTester__DOT__queue_clock));
        tracep->fullCData(oldp+2,(vlTOPp->AsyncResetQueueTester__DOT__cDiv_value),2);
        tracep->fullCData(oldp+3,(vlTOPp->AsyncResetQueueTester__DOT__count),4);
        tracep->fullBit(oldp+4,((0xfU == (IData)(vlTOPp->AsyncResetQueueTester__DOT__count))));
        tracep->fullBit(oldp+5,(vlTOPp->AsyncResetQueueTester__DOT__doCheck));
        tracep->fullBit(oldp+6,((1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full)))));
        tracep->fullCData(oldp+7,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value),2);
        tracep->fullBit(oldp+8,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__maybe_full));
        tracep->fullBit(oldp+9,((0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value))));
        tracep->fullBit(oldp+10,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full));
        tracep->fullBit(oldp+11,(vlTOPp->clock));
        tracep->fullBit(oldp+12,(vlTOPp->reset));
        tracep->fullBit(oldp+13,(vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext));
        tracep->fullCData(oldp+14,(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count),3);
    }
}
