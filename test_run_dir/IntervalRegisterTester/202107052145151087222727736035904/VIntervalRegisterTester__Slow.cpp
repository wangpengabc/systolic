// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalRegisterTester.h for the primary calling header

#include "VIntervalRegisterTester.h"
#include "VIntervalRegisterTester__Syms.h"

//==========

VIntervalRegisterTester::VIntervalRegisterTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VIntervalRegisterTester__Syms* __restrict vlSymsp = __VlSymsp = new VIntervalRegisterTester__Syms(_vcontextp__, this, name());
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VIntervalRegisterTester::__Vconfigure(VIntervalRegisterTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VIntervalRegisterTester::~VIntervalRegisterTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIntervalRegisterTester::_settle__TOP__2(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_settle__TOP__2\n"); );
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IntervalRegisterTester__DOT___counter_T_1 
        = (0xfU & ((IData)(1U) + (0x1fU & VL_EXTENDS_II(5,4, (IData)(vlTOPp->IntervalRegisterTester__DOT__counter)))));
}

void VIntervalRegisterTester::_eval_initial(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_eval_initial\n"); );
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIntervalRegisterTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::final\n"); );
    // Variables
    VIntervalRegisterTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalRegisterTester::_eval_settle(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_eval_settle\n"); );
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VIntervalRegisterTester::_ctor_var_reset(VIntervalRegisterTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->IntervalRegisterTester__DOT__counter = VL_RAND_RESET_I(4);
    self->IntervalRegisterTester__DOT___counter_T_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
