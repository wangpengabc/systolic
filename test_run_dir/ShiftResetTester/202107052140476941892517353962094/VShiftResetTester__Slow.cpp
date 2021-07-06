// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftResetTester.h for the primary calling header

#include "VShiftResetTester.h"
#include "VShiftResetTester__Syms.h"

//==========

VShiftResetTester::VShiftResetTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VShiftResetTester__Syms* __restrict vlSymsp = __VlSymsp = new VShiftResetTester__Syms(_vcontextp__, this, name());
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VShiftResetTester::__Vconfigure(VShiftResetTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VShiftResetTester::~VShiftResetTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VShiftResetTester::_settle__TOP__2(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_settle__TOP__2\n"); );
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ShiftResetTester__DOT__wrap_wrap = (2U 
                                                == (IData)(vlTOPp->ShiftResetTester__DOT__cntVal));
    vlTOPp->ShiftResetTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->ShiftResetTester__DOT__cntVal)));
}

void VShiftResetTester::_eval_initial(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_eval_initial\n"); );
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VShiftResetTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::final\n"); );
    // Variables
    VShiftResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftResetTester::_eval_settle(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_eval_settle\n"); );
    VShiftResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VShiftResetTester::_ctor_var_reset(VShiftResetTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->ShiftResetTester__DOT__cntVal = VL_RAND_RESET_I(2);
    self->ShiftResetTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    self->ShiftResetTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    self->ShiftResetTester__DOT__sr_r = VL_RAND_RESET_I(5);
    self->ShiftResetTester__DOT__sr_r_1 = VL_RAND_RESET_I(5);
    self->ShiftResetTester__DOT__sr_r_2 = VL_RAND_RESET_I(5);
    self->ShiftResetTester__DOT__sr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
