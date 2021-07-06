// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedAggregateOneHotTester.h for the primary calling header

#include "VParameterizedAggregateOneHotTester.h"
#include "VParameterizedAggregateOneHotTester__Syms.h"

//==========

VParameterizedAggregateOneHotTester::VParameterizedAggregateOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = __VlSymsp = new VParameterizedAggregateOneHotTester__Syms(_vcontextp__, this, name());
    VParameterizedAggregateOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VParameterizedAggregateOneHotTester::__Vconfigure(VParameterizedAggregateOneHotTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VParameterizedAggregateOneHotTester::~VParameterizedAggregateOneHotTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VParameterizedAggregateOneHotTester::_eval_initial(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester::_eval_initial\n"); );
    VParameterizedAggregateOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VParameterizedAggregateOneHotTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester::final\n"); );
    // Variables
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VParameterizedAggregateOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParameterizedAggregateOneHotTester::_eval_settle(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester::_eval_settle\n"); );
    VParameterizedAggregateOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParameterizedAggregateOneHotTester::_ctor_var_reset(VParameterizedAggregateOneHotTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
