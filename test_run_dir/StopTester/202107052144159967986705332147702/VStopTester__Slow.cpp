// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStopTester.h for the primary calling header

#include "VStopTester.h"
#include "VStopTester__Syms.h"

//==========

VStopTester::VStopTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VStopTester__Syms* __restrict vlSymsp = __VlSymsp = new VStopTester__Syms(_vcontextp__, this, name());
    VStopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VStopTester::__Vconfigure(VStopTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VStopTester::~VStopTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VStopTester::_eval_initial(VStopTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopTester::_eval_initial\n"); );
    VStopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VStopTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopTester::final\n"); );
    // Variables
    VStopTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStopTester::_eval_settle(VStopTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopTester::_eval_settle\n"); );
    VStopTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStopTester::_ctor_var_reset(VStopTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
