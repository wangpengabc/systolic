// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetQueueTester.h for the primary calling header

#include "VAsyncResetQueueTester.h"
#include "VAsyncResetQueueTester__Syms.h"

//==========

VAsyncResetQueueTester::VAsyncResetQueueTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsyncResetQueueTester__Syms(_vcontextp__, this, name());
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsyncResetQueueTester::__Vconfigure(VAsyncResetQueueTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsyncResetQueueTester::~VAsyncResetQueueTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsyncResetQueueTester::_settle__TOP__2(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_settle__TOP__2\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetQueueTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetQueueTester__DOT__cDiv_value)));
    vlTOPp->AsyncResetQueueTester__DOT__queue_clock 
        = (3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__cDiv_value));
    vlTOPp->AsyncResetQueueTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->AsyncResetQueueTester__DOT__count)));
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)));
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full 
        = ((0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)) 
           & (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__maybe_full));
    vlTOPp->AsyncResetQueueTester__DOT__queue_io_count 
        = ((((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__maybe_full) 
             & (0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)))
             ? 4U : 0U) | (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value));
}

void VAsyncResetQueueTester::_eval_initial(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_eval_initial\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
        = vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock 
        = vlTOPp->AsyncResetQueueTester__DOT__queue_clock;
}

void VAsyncResetQueueTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::final\n"); );
    // Variables
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsyncResetQueueTester::_eval_settle(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_eval_settle\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VAsyncResetQueueTester::_ctor_var_reset(VAsyncResetQueueTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->AsyncResetQueueTester__DOT__queue_clock = VL_RAND_RESET_I(1);
    self->AsyncResetQueueTester__DOT__queue_io_count = VL_RAND_RESET_I(3);
    self->AsyncResetQueueTester__DOT__cDiv_value = VL_RAND_RESET_I(2);
    self->AsyncResetQueueTester__DOT___cDiv_wrap_value_T_1 = VL_RAND_RESET_I(2);
    self->AsyncResetQueueTester__DOT__count = VL_RAND_RESET_I(4);
    self->AsyncResetQueueTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    self->AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    self->AsyncResetQueueTester__DOT__doCheck = VL_RAND_RESET_I(1);
    self->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    self->AsyncResetQueueTester__DOT__queue__DOT__maybe_full = VL_RAND_RESET_I(1);
    self->AsyncResetQueueTester__DOT__queue__DOT__full = VL_RAND_RESET_I(1);
    self->AsyncResetQueueTester__DOT__queue__DOT___value_T_1 = VL_RAND_RESET_I(2);
    self->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    self->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
