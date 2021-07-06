// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordQueueTester.h for the primary calling header

#include "VRecordQueueTester.h"
#include "VRecordQueueTester__Syms.h"

//==========

VRecordQueueTester::VRecordQueueTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VRecordQueueTester__Syms* __restrict vlSymsp = __VlSymsp = new VRecordQueueTester__Syms(_vcontextp__, this, name());
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VRecordQueueTester::__Vconfigure(VRecordQueueTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VRecordQueueTester::~VRecordQueueTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VRecordQueueTester::_settle__TOP__2(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_settle__TOP__2\n"); );
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->RecordQueueTester__DOT__queue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value)));
    vlTOPp->RecordQueueTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__cycle)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT__ptr_match 
        = ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value));
    vlTOPp->RecordQueueTester__DOT__queue__DOT__empty 
        = ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__maybe_full)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT__full 
        = ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__ptr_match) 
           & (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__maybe_full));
    vlTOPp->RecordQueueTester__DOT__queue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__full)) 
           & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)));
}

void VRecordQueueTester::_eval_initial(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_eval_initial\n"); );
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRecordQueueTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::final\n"); );
    // Variables
    VRecordQueueTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordQueueTester::_eval_settle(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_eval_settle\n"); );
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VRecordQueueTester::_ctor_var_reset(VRecordQueueTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->RecordQueueTester__DOT__cycle = VL_RAND_RESET_I(2);
    self->RecordQueueTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        self->RecordQueueTester__DOT__queue__DOT__ram_bar[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        self->RecordQueueTester__DOT__queue__DOT__ram_foo[__Vi0] = VL_RAND_RESET_I(32);
    }
    self->RecordQueueTester__DOT__queue__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    self->RecordQueueTester__DOT__queue__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    self->RecordQueueTester__DOT__queue__DOT__maybe_full = VL_RAND_RESET_I(1);
    self->RecordQueueTester__DOT__queue__DOT__ptr_match = VL_RAND_RESET_I(1);
    self->RecordQueueTester__DOT__queue__DOT__empty = VL_RAND_RESET_I(1);
    self->RecordQueueTester__DOT__queue__DOT__full = VL_RAND_RESET_I(1);
    self->RecordQueueTester__DOT__queue__DOT__do_enq = VL_RAND_RESET_I(1);
    self->RecordQueueTester__DOT__queue__DOT___value_T_1 = VL_RAND_RESET_I(2);
    self->RecordQueueTester__DOT__queue__DOT___value_T_3 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
