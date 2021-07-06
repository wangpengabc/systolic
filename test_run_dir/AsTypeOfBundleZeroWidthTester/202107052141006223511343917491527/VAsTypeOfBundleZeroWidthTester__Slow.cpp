// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsTypeOfBundleZeroWidthTester.h for the primary calling header

#include "VAsTypeOfBundleZeroWidthTester.h"
#include "VAsTypeOfBundleZeroWidthTester__Syms.h"

//==========

VAsTypeOfBundleZeroWidthTester::VAsTypeOfBundleZeroWidthTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsTypeOfBundleZeroWidthTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsTypeOfBundleZeroWidthTester__Syms(_vcontextp__, this, name());
    VAsTypeOfBundleZeroWidthTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsTypeOfBundleZeroWidthTester::__Vconfigure(VAsTypeOfBundleZeroWidthTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsTypeOfBundleZeroWidthTester::~VAsTypeOfBundleZeroWidthTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsTypeOfBundleZeroWidthTester::_eval_initial(VAsTypeOfBundleZeroWidthTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester::_eval_initial\n"); );
    VAsTypeOfBundleZeroWidthTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAsTypeOfBundleZeroWidthTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester::final\n"); );
    // Variables
    VAsTypeOfBundleZeroWidthTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsTypeOfBundleZeroWidthTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfBundleZeroWidthTester::_eval_settle(VAsTypeOfBundleZeroWidthTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester::_eval_settle\n"); );
    VAsTypeOfBundleZeroWidthTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfBundleZeroWidthTester::_ctor_var_reset(VAsTypeOfBundleZeroWidthTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
