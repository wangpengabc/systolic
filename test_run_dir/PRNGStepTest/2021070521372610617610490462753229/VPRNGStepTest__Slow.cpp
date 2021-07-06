// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGStepTest.h for the primary calling header

#include "VPRNGStepTest.h"
#include "VPRNGStepTest__Syms.h"

//==========

VPRNGStepTest::VPRNGStepTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VPRNGStepTest__Syms* __restrict vlSymsp = __VlSymsp = new VPRNGStepTest__Syms(_vcontextp__, this, name());
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VPRNGStepTest::__Vconfigure(VPRNGStepTest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VPRNGStepTest::~VPRNGStepTest() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VPRNGStepTest::_settle__TOP__2(VPRNGStepTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_settle__TOP__2\n"); );
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PRNGStepTest__DOT___done_wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->PRNGStepTest__DOT__done_value)));
    vlTOPp->PRNGStepTest__DOT___count4_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->PRNGStepTest__DOT__count4)));
    vlTOPp->PRNGStepTest__DOT__c_prng__DOT___GEN_0 
        = ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))
            ? (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12)
            : (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0));
    vlTOPp->PRNGStepTest__DOT___count2_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->PRNGStepTest__DOT__count2)));
    vlTOPp->PRNGStepTest__DOT__b_prng__DOT___GEN_0 
        = ((IData)(vlTOPp->PRNGStepTest__DOT__count2)
            ? (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14)
            : (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0));
}

void VPRNGStepTest::_eval_initial(VPRNGStepTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_eval_initial\n"); );
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPRNGStepTest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::final\n"); );
    // Variables
    VPRNGStepTest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPRNGStepTest::_eval_settle(VPRNGStepTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_eval_settle\n"); );
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VPRNGStepTest::_ctor_var_reset(VPRNGStepTest* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__count2 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT___count2_wrap_value_T_1 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__count4 = VL_RAND_RESET_I(2);
    self->PRNGStepTest__DOT___count4_wrap_value_T_1 = VL_RAND_RESET_I(2);
    self->PRNGStepTest__DOT__done_value = VL_RAND_RESET_I(4);
    self->PRNGStepTest__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(4);
    self->PRNGStepTest__DOT__a_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__a_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__b_prng__DOT___GEN_0 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    self->PRNGStepTest__DOT__c_prng__DOT___GEN_0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
