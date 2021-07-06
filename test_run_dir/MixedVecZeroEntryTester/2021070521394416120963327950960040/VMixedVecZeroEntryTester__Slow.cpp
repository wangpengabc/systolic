// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecZeroEntryTester.h for the primary calling header

#include "VMixedVecZeroEntryTester.h"
#include "VMixedVecZeroEntryTester__Syms.h"

//==========

VMixedVecZeroEntryTester::VMixedVecZeroEntryTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecZeroEntryTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecZeroEntryTester__Syms(_vcontextp__, this, name());
    VMixedVecZeroEntryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecZeroEntryTester::__Vconfigure(VMixedVecZeroEntryTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecZeroEntryTester::~VMixedVecZeroEntryTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecZeroEntryTester::_eval_initial(VMixedVecZeroEntryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecZeroEntryTester::_eval_initial\n"); );
    VMixedVecZeroEntryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecZeroEntryTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecZeroEntryTester::final\n"); );
    // Variables
    VMixedVecZeroEntryTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecZeroEntryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecZeroEntryTester::_eval_settle(VMixedVecZeroEntryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecZeroEntryTester::_eval_settle\n"); );
    VMixedVecZeroEntryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecZeroEntryTester::_ctor_var_reset(VMixedVecZeroEntryTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecZeroEntryTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
