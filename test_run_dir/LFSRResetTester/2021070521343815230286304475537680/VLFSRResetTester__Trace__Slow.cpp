// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRResetTester__Syms.h"


//======================

void VLFSRResetTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VLFSRResetTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLFSRResetTester__Syms* __restrict vlSymsp = static_cast<VLFSRResetTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VLFSRResetTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VLFSRResetTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VLFSRResetTester__Syms* __restrict vlSymsp = static_cast<VLFSRResetTester__Syms*>(userp);
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VLFSRResetTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VLFSRResetTester__Syms* __restrict vlSymsp = static_cast<VLFSRResetTester__Syms*>(userp);
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+6,"clock", false,-1);
        tracep->declBit(c+7,"reset", false,-1);
        tracep->declBit(c+6,"LFSRResetTester clock", false,-1);
        tracep->declBit(c+7,"LFSRResetTester reset", false,-1);
        tracep->declBit(c+6,"LFSRResetTester lfsr_clock", false,-1);
        tracep->declBit(c+1,"LFSRResetTester lfsr_reset", false,-1);
        tracep->declBit(c+2,"LFSRResetTester lfsr_io_seed_valid", false,-1);
        tracep->declBit(c+3,"LFSRResetTester lfsr_io_out_0", false,-1);
        tracep->declBus(c+4,"LFSRResetTester count", false,-1, 2,0);
        tracep->declBit(c+5,"LFSRResetTester wrap_wrap", false,-1);
        tracep->declBit(c+6,"LFSRResetTester lfsr clock", false,-1);
        tracep->declBit(c+1,"LFSRResetTester lfsr reset", false,-1);
        tracep->declBit(c+2,"LFSRResetTester lfsr io_seed_valid", false,-1);
        tracep->declBit(c+3,"LFSRResetTester lfsr io_out_0", false,-1);
        tracep->declBit(c+3,"LFSRResetTester lfsr state_0", false,-1);
    }
}

void VLFSRResetTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VLFSRResetTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VLFSRResetTester__Syms* __restrict vlSymsp = static_cast<VLFSRResetTester__Syms*>(userp);
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VLFSRResetTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VLFSRResetTester__Syms* __restrict vlSymsp = static_cast<VLFSRResetTester__Syms*>(userp);
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((3U == (IData)(vlTOPp->LFSRResetTester__DOT__count))));
        tracep->fullBit(oldp+2,((1U == (IData)(vlTOPp->LFSRResetTester__DOT__count))));
        tracep->fullBit(oldp+3,(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0));
        tracep->fullCData(oldp+4,(vlTOPp->LFSRResetTester__DOT__count),3);
        tracep->fullBit(oldp+5,((4U == (IData)(vlTOPp->LFSRResetTester__DOT__count))));
        tracep->fullBit(oldp+6,(vlTOPp->clock));
        tracep->fullBit(oldp+7,(vlTOPp->reset));
    }
}
