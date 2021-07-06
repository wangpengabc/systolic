// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAspectTester.h for the primary calling header

#include "VAspectTester.h"
#include "VAspectTester__Syms.h"

//==========

VAspectTester::VAspectTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAspectTester__Syms* __restrict vlSymsp = __VlSymsp = new VAspectTester__Syms(_vcontextp__, this, name());
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAspectTester::__Vconfigure(VAspectTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAspectTester::~VAspectTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAspectTester::_settle__TOP__2(VAspectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_settle__TOP__2\n"); );
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AspectTester__DOT___counter_T_1 = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlTOPp->AspectTester__DOT__counter)));
}

void VAspectTester::_eval_initial(VAspectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_eval_initial\n"); );
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAspectTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::final\n"); );
    // Variables
    VAspectTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAspectTester::_eval_settle(VAspectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_eval_settle\n"); );
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VAspectTester::_ctor_var_reset(VAspectTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->AspectTester__DOT__counter = VL_RAND_RESET_I(3);
    self->AspectTester__DOT___counter_T_1 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
