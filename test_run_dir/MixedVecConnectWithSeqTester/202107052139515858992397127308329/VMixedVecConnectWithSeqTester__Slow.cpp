// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecConnectWithSeqTester.h for the primary calling header

#include "VMixedVecConnectWithSeqTester.h"
#include "VMixedVecConnectWithSeqTester__Syms.h"

//==========

VMixedVecConnectWithSeqTester::VMixedVecConnectWithSeqTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecConnectWithSeqTester__Syms(_vcontextp__, this, name());
    VMixedVecConnectWithSeqTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecConnectWithSeqTester::__Vconfigure(VMixedVecConnectWithSeqTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecConnectWithSeqTester::~VMixedVecConnectWithSeqTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecConnectWithSeqTester::_eval_initial(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_eval_initial\n"); );
    VMixedVecConnectWithSeqTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecConnectWithSeqTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::final\n"); );
    // Variables
    VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecConnectWithSeqTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecConnectWithSeqTester::_eval_settle(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_eval_settle\n"); );
    VMixedVecConnectWithSeqTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecConnectWithSeqTester::_ctor_var_reset(VMixedVecConnectWithSeqTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
