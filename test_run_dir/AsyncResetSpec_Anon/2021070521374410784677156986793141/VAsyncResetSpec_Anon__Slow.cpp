// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetSpec_Anon.h for the primary calling header

#include "VAsyncResetSpec_Anon.h"
#include "VAsyncResetSpec_Anon__Syms.h"

//==========

VAsyncResetSpec_Anon::VAsyncResetSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VAsyncResetSpec_Anon__Syms(_vcontextp__, this, name());
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsyncResetSpec_Anon::__Vconfigure(VAsyncResetSpec_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsyncResetSpec_Anon::~VAsyncResetSpec_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsyncResetSpec_Anon::_settle__TOP__3(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_settle__TOP__3\n"); );
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetSpec_Anon__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count)));
}

void VAsyncResetSpec_Anon::_eval_initial(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_eval_initial\n"); );
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAsyncResetSpec_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::final\n"); );
    // Variables
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsyncResetSpec_Anon::_eval_settle(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_eval_settle\n"); );
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VAsyncResetSpec_Anon::_ctor_var_reset(VAsyncResetSpec_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->AsyncResetSpec_Anon__DOT__reg_ = VL_RAND_RESET_I(7);
    self->AsyncResetSpec_Anon__DOT__count = VL_RAND_RESET_I(2);
    self->AsyncResetSpec_Anon__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
