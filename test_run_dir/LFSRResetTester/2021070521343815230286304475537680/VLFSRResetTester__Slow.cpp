// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRResetTester.h for the primary calling header

#include "VLFSRResetTester.h"
#include "VLFSRResetTester__Syms.h"

//==========

VLFSRResetTester::VLFSRResetTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VLFSRResetTester__Syms* __restrict vlSymsp = __VlSymsp = new VLFSRResetTester__Syms(_vcontextp__, this, name());
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VLFSRResetTester::__Vconfigure(VLFSRResetTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VLFSRResetTester::~VLFSRResetTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VLFSRResetTester::_settle__TOP__2(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_settle__TOP__2\n"); );
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LFSRResetTester__DOT__wrap_wrap = (4U == (IData)(vlTOPp->LFSRResetTester__DOT__count));
    vlTOPp->LFSRResetTester__DOT___wrap_value_T_1 = 
        (7U & ((IData)(1U) + (IData)(vlTOPp->LFSRResetTester__DOT__count)));
    vlTOPp->LFSRResetTester__DOT__lfsr__DOT___GEN_4 
        = ((1U != (IData)(vlTOPp->LFSRResetTester__DOT__count)) 
           & (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0));
}

void VLFSRResetTester::_eval_initial(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_eval_initial\n"); );
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VLFSRResetTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::final\n"); );
    // Variables
    VLFSRResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLFSRResetTester::_eval_settle(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_eval_settle\n"); );
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VLFSRResetTester::_ctor_var_reset(VLFSRResetTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->LFSRResetTester__DOT__count = VL_RAND_RESET_I(3);
    self->LFSRResetTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    self->LFSRResetTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(3);
    self->LFSRResetTester__DOT__lfsr__DOT__state_0 = VL_RAND_RESET_I(1);
    self->LFSRResetTester__DOT__lfsr__DOT___GEN_4 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
