// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPopCountTester.h for the primary calling header

#include "VPopCountTester.h"
#include "VPopCountTester__Syms.h"

//==========

VPopCountTester::VPopCountTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VPopCountTester__Syms* __restrict vlSymsp = __VlSymsp = new VPopCountTester__Syms(_vcontextp__, this, name());
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VPopCountTester::__Vconfigure(VPopCountTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VPopCountTester::~VPopCountTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VPopCountTester::_settle__TOP__2(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_settle__TOP__2\n"); );
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PopCountTester__DOT___x_T_1 = (7U & ((IData)(1U) 
                                                 + (IData)(vlTOPp->PopCountTester__DOT__x)));
}

void VPopCountTester::_eval_initial(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_eval_initial\n"); );
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPopCountTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::final\n"); );
    // Variables
    VPopCountTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPopCountTester::_eval_settle(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_eval_settle\n"); );
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VPopCountTester::_ctor_var_reset(VPopCountTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->PopCountTester__DOT__x = VL_RAND_RESET_I(3);
    self->PopCountTester__DOT___x_T_1 = VL_RAND_RESET_I(3);
    self->PopCountTester__DOT__REG = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
