// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedOneHotTester.h for the primary calling header

#include "VParameterizedOneHotTester.h"
#include "VParameterizedOneHotTester__Syms.h"

//==========

VParameterizedOneHotTester::VParameterizedOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = __VlSymsp = new VParameterizedOneHotTester__Syms(_vcontextp__, this, name());
    VParameterizedOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VParameterizedOneHotTester::__Vconfigure(VParameterizedOneHotTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VParameterizedOneHotTester::~VParameterizedOneHotTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VParameterizedOneHotTester::_eval_initial(VParameterizedOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester::_eval_initial\n"); );
    VParameterizedOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VParameterizedOneHotTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester::final\n"); );
    // Variables
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VParameterizedOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParameterizedOneHotTester::_eval_settle(VParameterizedOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester::_eval_settle\n"); );
    VParameterizedOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParameterizedOneHotTester::_ctor_var_reset(VParameterizedOneHotTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
