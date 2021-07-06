// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiExtModuleTester.h for the primary calling header

#include "VMultiExtModuleTester.h"
#include "VMultiExtModuleTester__Syms.h"

//==========

VMultiExtModuleTester::VMultiExtModuleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMultiExtModuleTester__Syms* __restrict vlSymsp = __VlSymsp = new VMultiExtModuleTester__Syms(_vcontextp__, this, name());
    VMultiExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMultiExtModuleTester::__Vconfigure(VMultiExtModuleTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMultiExtModuleTester::~VMultiExtModuleTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMultiExtModuleTester::_eval_initial(VMultiExtModuleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester::_eval_initial\n"); );
    VMultiExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMultiExtModuleTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester::final\n"); );
    // Variables
    VMultiExtModuleTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMultiExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiExtModuleTester::_eval_settle(VMultiExtModuleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester::_eval_settle\n"); );
    VMultiExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiExtModuleTester::_ctor_var_reset(VMultiExtModuleTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
