// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VResetAsTypeOfBoolTester.h for the primary calling header

#include "VResetAsTypeOfBoolTester.h"
#include "VResetAsTypeOfBoolTester__Syms.h"

//==========

VResetAsTypeOfBoolTester::VResetAsTypeOfBoolTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VResetAsTypeOfBoolTester__Syms* __restrict vlSymsp = __VlSymsp = new VResetAsTypeOfBoolTester__Syms(_vcontextp__, this, name());
    VResetAsTypeOfBoolTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VResetAsTypeOfBoolTester::__Vconfigure(VResetAsTypeOfBoolTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VResetAsTypeOfBoolTester::~VResetAsTypeOfBoolTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VResetAsTypeOfBoolTester::_eval_initial(VResetAsTypeOfBoolTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetAsTypeOfBoolTester::_eval_initial\n"); );
    VResetAsTypeOfBoolTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VResetAsTypeOfBoolTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetAsTypeOfBoolTester::final\n"); );
    // Variables
    VResetAsTypeOfBoolTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VResetAsTypeOfBoolTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VResetAsTypeOfBoolTester::_eval_settle(VResetAsTypeOfBoolTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetAsTypeOfBoolTester::_eval_settle\n"); );
    VResetAsTypeOfBoolTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VResetAsTypeOfBoolTester::_ctor_var_reset(VResetAsTypeOfBoolTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetAsTypeOfBoolTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
