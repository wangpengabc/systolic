// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecUIntDynamicIndexTester.h for the primary calling header

#include "VMixedVecUIntDynamicIndexTester.h"
#include "VMixedVecUIntDynamicIndexTester__Syms.h"

//==========

VMixedVecUIntDynamicIndexTester::VMixedVecUIntDynamicIndexTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecUIntDynamicIndexTester__Syms(_vcontextp__, this, name());
    VMixedVecUIntDynamicIndexTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecUIntDynamicIndexTester::__Vconfigure(VMixedVecUIntDynamicIndexTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecUIntDynamicIndexTester::~VMixedVecUIntDynamicIndexTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecUIntDynamicIndexTester::_settle__TOP__2(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_settle__TOP__2\n"); );
    VMixedVecUIntDynamicIndexTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedVecUIntDynamicIndexTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__cycle)));
}

void VMixedVecUIntDynamicIndexTester::_eval_initial(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_eval_initial\n"); );
    VMixedVecUIntDynamicIndexTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecUIntDynamicIndexTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::final\n"); );
    // Variables
    VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecUIntDynamicIndexTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecUIntDynamicIndexTester::_eval_settle(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_eval_settle\n"); );
    VMixedVecUIntDynamicIndexTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VMixedVecUIntDynamicIndexTester::_ctor_var_reset(VMixedVecUIntDynamicIndexTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->MixedVecUIntDynamicIndexTester__DOT__cycle = VL_RAND_RESET_I(2);
    self->MixedVecUIntDynamicIndexTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
