// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalSpec_Anon.h for the primary calling header

#include "VIntervalSpec_Anon.h"
#include "VIntervalSpec_Anon__Syms.h"

//==========

VIntervalSpec_Anon::VIntervalSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VIntervalSpec_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VIntervalSpec_Anon__Syms(_vcontextp__, this, name());
    VIntervalSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VIntervalSpec_Anon::__Vconfigure(VIntervalSpec_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VIntervalSpec_Anon::~VIntervalSpec_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIntervalSpec_Anon::_eval_initial(VIntervalSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon::_eval_initial\n"); );
    VIntervalSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIntervalSpec_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon::final\n"); );
    // Variables
    VIntervalSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntervalSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalSpec_Anon::_eval_settle(VIntervalSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon::_eval_settle\n"); );
    VIntervalSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalSpec_Anon::_ctor_var_reset(VIntervalSpec_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
