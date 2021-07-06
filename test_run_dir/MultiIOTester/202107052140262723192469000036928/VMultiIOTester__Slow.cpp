// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiIOTester.h for the primary calling header

#include "VMultiIOTester.h"
#include "VMultiIOTester__Syms.h"

//==========

VMultiIOTester::VMultiIOTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMultiIOTester__Syms* __restrict vlSymsp = __VlSymsp = new VMultiIOTester__Syms(_vcontextp__, this, name());
    VMultiIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMultiIOTester::__Vconfigure(VMultiIOTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMultiIOTester::~VMultiIOTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMultiIOTester::_eval_initial(VMultiIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiIOTester::_eval_initial\n"); );
    VMultiIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMultiIOTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiIOTester::final\n"); );
    // Variables
    VMultiIOTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMultiIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiIOTester::_eval_settle(VMultiIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiIOTester::_eval_settle\n"); );
    VMultiIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiIOTester::_ctor_var_reset(VMultiIOTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiIOTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
