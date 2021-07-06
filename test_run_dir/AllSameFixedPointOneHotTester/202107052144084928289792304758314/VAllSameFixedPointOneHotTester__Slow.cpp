// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAllSameFixedPointOneHotTester.h for the primary calling header

#include "VAllSameFixedPointOneHotTester.h"
#include "VAllSameFixedPointOneHotTester__Syms.h"

//==========

VAllSameFixedPointOneHotTester::VAllSameFixedPointOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAllSameFixedPointOneHotTester__Syms* __restrict vlSymsp = __VlSymsp = new VAllSameFixedPointOneHotTester__Syms(_vcontextp__, this, name());
    VAllSameFixedPointOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAllSameFixedPointOneHotTester::__Vconfigure(VAllSameFixedPointOneHotTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAllSameFixedPointOneHotTester::~VAllSameFixedPointOneHotTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAllSameFixedPointOneHotTester::_eval_initial(VAllSameFixedPointOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAllSameFixedPointOneHotTester::_eval_initial\n"); );
    VAllSameFixedPointOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAllSameFixedPointOneHotTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAllSameFixedPointOneHotTester::final\n"); );
    // Variables
    VAllSameFixedPointOneHotTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAllSameFixedPointOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAllSameFixedPointOneHotTester::_eval_settle(VAllSameFixedPointOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAllSameFixedPointOneHotTester::_eval_settle\n"); );
    VAllSameFixedPointOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAllSameFixedPointOneHotTester::_ctor_var_reset(VAllSameFixedPointOneHotTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAllSameFixedPointOneHotTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
