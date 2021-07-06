// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleOneHotTester.h for the primary calling header

#include "VSimpleOneHotTester.h"
#include "VSimpleOneHotTester__Syms.h"

//==========

VSimpleOneHotTester::VSimpleOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VSimpleOneHotTester__Syms* __restrict vlSymsp = __VlSymsp = new VSimpleOneHotTester__Syms(_vcontextp__, this, name());
    VSimpleOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VSimpleOneHotTester::__Vconfigure(VSimpleOneHotTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VSimpleOneHotTester::~VSimpleOneHotTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VSimpleOneHotTester::_eval_initial(VSimpleOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleOneHotTester::_eval_initial\n"); );
    VSimpleOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSimpleOneHotTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleOneHotTester::final\n"); );
    // Variables
    VSimpleOneHotTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSimpleOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSimpleOneHotTester::_eval_settle(VSimpleOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleOneHotTester::_eval_settle\n"); );
    VSimpleOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSimpleOneHotTester::_ctor_var_reset(VSimpleOneHotTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleOneHotTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
