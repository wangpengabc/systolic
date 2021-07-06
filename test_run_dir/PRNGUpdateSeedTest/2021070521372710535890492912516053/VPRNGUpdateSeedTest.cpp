// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGUpdateSeedTest.h for the primary calling header

#include "VPRNGUpdateSeedTest.h"
#include "VPRNGUpdateSeedTest__Syms.h"

//==========

VerilatedContext* VPRNGUpdateSeedTest::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VPRNGUpdateSeedTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPRNGUpdateSeedTest::eval\n"); );
    VPRNGUpdateSeedTest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGUpdateSeedTest/2021070521372710535890492912516053/PRNGUpdateSeedTest.v", 256, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPRNGUpdateSeedTest::_eval_initial_loop(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGUpdateSeedTest/2021070521372710535890492912516053/PRNGUpdateSeedTest.v", 256, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPRNGUpdateSeedTest::_sequent__TOP__1(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_sequent__TOP__1\n"); );
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__PRNGUpdateSeedTest__DOT__a__DOT__state_5;
    // Body
    __Vdly__PRNGUpdateSeedTest__DOT__a__DOT__state_5 
        = vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_5;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                         & (~ ((3U == (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_15) 
                                        << 0xfU) | 
                                       (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_0))))))))))))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Output didn't match!\n    at PRNGSpec.scala:56 assert(a.io.out.asUInt === expected.U, \"Output didn't match!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                         & (~ ((3U == (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_15) 
                                        << 0xfU) | 
                                       (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_0))))))))))))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: PRNGUpdateSeedTest.v:335: Assertion failed in %NPRNGUpdateSeedTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGUpdateSeedTest/2021070521372710535890492912516053/PRNGUpdateSeedTest.v", 335, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/PRNGUpdateSeedTest/2021070521372710535890492912516053/PRNGUpdateSeedTest.v", 346, "");
        }
    }
    __Vdly__PRNGUpdateSeedTest__DOT__a__DOT__state_5 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_4)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_4 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_3)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_3 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_2)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_2 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_1)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_1 
        = ((~ (IData)(vlTOPp->reset)) & ((2U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         | (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_0)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_0 
        = ((IData)(vlTOPp->reset) | ((2U == (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                     | (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_15)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_15 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_14)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_14 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_13)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_13 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_12)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_12 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_11)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_11 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_10)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_10 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_9)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_9 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_8)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_8 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_7)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_7 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_6)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_6 
        = ((~ (IData)(vlTOPp->reset)) & ((2U != (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_5)));
    vlTOPp->PRNGUpdateSeedTest__DOT__a__DOT__state_5 
        = __Vdly__PRNGUpdateSeedTest__DOT__a__DOT__state_5;
    vlTOPp->PRNGUpdateSeedTest__DOT__count = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(vlTOPp->PRNGUpdateSeedTest__DOT___wrap_value_T_1));
    vlTOPp->PRNGUpdateSeedTest__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->PRNGUpdateSeedTest__DOT__count)));
}

void VPRNGUpdateSeedTest::_eval(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_eval\n"); );
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VPRNGUpdateSeedTest::_change_request(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_change_request\n"); );
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPRNGUpdateSeedTest::_change_request_1(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_change_request_1\n"); );
    VPRNGUpdateSeedTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPRNGUpdateSeedTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
