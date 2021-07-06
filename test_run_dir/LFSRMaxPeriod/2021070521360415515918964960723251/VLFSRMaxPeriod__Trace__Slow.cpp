// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRMaxPeriod__Syms.h"


//======================

void VLFSRMaxPeriod::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VLFSRMaxPeriod::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = static_cast<VLFSRMaxPeriod__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VLFSRMaxPeriod::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VLFSRMaxPeriod::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = static_cast<VLFSRMaxPeriod__Syms*>(userp);
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VLFSRMaxPeriod::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = static_cast<VLFSRMaxPeriod__Syms*>(userp);
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+10,"clock", false,-1);
        tracep->declBit(c+11,"reset", false,-1);
        tracep->declBit(c+10,"LFSRMaxPeriod clock", false,-1);
        tracep->declBit(c+11,"LFSRMaxPeriod reset", false,-1);
        tracep->declBit(c+10,"LFSRMaxPeriod rv_prng_clock", false,-1);
        tracep->declBit(c+11,"LFSRMaxPeriod rv_prng_reset", false,-1);
        tracep->declBit(c+1,"LFSRMaxPeriod rv_prng_io_out_0", false,-1);
        tracep->declBit(c+2,"LFSRMaxPeriod rv_prng_io_out_1", false,-1);
        tracep->declBus(c+3,"LFSRMaxPeriod rv", false,-1, 1,0);
        tracep->declBit(c+4,"LFSRMaxPeriod started", false,-1);
        tracep->declBus(c+5,"LFSRMaxPeriod seed", false,-1, 1,0);
        tracep->declBus(c+6,"LFSRMaxPeriod wrap_value", false,-1, 1,0);
        tracep->declBit(c+7,"LFSRMaxPeriod wrap_wrap_wrap", false,-1);
        tracep->declBit(c+8,"LFSRMaxPeriod wrap", false,-1);
        tracep->declBus(c+9,"LFSRMaxPeriod last", false,-1, 1,0);
        tracep->declBit(c+10,"LFSRMaxPeriod rv_prng clock", false,-1);
        tracep->declBit(c+11,"LFSRMaxPeriod rv_prng reset", false,-1);
        tracep->declBit(c+1,"LFSRMaxPeriod rv_prng io_out_0", false,-1);
        tracep->declBit(c+2,"LFSRMaxPeriod rv_prng io_out_1", false,-1);
        tracep->declBit(c+1,"LFSRMaxPeriod rv_prng state_0", false,-1);
        tracep->declBit(c+2,"LFSRMaxPeriod rv_prng state_1", false,-1);
    }
}

void VLFSRMaxPeriod::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VLFSRMaxPeriod::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = static_cast<VLFSRMaxPeriod__Syms*>(userp);
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VLFSRMaxPeriod::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = static_cast<VLFSRMaxPeriod__Syms*>(userp);
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
        tracep->fullBit(oldp+2,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1));
        tracep->fullCData(oldp+3,(vlTOPp->LFSRMaxPeriod__DOT__rv),2);
        tracep->fullBit(oldp+4,(vlTOPp->LFSRMaxPeriod__DOT__started));
        tracep->fullCData(oldp+5,(vlTOPp->LFSRMaxPeriod__DOT__seed),2);
        tracep->fullCData(oldp+6,(vlTOPp->LFSRMaxPeriod__DOT__wrap_value),2);
        tracep->fullBit(oldp+7,((2U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value))));
        tracep->fullBit(oldp+8,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
                                 & (2U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value)))));
        tracep->fullCData(oldp+9,(vlTOPp->LFSRMaxPeriod__DOT__last),2);
        tracep->fullBit(oldp+10,(vlTOPp->clock));
        tracep->fullBit(oldp+11,(vlTOPp->reset));
    }
}
