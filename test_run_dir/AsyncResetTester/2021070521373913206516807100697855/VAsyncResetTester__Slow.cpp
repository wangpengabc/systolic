// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetTester.h for the primary calling header

#include "VAsyncResetTester.h"
#include "VAsyncResetTester__Syms.h"

//==========

VAsyncResetTester::VAsyncResetTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsyncResetTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsyncResetTester__Syms(_vcontextp__, this, name());
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsyncResetTester::__Vconfigure(VAsyncResetTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsyncResetTester::~VAsyncResetTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsyncResetTester::_settle__TOP__2(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_settle__TOP__2\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetTester__DOT__cDiv_value)));
    vlTOPp->AsyncResetTester__DOT__slowClk = (3U == (IData)(vlTOPp->AsyncResetTester__DOT__cDiv_value));
    vlTOPp->AsyncResetTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->AsyncResetTester__DOT__count)));
}

void VAsyncResetTester::_eval_initial(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_eval_initial\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext 
        = vlTOPp->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetTester__DOT__slowClk 
        = vlTOPp->AsyncResetTester__DOT__slowClk;
}

void VAsyncResetTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::final\n"); );
    // Variables
    VAsyncResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsyncResetTester::_eval_settle(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_eval_settle\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VAsyncResetTester::_ctor_var_reset(VAsyncResetTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->AsyncResetTester__DOT__cDiv_value = VL_RAND_RESET_I(2);
    self->AsyncResetTester__DOT___cDiv_wrap_value_T_1 = VL_RAND_RESET_I(2);
    self->AsyncResetTester__DOT__slowClk = VL_RAND_RESET_I(1);
    self->AsyncResetTester__DOT__count = VL_RAND_RESET_I(4);
    self->AsyncResetTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    self->AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    self->AsyncResetTester__DOT__reg_ = VL_RAND_RESET_I(8);
    self->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    self->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
