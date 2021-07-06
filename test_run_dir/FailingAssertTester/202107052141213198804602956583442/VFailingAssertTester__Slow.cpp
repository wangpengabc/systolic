// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFailingAssertTester.h for the primary calling header

#include "VFailingAssertTester.h"
#include "VFailingAssertTester__Syms.h"

//==========

VFailingAssertTester::VFailingAssertTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VFailingAssertTester__Syms* __restrict vlSymsp = __VlSymsp = new VFailingAssertTester__Syms(_vcontextp__, this, name());
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VFailingAssertTester::__Vconfigure(VFailingAssertTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VFailingAssertTester::~VFailingAssertTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VFailingAssertTester::_settle__TOP__2(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_settle__TOP__2\n"); );
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FailingAssertTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->FailingAssertTester__DOT__done_value)));
}

void VFailingAssertTester::_eval_initial(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_eval_initial\n"); );
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VFailingAssertTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::final\n"); );
    // Variables
    VFailingAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFailingAssertTester::_eval_settle(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_eval_settle\n"); );
    VFailingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VFailingAssertTester::_ctor_var_reset(VFailingAssertTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->FailingAssertTester__DOT__done_value = VL_RAND_RESET_I(2);
    self->FailingAssertTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
