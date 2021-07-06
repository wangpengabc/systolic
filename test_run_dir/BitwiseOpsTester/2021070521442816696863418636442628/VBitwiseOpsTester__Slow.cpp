// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitwiseOpsTester.h for the primary calling header

#include "VBitwiseOpsTester.h"
#include "VBitwiseOpsTester__Syms.h"

//==========

VBitwiseOpsTester::VBitwiseOpsTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBitwiseOpsTester__Syms* __restrict vlSymsp = __VlSymsp = new VBitwiseOpsTester__Syms(_vcontextp__, this, name());
    VBitwiseOpsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBitwiseOpsTester::__Vconfigure(VBitwiseOpsTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBitwiseOpsTester::~VBitwiseOpsTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBitwiseOpsTester::_eval_initial(VBitwiseOpsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitwiseOpsTester::_eval_initial\n"); );
    VBitwiseOpsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBitwiseOpsTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitwiseOpsTester::final\n"); );
    // Variables
    VBitwiseOpsTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBitwiseOpsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBitwiseOpsTester::_eval_settle(VBitwiseOpsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitwiseOpsTester::_eval_settle\n"); );
    VBitwiseOpsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBitwiseOpsTester::_ctor_var_reset(VBitwiseOpsTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitwiseOpsTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
