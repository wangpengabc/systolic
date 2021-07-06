// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedResetTester.h for the primary calling header

#include "VPipelinedResetTester.h"
#include "VPipelinedResetTester__Syms.h"

//==========

VPipelinedResetTester::VPipelinedResetTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VPipelinedResetTester__Syms* __restrict vlSymsp = __VlSymsp = new VPipelinedResetTester__Syms(_vcontextp__, this, name());
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VPipelinedResetTester::__Vconfigure(VPipelinedResetTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VPipelinedResetTester::~VPipelinedResetTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VPipelinedResetTester::_settle__TOP__2(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_settle__TOP__2\n"); );
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PipelinedResetTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->PipelinedResetTester__DOT__done_value)));
}

void VPipelinedResetTester::_eval_initial(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_eval_initial\n"); );
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPipelinedResetTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::final\n"); );
    // Variables
    VPipelinedResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPipelinedResetTester::_eval_settle(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_eval_settle\n"); );
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VPipelinedResetTester::_ctor_var_reset(VPipelinedResetTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->PipelinedResetTester__DOT__done_value = VL_RAND_RESET_I(2);
    self->PipelinedResetTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
