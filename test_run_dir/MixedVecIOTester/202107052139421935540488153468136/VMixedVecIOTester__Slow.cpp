// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecIOTester.h for the primary calling header

#include "VMixedVecIOTester.h"
#include "VMixedVecIOTester__Syms.h"

//==========

VMixedVecIOTester::VMixedVecIOTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecIOTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecIOTester__Syms(_vcontextp__, this, name());
    VMixedVecIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecIOTester::__Vconfigure(VMixedVecIOTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecIOTester::~VMixedVecIOTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecIOTester::_eval_initial(VMixedVecIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecIOTester::_eval_initial\n"); );
    VMixedVecIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecIOTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecIOTester::final\n"); );
    // Variables
    VMixedVecIOTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecIOTester::_eval_settle(VMixedVecIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecIOTester::_eval_settle\n"); );
    VMixedVecIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecIOTester::_ctor_var_reset(VMixedVecIOTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecIOTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
