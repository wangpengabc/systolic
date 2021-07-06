// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftTester.h for the primary calling header

#include "VShiftTester.h"
#include "VShiftTester__Syms.h"

//==========

VShiftTester::VShiftTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VShiftTester__Syms* __restrict vlSymsp = __VlSymsp = new VShiftTester__Syms(_vcontextp__, this, name());
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VShiftTester::__Vconfigure(VShiftTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VShiftTester::~VShiftTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VShiftTester::_eval_initial(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_eval_initial\n"); );
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VShiftTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::final\n"); );
    // Variables
    VShiftTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftTester::_eval_settle(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_eval_settle\n"); );
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftTester::_ctor_var_reset(VShiftTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
