// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleLiteralSpec_Anon.h for the primary calling header

#include "VBundleLiteralSpec_Anon.h"
#include "VBundleLiteralSpec_Anon__Syms.h"

//==========

VBundleLiteralSpec_Anon::VBundleLiteralSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VBundleLiteralSpec_Anon__Syms(_vcontextp__, this, name());
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBundleLiteralSpec_Anon::__Vconfigure(VBundleLiteralSpec_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBundleLiteralSpec_Anon::~VBundleLiteralSpec_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBundleLiteralSpec_Anon::_settle__TOP__2(VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon::_settle__TOP__2\n"); );
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BundleLiteralSpec_Anon__DOT___r_a_T_1 = 
        (0xffU & ((IData)(1U) + (IData)(vlTOPp->BundleLiteralSpec_Anon__DOT__r_a)));
}

void VBundleLiteralSpec_Anon::_eval_initial(VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon::_eval_initial\n"); );
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBundleLiteralSpec_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon::final\n"); );
    // Variables
    VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBundleLiteralSpec_Anon::_eval_settle(VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon::_eval_settle\n"); );
    VBundleLiteralSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VBundleLiteralSpec_Anon::_ctor_var_reset(VBundleLiteralSpec_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->BundleLiteralSpec_Anon__DOT__r_a = VL_RAND_RESET_I(8);
    self->BundleLiteralSpec_Anon__DOT___r_a_T_1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
