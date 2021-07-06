// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClipSqueezeWrapDemo__Syms.h"


void VClipSqueezeWrapDemo::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = static_cast<VClipSqueezeWrapDemo__Syms*>(userp);
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VClipSqueezeWrapDemo::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = static_cast<VClipSqueezeWrapDemo__Syms*>(userp);
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->ClipSqueezeWrapDemo__DOT__counter),5);
            tracep->chgCData(oldp+1,((VL_LTS_III(1,5,5, 6U, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                       ? 6U : (VL_GTS_III(1,5,5, 0x1eU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                                ? 0xeU
                                                : (0xfU 
                                                   & (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))))),4);
            tracep->chgCData(oldp+2,((0xfU & (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))),4);
            tracep->chgCData(oldp+3,((0xfU & (VL_LTS_III(1,5,5, 6U, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                               ? VL_EXTENDS_II(6,5, 
                                                               (0x1fU 
                                                                & ((IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter) 
                                                                   - (IData)(9U))))
                                               : (VL_GTS_III(1,5,5, 0x1eU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                                   ? 
                                                  VL_EXTENDS_II(6,5, 
                                                                (0x1fU 
                                                                 & ((IData)(9U) 
                                                                    + (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))))
                                                   : 
                                                  ((0x20U 
                                                    & ((IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)))))),4);
        }
        tracep->chgBit(oldp+4,(vlTOPp->clock));
        tracep->chgBit(oldp+5,(vlTOPp->reset));
    }
}

void VClipSqueezeWrapDemo::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = static_cast<VClipSqueezeWrapDemo__Syms*>(userp);
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
