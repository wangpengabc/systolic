// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPlaSpec_Anon.h for the primary calling header

#include "VPlaSpec_Anon.h"
#include "VPlaSpec_Anon__Syms.h"

//==========

VPlaSpec_Anon::VPlaSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VPlaSpec_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VPlaSpec_Anon__Syms(_vcontextp__, this, name());
    VPlaSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VPlaSpec_Anon::__Vconfigure(VPlaSpec_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VPlaSpec_Anon::~VPlaSpec_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VPlaSpec_Anon::_eval_initial(VPlaSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPlaSpec_Anon::_eval_initial\n"); );
    VPlaSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPlaSpec_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPlaSpec_Anon::final\n"); );
    // Variables
    VPlaSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPlaSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPlaSpec_Anon::_eval_settle(VPlaSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPlaSpec_Anon::_eval_settle\n"); );
    VPlaSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPlaSpec_Anon::_ctor_var_reset(VPlaSpec_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPlaSpec_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
