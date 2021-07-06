// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInternalBoreTester.h for the primary calling header

#include "VInternalBoreTester.h"
#include "VInternalBoreTester__Syms.h"

//==========

VInternalBoreTester::VInternalBoreTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VInternalBoreTester__Syms* __restrict vlSymsp = __VlSymsp = new VInternalBoreTester__Syms(_vcontextp__, this, name());
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VInternalBoreTester::__Vconfigure(VInternalBoreTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VInternalBoreTester::~VInternalBoreTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VInternalBoreTester::_settle__TOP__2(VInternalBoreTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester::_settle__TOP__2\n"); );
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->InternalBoreTester__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->InternalBoreTester__DOT__done_value)));
}

void VInternalBoreTester::_eval_initial(VInternalBoreTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester::_eval_initial\n"); );
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VInternalBoreTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester::final\n"); );
    // Variables
    VInternalBoreTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInternalBoreTester::_eval_settle(VInternalBoreTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester::_eval_settle\n"); );
    VInternalBoreTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VInternalBoreTester::_ctor_var_reset(VInternalBoreTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->InternalBoreTester__DOT__done_value = VL_RAND_RESET_I(1);
    self->InternalBoreTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
