// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordDigitTester.h for the primary calling header

#include "VRecordDigitTester.h"
#include "VRecordDigitTester__Syms.h"

//==========

VRecordDigitTester::VRecordDigitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VRecordDigitTester__Syms* __restrict vlSymsp = __VlSymsp = new VRecordDigitTester__Syms(_vcontextp__, this, name());
    VRecordDigitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VRecordDigitTester::__Vconfigure(VRecordDigitTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VRecordDigitTester::~VRecordDigitTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VRecordDigitTester::_eval_initial(VRecordDigitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordDigitTester::_eval_initial\n"); );
    VRecordDigitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRecordDigitTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordDigitTester::final\n"); );
    // Variables
    VRecordDigitTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRecordDigitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordDigitTester::_eval_settle(VRecordDigitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordDigitTester::_eval_settle\n"); );
    VRecordDigitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordDigitTester::_ctor_var_reset(VRecordDigitTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordDigitTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
