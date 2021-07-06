// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStopImmediatelyTester.h for the primary calling header

#include "VStopImmediatelyTester.h"
#include "VStopImmediatelyTester__Syms.h"

//==========

VStopImmediatelyTester::VStopImmediatelyTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VStopImmediatelyTester__Syms* __restrict vlSymsp = __VlSymsp = new VStopImmediatelyTester__Syms(_vcontextp__, this, name());
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VStopImmediatelyTester::__Vconfigure(VStopImmediatelyTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VStopImmediatelyTester::~VStopImmediatelyTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VStopImmediatelyTester::_settle__TOP__2(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_settle__TOP__2\n"); );
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StopImmediatelyTester__DOT___cycle_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)));
}

void VStopImmediatelyTester::_eval_initial(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_eval_initial\n"); );
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VStopImmediatelyTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::final\n"); );
    // Variables
    VStopImmediatelyTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStopImmediatelyTester::_eval_settle(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_eval_settle\n"); );
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VStopImmediatelyTester::_ctor_var_reset(VStopImmediatelyTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->StopImmediatelyTester__DOT__cycle = VL_RAND_RESET_I(4);
    self->StopImmediatelyTester__DOT___cycle_T_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
