// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRMaxPeriod__Syms.h"


void VLFSRMaxPeriod::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = static_cast<VLFSRMaxPeriod__Syms*>(userp);
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VLFSRMaxPeriod::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = static_cast<VLFSRMaxPeriod__Syms*>(userp);
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
            tracep->chgBit(oldp+1,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1));
            tracep->chgBit(oldp+2,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2));
            tracep->chgCData(oldp+3,((((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2) 
                                       << 1U) | (IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1))),2);
            tracep->chgCData(oldp+4,(vlTOPp->LFSRMaxPeriod__DOT__rv),3);
            tracep->chgBit(oldp+5,(vlTOPp->LFSRMaxPeriod__DOT__started));
            tracep->chgCData(oldp+6,(vlTOPp->LFSRMaxPeriod__DOT__seed),3);
            tracep->chgCData(oldp+7,(vlTOPp->LFSRMaxPeriod__DOT__wrap_value),3);
            tracep->chgBit(oldp+8,((6U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value))));
            tracep->chgBit(oldp+9,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
                                    & (6U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value)))));
            tracep->chgCData(oldp+10,(vlTOPp->LFSRMaxPeriod__DOT__last),3);
        }
        tracep->chgBit(oldp+11,(vlTOPp->clock));
        tracep->chgBit(oldp+12,(vlTOPp->reset));
    }
}

void VLFSRMaxPeriod::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = static_cast<VLFSRMaxPeriod__Syms*>(userp);
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
