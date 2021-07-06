// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetQueueTester__Syms.h"


void VAsyncResetQueueTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetQueueTester__Syms*>(userp);
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VAsyncResetQueueTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetQueueTester__Syms*>(userp);
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->AsyncResetQueueTester__DOT__queue_clock));
            tracep->chgCData(oldp+1,(vlTOPp->AsyncResetQueueTester__DOT__cDiv_value),2);
            tracep->chgCData(oldp+2,(vlTOPp->AsyncResetQueueTester__DOT__count),4);
            tracep->chgBit(oldp+3,((0xfU == (IData)(vlTOPp->AsyncResetQueueTester__DOT__count))));
            tracep->chgBit(oldp+4,(vlTOPp->AsyncResetQueueTester__DOT__doCheck));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+5,((1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full)))));
            tracep->chgCData(oldp+6,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+7,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__maybe_full));
            tracep->chgBit(oldp+8,((0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value))));
            tracep->chgBit(oldp+9,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full));
        }
        tracep->chgBit(oldp+10,(vlTOPp->clock));
        tracep->chgBit(oldp+11,(vlTOPp->reset));
        tracep->chgBit(oldp+12,(vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext));
        tracep->chgCData(oldp+13,(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count),3);
    }
}

void VAsyncResetQueueTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = static_cast<VAsyncResetQueueTester__Syms*>(userp);
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
