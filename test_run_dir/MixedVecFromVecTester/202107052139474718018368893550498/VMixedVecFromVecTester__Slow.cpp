// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecFromVecTester.h for the primary calling header

#include "VMixedVecFromVecTester.h"
#include "VMixedVecFromVecTester__Syms.h"

//==========

VMixedVecFromVecTester::VMixedVecFromVecTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecFromVecTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecFromVecTester__Syms(_vcontextp__, this, name());
    VMixedVecFromVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecFromVecTester::__Vconfigure(VMixedVecFromVecTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecFromVecTester::~VMixedVecFromVecTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecFromVecTester::_eval_initial(VMixedVecFromVecTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecFromVecTester::_eval_initial\n"); );
    VMixedVecFromVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecFromVecTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecFromVecTester::final\n"); );
    // Variables
    VMixedVecFromVecTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecFromVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecFromVecTester::_eval_settle(VMixedVecFromVecTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecFromVecTester::_eval_settle\n"); );
    VMixedVecFromVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecFromVecTester::_ctor_var_reset(VMixedVecFromVecTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecFromVecTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
