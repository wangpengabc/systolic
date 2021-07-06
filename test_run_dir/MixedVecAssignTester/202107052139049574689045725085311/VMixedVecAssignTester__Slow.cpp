// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecAssignTester.h for the primary calling header

#include "VMixedVecAssignTester.h"
#include "VMixedVecAssignTester__Syms.h"

//==========

VMixedVecAssignTester::VMixedVecAssignTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecAssignTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecAssignTester__Syms(_vcontextp__, this, name());
    VMixedVecAssignTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecAssignTester::__Vconfigure(VMixedVecAssignTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecAssignTester::~VMixedVecAssignTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecAssignTester::_eval_initial(VMixedVecAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecAssignTester::_eval_initial\n"); );
    VMixedVecAssignTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecAssignTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecAssignTester::final\n"); );
    // Variables
    VMixedVecAssignTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecAssignTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecAssignTester::_eval_settle(VMixedVecAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecAssignTester::_eval_settle\n"); );
    VMixedVecAssignTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecAssignTester::_ctor_var_reset(VMixedVecAssignTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecAssignTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
