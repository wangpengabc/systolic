// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetAggregateTester.h for the primary calling header

#include "VAsyncResetAggregateTester.h"
#include "VAsyncResetAggregateTester__Syms.h"

//==========

VAsyncResetAggregateTester::VAsyncResetAggregateTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsyncResetAggregateTester__Syms(_vcontextp__, this, name());
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsyncResetAggregateTester::__Vconfigure(VAsyncResetAggregateTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsyncResetAggregateTester::~VAsyncResetAggregateTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsyncResetAggregateTester::_settle__TOP__2(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_settle__TOP__2\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetAggregateTester__DOT__cDiv_value)));
    vlTOPp->AsyncResetAggregateTester__DOT__slowClk 
        = (3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__cDiv_value));
    vlTOPp->AsyncResetAggregateTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)));
}

void VAsyncResetAggregateTester::_eval_initial(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_eval_initial\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
        = vlTOPp->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk 
        = vlTOPp->AsyncResetAggregateTester__DOT__slowClk;
}

void VAsyncResetAggregateTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::final\n"); );
    // Variables
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsyncResetAggregateTester::_eval_settle(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_eval_settle\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VAsyncResetAggregateTester::_ctor_var_reset(VAsyncResetAggregateTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->AsyncResetAggregateTester__DOT__cDiv_value = VL_RAND_RESET_I(2);
    self->AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1 = VL_RAND_RESET_I(2);
    self->AsyncResetAggregateTester__DOT__slowClk = VL_RAND_RESET_I(1);
    self->AsyncResetAggregateTester__DOT__count = VL_RAND_RESET_I(4);
    self->AsyncResetAggregateTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    self->AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    self->AsyncResetAggregateTester__DOT__reg_0_x = VL_RAND_RESET_I(8);
    self->AsyncResetAggregateTester__DOT__reg_0_y = VL_RAND_RESET_I(8);
    self->AsyncResetAggregateTester__DOT__reg_1_x = VL_RAND_RESET_I(8);
    self->AsyncResetAggregateTester__DOT__reg_1_y = VL_RAND_RESET_I(8);
    self->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    self->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
