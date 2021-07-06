// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnumSpec_Anon.h for the primary calling header

#include "VEnumSpec_Anon.h"
#include "VEnumSpec_Anon__Syms.h"

//==========

VEnumSpec_Anon::VEnumSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VEnumSpec_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VEnumSpec_Anon__Syms(_vcontextp__, this, name());
    VEnumSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VEnumSpec_Anon::__Vconfigure(VEnumSpec_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VEnumSpec_Anon::~VEnumSpec_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VEnumSpec_Anon::_eval_initial(VEnumSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumSpec_Anon::_eval_initial\n"); );
    VEnumSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VEnumSpec_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumSpec_Anon::final\n"); );
    // Variables
    VEnumSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEnumSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEnumSpec_Anon::_eval_settle(VEnumSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumSpec_Anon::_eval_settle\n"); );
    VEnumSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEnumSpec_Anon::_ctor_var_reset(VEnumSpec_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumSpec_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
