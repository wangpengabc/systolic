// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBoringUtilsSpec_Anon.h for the primary calling header

#include "VBoringUtilsSpec_Anon.h"
#include "VBoringUtilsSpec_Anon__Syms.h"

//==========

VBoringUtilsSpec_Anon::VBoringUtilsSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBoringUtilsSpec_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VBoringUtilsSpec_Anon__Syms(_vcontextp__, this, name());
    VBoringUtilsSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBoringUtilsSpec_Anon::__Vconfigure(VBoringUtilsSpec_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBoringUtilsSpec_Anon::~VBoringUtilsSpec_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBoringUtilsSpec_Anon::_settle__TOP__2(VBoringUtilsSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon::_settle__TOP__2\n"); );
    VBoringUtilsSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BoringUtilsSpec_Anon__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->BoringUtilsSpec_Anon__DOT__done_value)));
}

void VBoringUtilsSpec_Anon::_eval_initial(VBoringUtilsSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon::_eval_initial\n"); );
    VBoringUtilsSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBoringUtilsSpec_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon::final\n"); );
    // Variables
    VBoringUtilsSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBoringUtilsSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBoringUtilsSpec_Anon::_eval_settle(VBoringUtilsSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon::_eval_settle\n"); );
    VBoringUtilsSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VBoringUtilsSpec_Anon::_ctor_var_reset(VBoringUtilsSpec_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->BoringUtilsSpec_Anon__DOT__done_value = VL_RAND_RESET_I(1);
    self->BoringUtilsSpec_Anon__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
