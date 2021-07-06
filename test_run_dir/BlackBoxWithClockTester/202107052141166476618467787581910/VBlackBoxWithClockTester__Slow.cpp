// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithClockTester.h for the primary calling header

#include "VBlackBoxWithClockTester.h"
#include "VBlackBoxWithClockTester__Syms.h"

//==========

VBlackBoxWithClockTester::VBlackBoxWithClockTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = __VlSymsp = new VBlackBoxWithClockTester__Syms(_vcontextp__, this, name());
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBlackBoxWithClockTester::__Vconfigure(VBlackBoxWithClockTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBlackBoxWithClockTester::~VBlackBoxWithClockTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBlackBoxWithClockTester::_settle__TOP__2(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_settle__TOP__2\n"); );
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BlackBoxWithClockTester__DOT__wrap_wrap 
        = (0xeU == (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles));
    vlTOPp->BlackBoxWithClockTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles)));
}

void VBlackBoxWithClockTester::_eval_initial(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_eval_initial\n"); );
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBlackBoxWithClockTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::final\n"); );
    // Variables
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlackBoxWithClockTester::_eval_settle(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_eval_settle\n"); );
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VBlackBoxWithClockTester::_ctor_var_reset(VBlackBoxWithClockTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->BlackBoxWithClockTester__DOT__model = VL_RAND_RESET_I(1);
    self->BlackBoxWithClockTester__DOT__cycles = VL_RAND_RESET_I(4);
    self->BlackBoxWithClockTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    self->BlackBoxWithClockTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    self->BlackBoxWithClockTester__DOT__blackBox__DOT__register = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
