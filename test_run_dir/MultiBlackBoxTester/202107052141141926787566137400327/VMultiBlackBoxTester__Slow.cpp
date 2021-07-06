// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiBlackBoxTester.h for the primary calling header

#include "VMultiBlackBoxTester.h"
#include "VMultiBlackBoxTester__Syms.h"

//==========

VMultiBlackBoxTester::VMultiBlackBoxTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = __VlSymsp = new VMultiBlackBoxTester__Syms(_vcontextp__, this, name());
    VMultiBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMultiBlackBoxTester::__Vconfigure(VMultiBlackBoxTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMultiBlackBoxTester::~VMultiBlackBoxTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMultiBlackBoxTester::_eval_initial(VMultiBlackBoxTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiBlackBoxTester::_eval_initial\n"); );
    VMultiBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMultiBlackBoxTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiBlackBoxTester::final\n"); );
    // Variables
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMultiBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiBlackBoxTester::_eval_settle(VMultiBlackBoxTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiBlackBoxTester::_eval_settle\n"); );
    VMultiBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiBlackBoxTester::_ctor_var_reset(VMultiBlackBoxTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiBlackBoxTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
