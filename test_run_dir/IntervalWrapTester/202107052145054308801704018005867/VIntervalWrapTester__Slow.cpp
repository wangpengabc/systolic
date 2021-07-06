// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalWrapTester.h for the primary calling header

#include "VIntervalWrapTester.h"
#include "VIntervalWrapTester__Syms.h"

//==========

VIntervalWrapTester::VIntervalWrapTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VIntervalWrapTester__Syms* __restrict vlSymsp = __VlSymsp = new VIntervalWrapTester__Syms(_vcontextp__, this, name());
    VIntervalWrapTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VIntervalWrapTester::__Vconfigure(VIntervalWrapTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VIntervalWrapTester::~VIntervalWrapTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIntervalWrapTester::_eval_initial(VIntervalWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester::_eval_initial\n"); );
    VIntervalWrapTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIntervalWrapTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester::final\n"); );
    // Variables
    VIntervalWrapTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntervalWrapTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalWrapTester::_eval_settle(VIntervalWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester::_eval_settle\n"); );
    VIntervalWrapTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalWrapTester::_ctor_var_reset(VIntervalWrapTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
