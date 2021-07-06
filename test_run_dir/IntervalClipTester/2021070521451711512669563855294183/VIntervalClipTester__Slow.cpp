// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalClipTester.h for the primary calling header

#include "VIntervalClipTester.h"
#include "VIntervalClipTester__Syms.h"

//==========

VIntervalClipTester::VIntervalClipTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VIntervalClipTester__Syms* __restrict vlSymsp = __VlSymsp = new VIntervalClipTester__Syms(_vcontextp__, this, name());
    VIntervalClipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VIntervalClipTester::__Vconfigure(VIntervalClipTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VIntervalClipTester::~VIntervalClipTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIntervalClipTester::_eval_initial(VIntervalClipTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalClipTester::_eval_initial\n"); );
    VIntervalClipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIntervalClipTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalClipTester::final\n"); );
    // Variables
    VIntervalClipTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntervalClipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalClipTester::_eval_settle(VIntervalClipTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalClipTester::_eval_settle\n"); );
    VIntervalClipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalClipTester::_ctor_var_reset(VIntervalClipTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalClipTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
