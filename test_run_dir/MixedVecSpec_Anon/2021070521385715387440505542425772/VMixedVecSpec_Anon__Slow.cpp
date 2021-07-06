// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecSpec_Anon.h for the primary calling header

#include "VMixedVecSpec_Anon.h"
#include "VMixedVecSpec_Anon__Syms.h"

//==========

VMixedVecSpec_Anon::VMixedVecSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VMixedVecSpec_Anon__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecSpec_Anon__Syms(_vcontextp__, this, name());
    VMixedVecSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VMixedVecSpec_Anon::__Vconfigure(VMixedVecSpec_Anon__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VMixedVecSpec_Anon::~VMixedVecSpec_Anon() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VMixedVecSpec_Anon::_eval_initial(VMixedVecSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecSpec_Anon::_eval_initial\n"); );
    VMixedVecSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecSpec_Anon::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecSpec_Anon::final\n"); );
    // Variables
    VMixedVecSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecSpec_Anon::_eval_settle(VMixedVecSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecSpec_Anon::_eval_settle\n"); );
    VMixedVecSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecSpec_Anon::_ctor_var_reset(VMixedVecSpec_Anon* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecSpec_Anon::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
