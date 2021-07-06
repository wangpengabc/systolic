// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithParamsTester.h for the primary calling header

#include "VBlackBoxWithParamsTester.h"
#include "VBlackBoxWithParamsTester__Syms.h"

//==========

VBlackBoxWithParamsTester::VBlackBoxWithParamsTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = __VlSymsp = new VBlackBoxWithParamsTester__Syms(_vcontextp__, this, name());
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBlackBoxWithParamsTester::__Vconfigure(VBlackBoxWithParamsTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBlackBoxWithParamsTester::~VBlackBoxWithParamsTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBlackBoxWithParamsTester::_settle__TOP__2(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_settle__TOP__2\n"); );
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BlackBoxWithParamsTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->BlackBoxWithParamsTester__DOT__cycles)));
}

void VBlackBoxWithParamsTester::_eval_initial(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_eval_initial\n"); );
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBlackBoxWithParamsTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::final\n"); );
    // Variables
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlackBoxWithParamsTester::_eval_settle(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_eval_settle\n"); );
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VBlackBoxWithParamsTester::_ctor_var_reset(VBlackBoxWithParamsTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->BlackBoxWithParamsTester__DOT__cycles = VL_RAND_RESET_I(2);
    self->BlackBoxWithParamsTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
