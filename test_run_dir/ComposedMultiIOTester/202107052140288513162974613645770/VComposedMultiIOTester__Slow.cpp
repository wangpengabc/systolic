// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComposedMultiIOTester.h for the primary calling header

#include "VComposedMultiIOTester.h"
#include "VComposedMultiIOTester__Syms.h"

//==========

VComposedMultiIOTester::VComposedMultiIOTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VComposedMultiIOTester__Syms* __restrict vlSymsp = __VlSymsp = new VComposedMultiIOTester__Syms(_vcontextp__, this, name());
    VComposedMultiIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VComposedMultiIOTester::__Vconfigure(VComposedMultiIOTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VComposedMultiIOTester::~VComposedMultiIOTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VComposedMultiIOTester::_eval_initial(VComposedMultiIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComposedMultiIOTester::_eval_initial\n"); );
    VComposedMultiIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VComposedMultiIOTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComposedMultiIOTester::final\n"); );
    // Variables
    VComposedMultiIOTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VComposedMultiIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VComposedMultiIOTester::_eval_settle(VComposedMultiIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComposedMultiIOTester::_eval_settle\n"); );
    VComposedMultiIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VComposedMultiIOTester::_ctor_var_reset(VComposedMultiIOTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComposedMultiIOTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
