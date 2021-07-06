// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFormattedAssertTester.h for the primary calling header

#include "VFormattedAssertTester.h"
#include "VFormattedAssertTester__Syms.h"

//==========

VFormattedAssertTester::VFormattedAssertTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VFormattedAssertTester__Syms* __restrict vlSymsp = __VlSymsp = new VFormattedAssertTester__Syms(_vcontextp__, this, name());
    VFormattedAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VFormattedAssertTester::__Vconfigure(VFormattedAssertTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VFormattedAssertTester::~VFormattedAssertTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VFormattedAssertTester::_eval_initial(VFormattedAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_eval_initial\n"); );
    VFormattedAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VFormattedAssertTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::final\n"); );
    // Variables
    VFormattedAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFormattedAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFormattedAssertTester::_eval_settle(VFormattedAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_eval_settle\n"); );
    VFormattedAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFormattedAssertTester::_ctor_var_reset(VFormattedAssertTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
