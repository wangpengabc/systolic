// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordQueueTester__Syms.h"


void VRecordQueueTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VRecordQueueTester__Syms* __restrict vlSymsp = static_cast<VRecordQueueTester__Syms*>(userp);
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VRecordQueueTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VRecordQueueTester__Syms* __restrict vlSymsp = static_cast<VRecordQueueTester__Syms*>(userp);
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__full)))));
            tracep->chgBit(oldp+1,((0U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle))));
            tracep->chgBit(oldp+2,((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__empty)))));
            tracep->chgIData(oldp+3,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar
                                     [vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]),32);
            tracep->chgIData(oldp+4,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo
                                     [vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]),32);
            tracep->chgCData(oldp+5,(vlTOPp->RecordQueueTester__DOT__cycle),2);
            tracep->chgBit(oldp+6,((3U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle))));
            tracep->chgIData(oldp+7,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[0]),32);
            tracep->chgIData(oldp+8,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[1]),32);
            tracep->chgIData(oldp+9,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[2]),32);
            tracep->chgIData(oldp+10,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[3]),32);
            tracep->chgCData(oldp+11,(vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+12,(vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+13,(((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__full)) 
                                     & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)))));
            tracep->chgIData(oldp+14,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[0]),32);
            tracep->chgIData(oldp+15,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[1]),32);
            tracep->chgIData(oldp+16,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[2]),32);
            tracep->chgIData(oldp+17,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[3]),32);
            tracep->chgBit(oldp+18,(vlTOPp->RecordQueueTester__DOT__queue__DOT__maybe_full));
            tracep->chgBit(oldp+19,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ptr_match));
            tracep->chgBit(oldp+20,(vlTOPp->RecordQueueTester__DOT__queue__DOT__empty));
            tracep->chgBit(oldp+21,(vlTOPp->RecordQueueTester__DOT__queue__DOT__full));
            tracep->chgBit(oldp+22,(vlTOPp->RecordQueueTester__DOT__queue__DOT__do_enq));
        }
        tracep->chgBit(oldp+23,(vlTOPp->clock));
        tracep->chgBit(oldp+24,(vlTOPp->reset));
    }
}

void VRecordQueueTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VRecordQueueTester__Syms* __restrict vlSymsp = static_cast<VRecordQueueTester__Syms*>(userp);
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
