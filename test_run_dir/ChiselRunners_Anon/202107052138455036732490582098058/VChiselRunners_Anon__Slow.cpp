// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChiselRunners_Anon.h for the primary calling header

#include "VChiselRunners_Anon.h"
#include "VChiselRunners_Anon__Syms.h"

//==========

VChiselRunners_Anon::VChiselRunners_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VChiselRunners_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VChiselRunners_Anon__Syms(_vcontextp__, this, name());
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VChiselRunners_Anon::__Vconfigure(VChiselRunners_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VChiselRunners_Anon::~VChiselRunners_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VChiselRunners_Anon::_settle__TOP__2(VChiselRunners_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_settle__TOP__2\n"); );
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ChiselRunners_Anon__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->ChiselRunners_Anon__DOT__done_value)));
}

void VChiselRunners_Anon::_eval_initial(VChiselRunners_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_eval_initial\n"); );
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VChiselRunners_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::final\n"); );
    // Variables
    VChiselRunners_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VChiselRunners_Anon::_eval_settle(VChiselRunners_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_eval_settle\n"); );
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VChiselRunners_Anon::_ctor_var_reset(VChiselRunners_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->ChiselRunners_Anon__DOT__done_value = VL_RAND_RESET_I(1);
    self->ChiselRunners_Anon__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
