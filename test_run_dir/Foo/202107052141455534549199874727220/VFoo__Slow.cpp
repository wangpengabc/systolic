// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFoo.h for the primary calling header

#include "VFoo.h"
#include "VFoo__Syms.h"

//==========

VFoo::VFoo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VFoo__Syms* __restrict vlSymsp = __VlSymsp = new VFoo__Syms(_vcontextp__, this, name());
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VFoo::__Vconfigure(VFoo__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VFoo::~VFoo() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VFoo::_settle__TOP__2(VFoo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo::_settle__TOP__2\n"); );
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Foo__DOT___done_wrap_value_T_1 = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlTOPp->Foo__DOT__done_value)));
}

void VFoo::_eval_initial(VFoo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo::_eval_initial\n"); );
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VFoo::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo::final\n"); );
    // Variables
    VFoo__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFoo::_eval_settle(VFoo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo::_eval_settle\n"); );
    VFoo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VFoo::_ctor_var_reset(VFoo* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->Foo__DOT__done_value = VL_RAND_RESET_I(2);
    self->Foo__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
