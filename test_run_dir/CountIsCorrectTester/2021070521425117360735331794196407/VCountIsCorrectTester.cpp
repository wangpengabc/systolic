// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCountIsCorrectTester.h for the primary calling header

#include "VCountIsCorrectTester.h"
#include "VCountIsCorrectTester__Syms.h"

//==========

VerilatedContext* VCountIsCorrectTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VCountIsCorrectTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCountIsCorrectTester::eval\n"); );
    VCountIsCorrectTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/CountIsCorrectTester/2021070521425117360735331794196407/CountIsCorrectTester.v", 321, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCountIsCorrectTester::_eval_initial_loop(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/CountIsCorrectTester/2021070521425117360735331794196407/CountIsCorrectTester.v", 321, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCountIsCorrectTester::_sequent__TOP__1(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_sequent__TOP__1\n"); );
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__full)) 
                          & (0x14U > (IData)(vlTOPp->CountIsCorrectTester__DOT__value))) 
                         & (~ ((((((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                                   & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                                   ? 2U : 0U) | (1U 
                                                 & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                                    - (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))) 
                                == (0x1fU & ((IData)(vlTOPp->CountIsCorrectTester__DOT__value) 
                                             - (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:79 assert(q.io.count === (inCnt.value - outCnt.value))\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__full)) 
                          & (0x14U > (IData)(vlTOPp->CountIsCorrectTester__DOT__value))) 
                         & (~ ((((((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                                   & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                                   ? 2U : 0U) | (1U 
                                                 & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                                    - (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))) 
                                == (0x1fU & ((IData)(vlTOPp->CountIsCorrectTester__DOT__value) 
                                             - (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: CountIsCorrectTester.v:442: Assertion failed in %NCountIsCorrectTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/CountIsCorrectTester/2021070521425117360735331794196407/CountIsCorrectTester.v", 442, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                                 >> 6U) & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty))) 
                               & (~ ((((((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                                         & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                                         ? 2U : 0U) 
                                       | (1U & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                                - (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))) 
                                      == (0x1fU & ((IData)(vlTOPp->CountIsCorrectTester__DOT__value) 
                                                   - (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)))) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:83 assert(q.io.count === (inCnt.value - outCnt.value))\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                                 >> 6U) & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty))) 
                               & (~ ((((((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                                         & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                                         ? 2U : 0U) 
                                       | (1U & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                                - (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))) 
                                      == (0x1fU & ((IData)(vlTOPp->CountIsCorrectTester__DOT__value) 
                                                   - (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)))) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: CountIsCorrectTester.v:465: Assertion failed in %NCountIsCorrectTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/CountIsCorrectTester/2021070521425117360735331794196407/CountIsCorrectTester.v", 465, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/CountIsCorrectTester/2021070521425117360735331794196407/CountIsCorrectTester.v", 476, "");
        }
    }
    __Vdly__CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    __Vdly__CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (vlTOPp->reset) {
        vlTOPp->CountIsCorrectTester__DOT__value_1 = 0U;
    } else if ((1U & (((IData)(vlTOPp->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                       >> 6U) & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty))))) {
        vlTOPp->CountIsCorrectTester__DOT__value_1 
            = ((IData)(vlTOPp->CountIsCorrectTester__DOT__wrap_1)
                ? 0U : (IData)(vlTOPp->CountIsCorrectTester__DOT___value_T_3));
    }
    __Vtableidx1 = (((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value) 
                     << 4U) | ((8U & (((IData)(vlTOPp->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                                       >> 3U) & ((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty)) 
                                                 << 3U))) 
                               | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                   << 2U) | ((((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__full)) 
                                               & (0x14U 
                                                  > (IData)(vlTOPp->CountIsCorrectTester__DOT__value))) 
                                              << 1U) 
                                             | (IData)(vlTOPp->reset)))));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value 
            = vlTOPp->__Vtable1_CountIsCorrectTester__DOT__q__DOT__enq_ptr_value
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value 
            = vlTOPp->__Vtable1_CountIsCorrectTester__DOT__q__DOT__deq_ptr_value
            [__Vtableidx1];
    }
    if ((4U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full 
            = vlTOPp->__Vtable1_CountIsCorrectTester__DOT__q__DOT__maybe_full
            [__Vtableidx1];
    }
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlTOPp->CountIsCorrectTester__DOT__wrap_1 = (0x14U 
                                                 == (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1));
    vlTOPp->CountIsCorrectTester__DOT___value_T_3 = 
        (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value));
    if (vlTOPp->reset) {
        vlTOPp->CountIsCorrectTester__DOT__value = 0U;
    } else if (vlTOPp->CountIsCorrectTester__DOT___T) {
        vlTOPp->CountIsCorrectTester__DOT__value = 
            ((IData)(vlTOPp->CountIsCorrectTester__DOT__wrap)
              ? 0U : (IData)(vlTOPp->CountIsCorrectTester__DOT___value_T_1));
    }
    vlTOPp->CountIsCorrectTester__DOT__q__DOT__empty 
        = ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT__full 
        = ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__maybe_full));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlTOPp->CountIsCorrectTester__DOT__wrap = (0x14U 
                                               == (IData)(vlTOPp->CountIsCorrectTester__DOT__value));
    vlTOPp->CountIsCorrectTester__DOT___value_T_1 = 
        (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CountIsCorrectTester__DOT__value)));
    vlTOPp->CountIsCorrectTester__DOT___T = ((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__full)) 
                                             & (0x14U 
                                                > (IData)(vlTOPp->CountIsCorrectTester__DOT__value)));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlTOPp->CountIsCorrectTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
}

void VCountIsCorrectTester::_eval(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_eval\n"); );
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VCountIsCorrectTester::_change_request(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_change_request\n"); );
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCountIsCorrectTester::_change_request_1(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_change_request_1\n"); );
    VCountIsCorrectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCountIsCorrectTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
