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
            tracep->chgCData(oldp+0,(vlTOPp->ClipSqueezeWrapDemo__DOT__counter),7);
            tracep->chgCData(oldp+1,((VL_LTS_III(1,7,7, 0x11U, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                       ? 0x11U : (VL_GTS_III(1,7,7, 0x7cU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                                   ? 0x3cU
                                                   : 
                                                  (0x3fU 
                                                   & (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))))),6);
            tracep->chgCData(oldp+2,((0x3fU & (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))),6);
            tracep->chgCData(oldp+3,((0x3fU & (VL_LTS_III(1,7,7, 0x11U, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                                ? VL_EXTENDS_II(8,7, 
                                                                (0x7fU 
                                                                 & ((IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter) 
                                                                    - (IData)(0x16U))))
                                                : (
                                                   VL_GTS_III(1,7,7, 0x7cU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                                    ? 
                                                   VL_EXTENDS_II(8,7, 
                                                                 (0x7fU 
                                                                  & ((IData)(0x16U) 
                                                                     + (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))))
                                                    : 
                                                   ((0x80U 
                                                     & ((IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter) 
                                                        << 1U)) 
                                                    | (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)))))),6);
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
