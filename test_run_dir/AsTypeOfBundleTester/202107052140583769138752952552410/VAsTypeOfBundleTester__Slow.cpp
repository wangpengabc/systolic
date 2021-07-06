// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsTypeOfBundleTester.h for the primary calling header

#include "VAsTypeOfBundleTester.h"
#include "VAsTypeOfBundleTester__Syms.h"

//==========

VAsTypeOfBundleTester::VAsTypeOfBundleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsTypeOfBundleTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsTypeOfBundleTester__Syms(_vcontextp__, this, name());
    VAsTypeOfBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsTypeOfBundleTester::__Vconfigure(VAsTypeOfBundleTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsTypeOfBundleTester::~VAsTypeOfBundleTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsTypeOfBundleTester::_eval_initial(VAsTypeOfBundleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleTester::_eval_initial\n"); );
    VAsTypeOfBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAsTypeOfBundleTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleTester::final\n"); );
    // Variables
    VAsTypeOfBundleTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsTypeOfBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfBundleTester::_eval_settle(VAsTypeOfBundleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleTester::_eval_settle\n"); );
    VAsTypeOfBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfBundleTester::_ctor_var_reset(VAsTypeOfBundleTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
