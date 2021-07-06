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
            tracep->chgBit(oldp+3,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3));
            tracep->chgBit(oldp+4,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4));
            tracep->chgBit(oldp+5,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5));
            tracep->chgBit(oldp+6,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6));
            tracep->chgBit(oldp+7,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7));
            tracep->chgBit(oldp+8,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8));
            tracep->chgBit(oldp+9,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9));
            tracep->chgBit(oldp+10,(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10));
            tracep->chgCData(oldp+11,(vlTOPp->LFSRMaxPeriod__DOT__rv_lo),5);
            tracep->chgCData(oldp+12,((((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10) 
                                        << 5U) | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9) 
                                                   << 4U) 
                                                  | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8) 
                                                      << 3U) 
                                                     | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7) 
                                                         << 2U) 
                                                        | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6) 
                                                            << 1U) 
                                                           | (IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5))))))),6);
            tracep->chgSData(oldp+13,(vlTOPp->LFSRMaxPeriod__DOT__rv),11);
            tracep->chgBit(oldp+14,(vlTOPp->LFSRMaxPeriod__DOT__started));
            tracep->chgSData(oldp+15,(vlTOPp->LFSRMaxPeriod__DOT__seed),11);
            tracep->chgSData(oldp+16,(vlTOPp->LFSRMaxPeriod__DOT__wrap_value),11);
            tracep->chgBit(oldp+17,((0x7feU == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value))));
            tracep->chgBit(oldp+18,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
                                     & (0x7feU == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value)))));
            tracep->chgSData(oldp+19,(vlTOPp->LFSRMaxPeriod__DOT__last),11);
        }
        tracep->chgBit(oldp+20,(vlTOPp->clock));
        tracep->chgBit(oldp+21,(vlTOPp->reset));
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