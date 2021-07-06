// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalSetBinaryPointTester.h for the primary calling header

#include "VIntervalSetBinaryPointTester.h"
#include "VIntervalSetBinaryPointTester__Syms.h"

//==========

VIntervalSetBinaryPointTester::VIntervalSetBinaryPointTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp = __VlSymsp = new VIntervalSetBinaryPointTester__Syms(_vcontextp__, this, name());
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VIntervalSetBinaryPointTester::__Vconfigure(VIntervalSetBinaryPointTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VIntervalSetBinaryPointTester::~VIntervalSetBinaryPointTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIntervalSetBinaryPointTester::_eval_initial(VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::_eval_initial\n"); );
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIntervalSetBinaryPointTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::final\n"); );
    // Variables
    VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalSetBinaryPointTester::_eval_settle(VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::_eval_settle\n"); );
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalSetBinaryPointTester::_ctor_var_reset(VIntervalSetBinaryPointTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
