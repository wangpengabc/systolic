// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoneOptionBundleTester.h for the primary calling header

#include "VNoneOptionBundleTester.h"
#include "VNoneOptionBundleTester__Syms.h"

//==========

VNoneOptionBundleTester::VNoneOptionBundleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VNoneOptionBundleTester__Syms* __restrict vlSymsp = __VlSymsp = new VNoneOptionBundleTester__Syms(_vcontextp__, this, name());
    VNoneOptionBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VNoneOptionBundleTester::__Vconfigure(VNoneOptionBundleTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VNoneOptionBundleTester::~VNoneOptionBundleTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VNoneOptionBundleTester::_eval_initial(VNoneOptionBundleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoneOptionBundleTester::_eval_initial\n"); );
    VNoneOptionBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VNoneOptionBundleTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoneOptionBundleTester::final\n"); );
    // Variables
    VNoneOptionBundleTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VNoneOptionBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VNoneOptionBundleTester::_eval_settle(VNoneOptionBundleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoneOptionBundleTester::_eval_settle\n"); );
    VNoneOptionBundleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VNoneOptionBundleTester::_ctor_var_reset(VNoneOptionBundleTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoneOptionBundleTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
