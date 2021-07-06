// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalTester.h for the primary calling header

#include "VIntervalTester.h"
#include "VIntervalTester__Syms.h"

//==========

VIntervalTester::VIntervalTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VIntervalTester__Syms* __restrict vlSymsp = __VlSymsp = new VIntervalTester__Syms(_vcontextp__, this, name());
    VIntervalTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VIntervalTester::__Vconfigure(VIntervalTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VIntervalTester::~VIntervalTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIntervalTester::_settle__TOP__2(VIntervalTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester::_settle__TOP__2\n"); );
    VIntervalTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IntervalTester__DOT__wrap_wrap = (0xaU 
                                              == (IData)(vlTOPp->IntervalTester__DOT__cycle));
    vlTOPp->IntervalTester__DOT___wrap_value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlTOPp->IntervalTester__DOT__cycle)));
}

void VIntervalTester::_eval_initial(VIntervalTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester::_eval_initial\n"); );
    VIntervalTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIntervalTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester::final\n"); );
    // Variables
    VIntervalTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntervalTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalTester::_eval_settle(VIntervalTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester::_eval_settle\n"); );
    VIntervalTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VIntervalTester::_ctor_var_reset(VIntervalTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->IntervalTester__DOT__cycle = VL_RAND_RESET_I(4);
    self->IntervalTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    self->IntervalTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
