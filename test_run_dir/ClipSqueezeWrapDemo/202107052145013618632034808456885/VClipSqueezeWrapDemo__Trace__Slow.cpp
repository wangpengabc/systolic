// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClipSqueezeWrapDemo__Syms.h"


//======================

void VClipSqueezeWrapDemo::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VClipSqueezeWrapDemo::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = static_cast<VClipSqueezeWrapDemo__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VClipSqueezeWrapDemo::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VClipSqueezeWrapDemo::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = static_cast<VClipSqueezeWrapDemo__Syms*>(userp);
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VClipSqueezeWrapDemo::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = static_cast<VClipSqueezeWrapDemo__Syms*>(userp);
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clock", false,-1);
        tracep->declBit(c+6,"reset", false,-1);
        tracep->declBit(c+5,"ClipSqueezeWrapDemo clock", false,-1);
        tracep->declBit(c+6,"ClipSqueezeWrapDemo reset", false,-1);
        tracep->declBus(c+1,"ClipSqueezeWrapDemo counter", false,-1, 4,0);
        tracep->declBus(c+2,"ClipSqueezeWrapDemo clipped", false,-1, 3,0);
        tracep->declBus(c+3,"ClipSqueezeWrapDemo squeezed", false,-1, 3,0);
        tracep->declBus(c+4,"ClipSqueezeWrapDemo wrapped", false,-1, 3,0);
    }
}

void VClipSqueezeWrapDemo::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VClipSqueezeWrapDemo::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = static_cast<VClipSqueezeWrapDemo__Syms*>(userp);
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VClipSqueezeWrapDemo::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = static_cast<VClipSqueezeWrapDemo__Syms*>(userp);
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->ClipSqueezeWrapDemo__DOT__counter),5);
        tracep->fullCData(oldp+2,((VL_LTS_III(1,5,5, 6U, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                    ? 6U : (VL_GTS_III(1,5,5, 0x1eU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                             ? 0xeU
                                             : (0xfU 
                                                & (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))))),4);
        tracep->fullCData(oldp+3,((0xfU & (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))),4);
        tracep->fullCData(oldp+4,((0xfU & (VL_LTS_III(1,5,5, 6U, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                            ? VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & ((IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter) 
                                                                - (IData)(9U))))
                                            : (VL_GTS_III(1,5,5, 0x1eU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                                ? VL_EXTENDS_II(6,5, 
                                                                (0x1fU 
                                                                 & ((IData)(9U) 
                                                                    + (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))))
                                                : (
                                                   (0x20U 
                                                    & ((IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)))))),4);
        tracep->fullBit(oldp+5,(vlTOPp->clock));
        tracep->fullBit(oldp+6,(vlTOPp->reset));
    }
}
