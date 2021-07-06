// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetTester.h for the primary calling header

#include "VAsyncResetTester.h"
#include "VAsyncResetTester__Syms.h"

//==========

VerilatedContext* VAsyncResetTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VAsyncResetTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetTester::eval\n"); );
    VAsyncResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetTester/2021070521373913206516807100697855/AsyncResetTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAsyncResetTester::_eval_initial_loop(VAsyncResetTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetTester/2021070521373913206516807100697855/AsyncResetTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAsyncResetTester::_sequent__TOP__1(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_sequent__TOP__1\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetTester__DOT__count)) 
                         & (~ ((5U == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:28 assert(reg === 5.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetTester__DOT__count)) 
                         & (~ ((5U == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:55: Assertion failed in %NAsyncResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetTester/2021070521373913206516807100697855/AsyncResetTester.v", 55, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetTester__DOT__count))) 
                         & (~ ((0x7bU == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:31 assert(reg === 123.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetTester__DOT__count))) 
                         & (~ ((0x7bU == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:77: Assertion failed in %NAsyncResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetTester/2021070521373913206516807100697855/AsyncResetTester.v", 77, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetTester__DOT__count))) 
                         & (~ ((5U == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:33 assert(reg === 5.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetTester__DOT__count))) 
                         & (~ ((5U == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:99: Assertion failed in %NAsyncResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetTester/2021070521373913206516807100697855/AsyncResetTester.v", 99, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlTOPp->AsyncResetTester__DOT__count)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetTester/2021070521373913206516807100697855/AsyncResetTester.v", 110, "");
        }
    }
    vlTOPp->AsyncResetTester__DOT__cDiv_value = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : (IData)(vlTOPp->AsyncResetTester__DOT___cDiv_wrap_value_T_1));
    vlTOPp->AsyncResetTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetTester__DOT__cDiv_value)));
    vlTOPp->AsyncResetTester__DOT__slowClk = (3U == (IData)(vlTOPp->AsyncResetTester__DOT__cDiv_value));
}

VL_INLINE_OPT void VAsyncResetTester::_sequent__TOP__3(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_sequent__TOP__3\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetTester__DOT__reg_ = ((IData)(vlTOPp->AsyncResetTester__DOT__asyncResetNext)
                                            ? 0x7bU
                                            : 5U);
}

VL_INLINE_OPT void VAsyncResetTester::_sequent__TOP__4(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_sequent__TOP__4\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetTester__DOT__asyncResetNext = 
        ((~ (IData)(vlTOPp->reset)) & (4U == (IData)(vlTOPp->AsyncResetTester__DOT__count)));
    vlTOPp->AsyncResetTester__DOT__count = ((IData)(vlTOPp->reset)
                                             ? 0U : (IData)(vlTOPp->AsyncResetTester__DOT___wrap_value_T_1));
    vlTOPp->AsyncResetTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->AsyncResetTester__DOT__count)));
}

void VAsyncResetTester::_eval(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_eval\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext))) 
         | ((IData)(vlTOPp->AsyncResetTester__DOT__slowClk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__AsyncResetTester__DOT__slowClk))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext 
        = vlTOPp->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetTester__DOT__slowClk 
        = vlTOPp->AsyncResetTester__DOT__slowClk;
    vlTOPp->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext 
        = vlTOPp->AsyncResetTester__DOT__asyncResetNext;
}

VL_INLINE_OPT QData VAsyncResetTester::_change_request(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_change_request\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAsyncResetTester::_change_request_1(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_change_request_1\n"); );
    VAsyncResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->AsyncResetTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlTOPp->AsyncResetTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /home/wangpeng/test/playground_test/test_run_dir/AsyncResetTester/2021070521373913206516807100697855/AsyncResetTester.v:17: AsyncResetTester.asyncResetNext\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext 
        = vlTOPp->AsyncResetTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
