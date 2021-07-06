// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopTester.h for the primary calling header

#include "VTopTester.h"
#include "VTopTester__Syms.h"

//==========

VTopTester::VTopTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VTopTester__Syms* __restrict vlSymsp = __VlSymsp = new VTopTester__Syms(_vcontextp__, this, name());
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VTopTester::__Vconfigure(VTopTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VTopTester::~VTopTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VTopTester::_settle__TOP__2(VTopTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester::_settle__TOP__2\n"); );
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopTester__DOT___done_wrap_value_T_1 = 
        (1U & ((IData)(1U) + (IData)(vlTOPp->TopTester__DOT__done_value)));
}

void VTopTester::_eval_initial(VTopTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester::_eval_initial\n"); );
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTopTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester::final\n"); );
    // Variables
    VTopTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTopTester::_eval_settle(VTopTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester::_eval_settle\n"); );
    VTopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VTopTester::_ctor_var_reset(VTopTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->TopTester__DOT__done_value = VL_RAND_RESET_I(1);
    self->TopTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
