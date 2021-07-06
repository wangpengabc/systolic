// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClipSqueezeWrapDemo.h for the primary calling header

#include "VClipSqueezeWrapDemo.h"
#include "VClipSqueezeWrapDemo__Syms.h"

//==========

VClipSqueezeWrapDemo::VClipSqueezeWrapDemo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = __VlSymsp = new VClipSqueezeWrapDemo__Syms(_vcontextp__, this, name());
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VClipSqueezeWrapDemo::__Vconfigure(VClipSqueezeWrapDemo__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VClipSqueezeWrapDemo::~VClipSqueezeWrapDemo() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VClipSqueezeWrapDemo::_settle__TOP__2(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_settle__TOP__2\n"); );
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ClipSqueezeWrapDemo__DOT___counter_T_1 
        = (0x1fU & ((IData)(1U) + (0x3fU & VL_EXTENDS_II(6,5, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)))));
}

void VClipSqueezeWrapDemo::_eval_initial(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_eval_initial\n"); );
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VClipSqueezeWrapDemo::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::final\n"); );
    // Variables
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = this->__VlSymsp;
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VClipSqueezeWrapDemo::_eval_settle(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_eval_settle\n"); );
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VClipSqueezeWrapDemo::_ctor_var_reset(VClipSqueezeWrapDemo* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->ClipSqueezeWrapDemo__DOT__counter = VL_RAND_RESET_I(5);
    self->ClipSqueezeWrapDemo__DOT___counter_T_1 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
