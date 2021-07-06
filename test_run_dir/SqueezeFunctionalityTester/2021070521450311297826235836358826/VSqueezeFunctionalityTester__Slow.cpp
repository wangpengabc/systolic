// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSqueezeFunctionalityTester.h for the primary calling header

#include "VSqueezeFunctionalityTester.h"
#include "VSqueezeFunctionalityTester__Syms.h"

//==========

VSqueezeFunctionalityTester::VSqueezeFunctionalityTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = __VlSymsp = new VSqueezeFunctionalityTester__Syms(_vcontextp__, this, name());
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VSqueezeFunctionalityTester::__Vconfigure(VSqueezeFunctionalityTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VSqueezeFunctionalityTester::~VSqueezeFunctionalityTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VSqueezeFunctionalityTester::_settle__TOP__2(VSqueezeFunctionalityTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_settle__TOP__2\n"); );
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SqueezeFunctionalityTester__DOT___counter_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->SqueezeFunctionalityTester__DOT__counter)));
}

void VSqueezeFunctionalityTester::_eval_initial(VSqueezeFunctionalityTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_eval_initial\n"); );
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSqueezeFunctionalityTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::final\n"); );
    // Variables
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSqueezeFunctionalityTester::_eval_settle(VSqueezeFunctionalityTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_eval_settle\n"); );
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSqueezeFunctionalityTester::_ctor_var_reset(VSqueezeFunctionalityTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->SqueezeFunctionalityTester__DOT__counter = VL_RAND_RESET_I(10);
    self->SqueezeFunctionalityTester__DOT___counter_T_1 = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
