// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecRegTester.h for the primary calling header

#include "VMixedVecRegTester.h"
#include "VMixedVecRegTester__Syms.h"

//==========

VMixedVecRegTester::VMixedVecRegTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecRegTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecRegTester__Syms(_vcontextp__, this, name());
    VMixedVecRegTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecRegTester::__Vconfigure(VMixedVecRegTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecRegTester::~VMixedVecRegTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecRegTester::_eval_initial(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_eval_initial\n"); );
    VMixedVecRegTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecRegTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::final\n"); );
    // Variables
    VMixedVecRegTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecRegTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecRegTester::_eval_settle(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_eval_settle\n"); );
    VMixedVecRegTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecRegTester::_ctor_var_reset(VMixedVecRegTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->MixedVecRegTester__DOT__doneReg = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
