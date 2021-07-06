// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGStepTest.h for the primary calling header

#include "VPRNGStepTest.h"
#include "VPRNGStepTest__Syms.h"

//==========

VerilatedContext* VPRNGStepTest::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VPRNGStepTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPRNGStepTest::eval\n"); );
    VPRNGStepTest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGStepTest/2021070521372610617610490462753229/PRNGStepTest.v", 677, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPRNGStepTest::_eval_initial_loop(VPRNGStepTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGStepTest/2021070521372610617610490462753229/PRNGStepTest.v", 677, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPRNGStepTest::_sequent__TOP__1(VPRNGStepTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_sequent__TOP__1\n"); );
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__a_prng__DOT__state_5;
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_11;
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11;
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_10;
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_9;
    // Body
    __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_9 
        = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_9;
    __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_10 
        = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_10;
    __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11 
        = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_11;
    __Vdly__PRNGStepTest__DOT__a_prng__DOT__state_5 
        = vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5;
    __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_11 
        = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->PRNGStepTest__DOT__count2)) 
                               & (~ (((((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                                        << 0xfU) | 
                                       (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))) 
                                      == (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                                           << 0xfU) 
                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                              << 0xeU) 
                                             | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13) 
                                                 << 0xdU) 
                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12) 
                                                    << 0xcU) 
                                                   | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9) 
                                                             << 9U) 
                                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8) 
                                                                << 8U) 
                                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                                      << 6U) 
                                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                                         << 5U) 
                                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                                            << 4U) 
                                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                                               << 3U) 
                                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0))))))))))))))))) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 1-step and 2-step PRNGs did not agree! (0b%b != 0b%b)\n    at PRNGSpec.scala:32 assert(a === b, \"1-step and 2-step PRNGs did not agree! (0b%%b != 0b%%b)\", a, b)\n",
                       16,(((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                            << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))),
                       16,(((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                            << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0)))))))))))))))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->PRNGStepTest__DOT__count2)) 
                               & (~ (((((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                                        << 0xfU) | 
                                       (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))) 
                                      == (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                                           << 0xfU) 
                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                              << 0xeU) 
                                             | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13) 
                                                 << 0xdU) 
                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12) 
                                                    << 0xcU) 
                                                   | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9) 
                                                             << 9U) 
                                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8) 
                                                                << 8U) 
                                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                                      << 6U) 
                                                                     | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                                         << 5U) 
                                                                        | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                                            << 4U) 
                                                                           | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                                               << 3U) 
                                                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0))))))))))))))))) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: PRNGStepTest.v:867: Assertion failed in %NPRNGStepTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGStepTest/2021070521372610617610490462753229/PRNGStepTest.v", 867, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0U == (IData)(vlTOPp->PRNGStepTest__DOT__count4)) 
                         & (~ (((((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                                  << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                               << 0xeU) 
                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                                  << 0xdU) 
                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                                     << 0xcU) 
                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                        << 0xbU) 
                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                           << 0xaU) 
                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                              << 9U) 
                                                             | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                                 << 8U) 
                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                                    << 7U) 
                                                                   | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                                       << 6U) 
                                                                      | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                          << 5U) 
                                                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                             << 4U) 
                                                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                                << 3U) 
                                                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))) 
                                == (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15) 
                                     << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14) 
                                                  << 0xeU) 
                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13) 
                                                     << 0xdU) 
                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12) 
                                                        << 0xcU) 
                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_11) 
                                                           << 0xbU) 
                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_10) 
                                                              << 0xaU) 
                                                             | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_9) 
                                                                 << 9U) 
                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_8) 
                                                                    << 8U) 
                                                                   | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7) 
                                                                       << 7U) 
                                                                      | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6) 
                                                                          << 6U) 
                                                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5) 
                                                                             << 5U) 
                                                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4) 
                                                                                << 4U) 
                                                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0))))))))))))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 1-step and 4-step PRNGs did not agree!\n    at PRNGSpec.scala:36 assert(a === c, \"1-step and 4-step PRNGs did not agree!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0U == (IData)(vlTOPp->PRNGStepTest__DOT__count4)) 
                         & (~ (((((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                                  << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                               << 0xeU) 
                                              | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                                  << 0xdU) 
                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                                     << 0xcU) 
                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                        << 0xbU) 
                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                           << 0xaU) 
                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                              << 9U) 
                                                             | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                                 << 8U) 
                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                                    << 7U) 
                                                                   | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                                       << 6U) 
                                                                      | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                          << 5U) 
                                                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                             << 4U) 
                                                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                                << 3U) 
                                                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))) 
                                == (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15) 
                                     << 0xfU) | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14) 
                                                  << 0xeU) 
                                                 | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13) 
                                                     << 0xdU) 
                                                    | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12) 
                                                        << 0xcU) 
                                                       | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_11) 
                                                           << 0xbU) 
                                                          | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_10) 
                                                              << 0xaU) 
                                                             | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_9) 
                                                                 << 9U) 
                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_8) 
                                                                    << 8U) 
                                                                   | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7) 
                                                                       << 7U) 
                                                                      | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6) 
                                                                          << 6U) 
                                                                         | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5) 
                                                                             << 5U) 
                                                                            | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4) 
                                                                                << 4U) 
                                                                               | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0))))))))))))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: PRNGStepTest.v:891: Assertion failed in %NPRNGStepTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGStepTest/2021070521372610617610490462753229/PRNGStepTest.v", 891, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlTOPp->PRNGStepTest__DOT__done_value)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGStepTest/2021070521372610617610490462753229/PRNGStepTest.v", 902, "");
        }
    }
    if (vlTOPp->reset) {
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_9 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_9 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5;
    }
    if (vlTOPp->reset) {
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_10 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_10 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6;
    }
    if (vlTOPp->reset) {
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7;
    }
    __Vdly__PRNGStepTest__DOT__a_prng__DOT__state_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4));
    if (vlTOPp->reset) {
        __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_11 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_11 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9;
    }
    vlTOPp->PRNGStepTest__DOT__done_value = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(vlTOPp->PRNGStepTest__DOT___done_wrap_value_T_1));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_8;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_5 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_6 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_7 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3;
    }
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_9 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7;
    }
    vlTOPp->PRNGStepTest__DOT___done_wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->PRNGStepTest__DOT__done_value)));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_8 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_8 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_12 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_1 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_2 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_3 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15;
    }
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_7 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_4 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_10 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_13 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_9;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_14 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_10;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15 = 0U;
    } else if ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))) {
        vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_15 
            = vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_11;
    }
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_5 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3;
    }
    vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_9 
        = __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_9;
    vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_10 
        = __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_10;
    vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_11 
        = __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11;
    vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT___GEN_0));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_8 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6;
    }
    vlTOPp->PRNGStepTest__DOT__count4 = ((IData)(vlTOPp->reset)
                                          ? 0U : (IData)(vlTOPp->PRNGStepTest__DOT___count4_wrap_value_T_1));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_3 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_6 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4;
    }
    vlTOPp->PRNGStepTest__DOT___count4_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->PRNGStepTest__DOT__count4)));
    vlTOPp->PRNGStepTest__DOT__c_prng__DOT___GEN_0 
        = ((3U == (IData)(vlTOPp->PRNGStepTest__DOT__count4))
            ? (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_12)
            : (IData)(vlTOPp->PRNGStepTest__DOT__c_prng__DOT__state_0));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_1 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_4 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2;
    }
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_15 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13;
    }
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_2 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0;
    }
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13));
    if (vlTOPp->reset) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13 = 0U;
    } else if (vlTOPp->PRNGStepTest__DOT__count2) {
        vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_13 
            = vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11;
    }
    vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_11 
        = __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_11;
    vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT___GEN_0));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12));
    vlTOPp->PRNGStepTest__DOT__count2 = ((~ (IData)(vlTOPp->reset)) 
                                         & (IData)(vlTOPp->PRNGStepTest__DOT___count2_wrap_value_T_1));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11));
    vlTOPp->PRNGStepTest__DOT___count2_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->PRNGStepTest__DOT__count2)));
    vlTOPp->PRNGStepTest__DOT__b_prng__DOT___GEN_0 
        = ((IData)(vlTOPp->PRNGStepTest__DOT__count2)
            ? (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_14)
            : (IData)(vlTOPp->PRNGStepTest__DOT__b_prng__DOT__state_0));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5));
    vlTOPp->PRNGStepTest__DOT__a_prng__DOT__state_5 
        = __Vdly__PRNGStepTest__DOT__a_prng__DOT__state_5;
}

void VPRNGStepTest::_eval(VPRNGStepTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_eval\n"); );
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VPRNGStepTest::_change_request(VPRNGStepTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_change_request\n"); );
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPRNGStepTest::_change_request_1(VPRNGStepTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_change_request_1\n"); );
    VPRNGStepTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPRNGStepTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
