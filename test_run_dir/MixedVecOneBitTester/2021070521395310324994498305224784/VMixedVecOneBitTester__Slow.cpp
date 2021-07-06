// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecOneBitTester.h for the primary calling header

#include "VMixedVecOneBitTester.h"
#include "VMixedVecOneBitTester__Syms.h"

//==========

VMixedVecOneBitTester::VMixedVecOneBitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecOneBitTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecOneBitTester__Syms(_vcontextp__, this, name());
    VMixedVecOneBitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecOneBitTester::__Vconfigure(VMixedVecOneBitTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecOneBitTester::~VMixedVecOneBitTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecOneBitTester::_settle__TOP__2(VMixedVecOneBitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester::_settle__TOP__2\n"); );
    VMixedVecOneBitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedVecOneBitTester__DOT___GEN_1 = 1U;
}

void VMixedVecOneBitTester::_eval_initial(VMixedVecOneBitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester::_eval_initial\n"); );
    VMixedVecOneBitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecOneBitTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester::final\n"); );
    // Variables
    VMixedVecOneBitTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecOneBitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecOneBitTester::_eval_settle(VMixedVecOneBitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester::_eval_settle\n"); );
    VMixedVecOneBitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VMixedVecOneBitTester::_ctor_var_reset(VMixedVecOneBitTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->MixedVecOneBitTester__DOT__flag = VL_RAND_RESET_I(1);
    self->MixedVecOneBitTester__DOT___GEN_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
