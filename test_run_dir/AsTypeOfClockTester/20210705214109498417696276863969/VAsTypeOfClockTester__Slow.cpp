// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsTypeOfClockTester.h for the primary calling header

#include "VAsTypeOfClockTester.h"
#include "VAsTypeOfClockTester__Syms.h"

//==========

VAsTypeOfClockTester::VAsTypeOfClockTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsTypeOfClockTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsTypeOfClockTester__Syms(_vcontextp__, this, name());
    VAsTypeOfClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsTypeOfClockTester::__Vconfigure(VAsTypeOfClockTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsTypeOfClockTester::~VAsTypeOfClockTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsTypeOfClockTester::_eval_initial(VAsTypeOfClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfClockTester::_eval_initial\n"); );
    VAsTypeOfClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAsTypeOfClockTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfClockTester::final\n"); );
    // Variables
    VAsTypeOfClockTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsTypeOfClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfClockTester::_eval_settle(VAsTypeOfClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfClockTester::_eval_settle\n"); );
    VAsTypeOfClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfClockTester::_ctor_var_reset(VAsTypeOfClockTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfClockTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
