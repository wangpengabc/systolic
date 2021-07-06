// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalTester2.h for the primary calling header

#include "VIntervalTester2.h"
#include "VIntervalTester2__Syms.h"

//==========

VIntervalTester2::VIntervalTester2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VIntervalTester2__Syms* __restrict vlSymsp = __VlSymsp = new VIntervalTester2__Syms(_vcontextp__, this, name());
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VIntervalTester2::__Vconfigure(VIntervalTester2__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VIntervalTester2::~VIntervalTester2() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIntervalTester2::_settle__TOP__2(VIntervalTester2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_settle__TOP__2\n"); );
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IntervalTester2__DOT__wrap_wrap = (0xaU 
                                               == (IData)(vlTOPp->IntervalTester2__DOT__cycle));
    vlTOPp->IntervalTester2__DOT___wrap_value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlTOPp->IntervalTester2__DOT__cycle)));
}

void VIntervalTester2::_eval_initial(VIntervalTester2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_eval_initial\n"); );
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIntervalTester2::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::final\n"); );
    // Variables
    VIntervalTester2__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalTester2::_eval_settle(VIntervalTester2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_eval_settle\n"); );
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VIntervalTester2::_ctor_var_reset(VIntervalTester2* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->IntervalTester2__DOT__cycle = VL_RAND_RESET_I(4);
    self->IntervalTester2__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    self->IntervalTester2__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
