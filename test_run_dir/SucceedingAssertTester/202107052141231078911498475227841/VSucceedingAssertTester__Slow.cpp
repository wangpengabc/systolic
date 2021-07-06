// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSucceedingAssertTester.h for the primary calling header

#include "VSucceedingAssertTester.h"
#include "VSucceedingAssertTester__Syms.h"

//==========

VSucceedingAssertTester::VSucceedingAssertTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VSucceedingAssertTester__Syms* __restrict vlSymsp = __VlSymsp = new VSucceedingAssertTester__Syms(_vcontextp__, this, name());
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VSucceedingAssertTester::__Vconfigure(VSucceedingAssertTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VSucceedingAssertTester::~VSucceedingAssertTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VSucceedingAssertTester::_settle__TOP__2(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_settle__TOP__2\n"); );
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SucceedingAssertTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->SucceedingAssertTester__DOT__done_value)));
}

void VSucceedingAssertTester::_eval_initial(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_eval_initial\n"); );
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSucceedingAssertTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::final\n"); );
    // Variables
    VSucceedingAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSucceedingAssertTester::_eval_settle(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_eval_settle\n"); );
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSucceedingAssertTester::_ctor_var_reset(VSucceedingAssertTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->SucceedingAssertTester__DOT__done_value = VL_RAND_RESET_I(2);
    self->SucceedingAssertTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
