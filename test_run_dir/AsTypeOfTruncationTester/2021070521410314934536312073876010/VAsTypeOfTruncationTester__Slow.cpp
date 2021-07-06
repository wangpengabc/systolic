// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsTypeOfTruncationTester.h for the primary calling header

#include "VAsTypeOfTruncationTester.h"
#include "VAsTypeOfTruncationTester__Syms.h"

//==========

VAsTypeOfTruncationTester::VAsTypeOfTruncationTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsTypeOfTruncationTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsTypeOfTruncationTester__Syms(_vcontextp__, this, name());
    VAsTypeOfTruncationTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsTypeOfTruncationTester::__Vconfigure(VAsTypeOfTruncationTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsTypeOfTruncationTester::~VAsTypeOfTruncationTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsTypeOfTruncationTester::_eval_initial(VAsTypeOfTruncationTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfTruncationTester::_eval_initial\n"); );
    VAsTypeOfTruncationTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAsTypeOfTruncationTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfTruncationTester::final\n"); );
    // Variables
    VAsTypeOfTruncationTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsTypeOfTruncationTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfTruncationTester::_eval_settle(VAsTypeOfTruncationTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfTruncationTester::_eval_settle\n"); );
    VAsTypeOfTruncationTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfTruncationTester::_ctor_var_reset(VAsTypeOfTruncationTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfTruncationTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
