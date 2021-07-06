// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGUpdateSeedTest.h for the primary calling header

#include "VPRNGUpdateSeedTest.h"
#include "VPRNGUpdateSeedTest__Syms.h"

//==========

VPRNGUpdateSeedTest::VPRNGUpdateSeedTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = __VlSymsp = new VPRNGUpdateSeedTest__Syms(_vcontextp__, this, name());
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VPRNGUpdateSeedTest::__Vconfigure(VPRNGUpdateSeedTest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VPRNGUpdateSeedTest::~VPRNGUpdateSeedTest() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VPRNGUpdateSeedTest::_settle__TOP__2(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_settle__TOP__2\n"); );
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PRNGUpdateSeedTest__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)));
}

void VPRNGUpdateSeedTest::_eval_initial(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_eval_initial\n"); );
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPRNGUpdateSeedTest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::final\n"); );
    // Variables
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPRNGUpdateSeedTest::_eval_settle(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_eval_settle\n"); );
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VPRNGUpdateSeedTest::_ctor_var_reset(VPRNGUpdateSeedTest* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__count = VL_RAND_RESET_I(2);
    self->PRNGUpdateSeedTest__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_0 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_1 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_2 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_3 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_4 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_5 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_6 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_7 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_8 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_9 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_10 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_11 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_12 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_13 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_14 = VL_RAND_RESET_I(1);
    self->PRNGUpdateSeedTest__DOT__a__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
