// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSomeOptionBundleTester.h for the primary calling header

#include "VSomeOptionBundleTester.h"
#include "VSomeOptionBundleTester__Syms.h"

//==========

VSomeOptionBundleTester::VSomeOptionBundleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VSomeOptionBundleTester__Syms* __restrict vlSymsp = __VlSymsp = new VSomeOptionBundleTester__Syms(_vcontextp__, this, name());
    VSomeOptionBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VSomeOptionBundleTester::__Vconfigure(VSomeOptionBundleTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VSomeOptionBundleTester::~VSomeOptionBundleTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VSomeOptionBundleTester::_eval_initial(VSomeOptionBundleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSomeOptionBundleTester::_eval_initial\n"); );
    VSomeOptionBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSomeOptionBundleTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSomeOptionBundleTester::final\n"); );
    // Variables
    VSomeOptionBundleTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSomeOptionBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSomeOptionBundleTester::_eval_settle(VSomeOptionBundleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSomeOptionBundleTester::_eval_settle\n"); );
    VSomeOptionBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSomeOptionBundleTester::_ctor_var_reset(VSomeOptionBundleTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSomeOptionBundleTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
