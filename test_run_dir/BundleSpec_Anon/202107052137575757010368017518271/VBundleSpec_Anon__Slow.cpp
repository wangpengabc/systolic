// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleSpec_Anon.h for the primary calling header

#include "VBundleSpec_Anon.h"
#include "VBundleSpec_Anon__Syms.h"

//==========

VBundleSpec_Anon::VBundleSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBundleSpec_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VBundleSpec_Anon__Syms(_vcontextp__, this, name());
    VBundleSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBundleSpec_Anon::__Vconfigure(VBundleSpec_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBundleSpec_Anon::~VBundleSpec_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBundleSpec_Anon::_eval_initial(VBundleSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleSpec_Anon::_eval_initial\n"); );
    VBundleSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBundleSpec_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleSpec_Anon::final\n"); );
    // Variables
    VBundleSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBundleSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBundleSpec_Anon::_eval_settle(VBundleSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleSpec_Anon::_eval_settle\n"); );
    VBundleSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBundleSpec_Anon::_ctor_var_reset(VBundleSpec_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleSpec_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
