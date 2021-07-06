// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFixedPointOneHotTester.h for the primary calling header

#include "VFixedPointOneHotTester.h"
#include "VFixedPointOneHotTester__Syms.h"

//==========

VFixedPointOneHotTester::VFixedPointOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VFixedPointOneHotTester__Syms* __restrict vlSymsp = __VlSymsp = new VFixedPointOneHotTester__Syms(_vcontextp__, this, name());
    VFixedPointOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VFixedPointOneHotTester::__Vconfigure(VFixedPointOneHotTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VFixedPointOneHotTester::~VFixedPointOneHotTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VFixedPointOneHotTester::_eval_initial(VFixedPointOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFixedPointOneHotTester::_eval_initial\n"); );
    VFixedPointOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VFixedPointOneHotTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFixedPointOneHotTester::final\n"); );
    // Variables
    VFixedPointOneHotTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFixedPointOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFixedPointOneHotTester::_eval_settle(VFixedPointOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFixedPointOneHotTester::_eval_settle\n"); );
    VFixedPointOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFixedPointOneHotTester::_ctor_var_reset(VFixedPointOneHotTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFixedPointOneHotTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
