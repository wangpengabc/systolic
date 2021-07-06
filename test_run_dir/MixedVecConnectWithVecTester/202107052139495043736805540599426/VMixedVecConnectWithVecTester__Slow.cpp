// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecConnectWithVecTester.h for the primary calling header

#include "VMixedVecConnectWithVecTester.h"
#include "VMixedVecConnectWithVecTester__Syms.h"

//==========

VMixedVecConnectWithVecTester::VMixedVecConnectWithVecTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecConnectWithVecTester__Syms(_vcontextp__, this, name());
    VMixedVecConnectWithVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecConnectWithVecTester::__Vconfigure(VMixedVecConnectWithVecTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecConnectWithVecTester::~VMixedVecConnectWithVecTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecConnectWithVecTester::_eval_initial(VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithVecTester::_eval_initial\n"); );
    VMixedVecConnectWithVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecConnectWithVecTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithVecTester::final\n"); );
    // Variables
    VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecConnectWithVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecConnectWithVecTester::_eval_settle(VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithVecTester::_eval_settle\n"); );
    VMixedVecConnectWithVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecConnectWithVecTester::_ctor_var_reset(VMixedVecConnectWithVecTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithVecTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
