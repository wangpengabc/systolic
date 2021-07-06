// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExtModuleTester.h for the primary calling header

#include "VExtModuleTester.h"
#include "VExtModuleTester__Syms.h"

//==========

VExtModuleTester::VExtModuleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VExtModuleTester__Syms* __restrict vlSymsp = __VlSymsp = new VExtModuleTester__Syms(_vcontextp__, this, name());
    VExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VExtModuleTester::__Vconfigure(VExtModuleTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VExtModuleTester::~VExtModuleTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VExtModuleTester::_eval_initial(VExtModuleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExtModuleTester::_eval_initial\n"); );
    VExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VExtModuleTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExtModuleTester::final\n"); );
    // Variables
    VExtModuleTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExtModuleTester::_eval_settle(VExtModuleTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExtModuleTester::_eval_settle\n"); );
    VExtModuleTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExtModuleTester::_ctor_var_reset(VExtModuleTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExtModuleTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
