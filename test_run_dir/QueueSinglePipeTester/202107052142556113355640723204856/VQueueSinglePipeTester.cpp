// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueSinglePipeTester.h for the primary calling header

#include "VQueueSinglePipeTester.h"
#include "VQueueSinglePipeTester__Syms.h"

//==========

VerilatedContext* VQueueSinglePipeTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VQueueSinglePipeTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueSinglePipeTester::eval\n"); );
    VQueueSinglePipeTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueSinglePipeTester/202107052142556113355640723204856/QueueSinglePipeTester.v", 298, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VQueueSinglePipeTester::_eval_initial_loop(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueSinglePipeTester/202107052142556113355640723204856/QueueSinglePipeTester.v", 298, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VQueueSinglePipeTester::_sequent__TOP__1(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_sequent__TOP__1\n"); );
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready) 
                                   | ((IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full) 
                                      & (~ ((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                                            >> 0xbU)))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:103 assert(q.io.enq.ready || (q.io.count === 1.U && !q.io.deq.ready))\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready) 
                                   | ((IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full) 
                                      & (~ ((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                                            >> 0xbU)))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: QueueSinglePipeTester.v:417: Assertion failed in %NQueueSinglePipeTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueSinglePipeTester/202107052142556113355640723204856/QueueSinglePipeTester.v", 417, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlTOPp->QueueSinglePipeTester__DOT__value_1)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueSinglePipeTester/202107052142556113355640723204856/QueueSinglePipeTester.v", 428, "");
        }
    }
    __Vdly__QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    if (vlTOPp->reset) {
        vlTOPp->QueueSinglePipeTester__DOT__value = 0U;
    } else if (vlTOPp->QueueSinglePipeTester__DOT___T_7) {
        vlTOPp->QueueSinglePipeTester__DOT__value = 
            ((IData)(vlTOPp->QueueSinglePipeTester__DOT__wrap)
              ? 0U : (IData)(vlTOPp->QueueSinglePipeTester__DOT___value_T_1));
    }
    __Vdly__QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (vlTOPp->reset) {
        vlTOPp->QueueSinglePipeTester__DOT__value_1 = 0U;
    } else if ((((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                 >> 0xbU) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full))) {
        vlTOPp->QueueSinglePipeTester__DOT__value_1 
            = ((IData)(vlTOPp->QueueSinglePipeTester__DOT__wrap_1)
                ? 0U : (IData)(vlTOPp->QueueSinglePipeTester__DOT___value_T_3));
    }
    vlTOPp->QueueSinglePipeTester__DOT__wrap = (0x14U 
                                                == (IData)(vlTOPp->QueueSinglePipeTester__DOT__value));
    vlTOPp->QueueSinglePipeTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueSinglePipeTester__DOT__value)));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlTOPp->QueueSinglePipeTester__DOT__wrap_1 = (0x14U 
                                                  == (IData)(vlTOPp->QueueSinglePipeTester__DOT__value_1));
    vlTOPp->QueueSinglePipeTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueSinglePipeTester__DOT__value_1)));
    if (vlTOPp->reset) {
        vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__do_enq) 
                != (IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__do_deq))) {
        vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full 
            = vlTOPp->QueueSinglePipeTester__DOT__q__DOT__do_enq;
    }
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlTOPp->QueueSinglePipeTester__DOT__q__DOT__do_deq 
        = (((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
            >> 0xbU) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready 
        = (1U & (((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                  >> 0xbU) | (~ (IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full))));
    vlTOPp->QueueSinglePipeTester__DOT___T_7 = ((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready) 
                                                & (0x14U 
                                                   > (IData)(vlTOPp->QueueSinglePipeTester__DOT__value)));
    vlTOPp->QueueSinglePipeTester__DOT__q__DOT__do_enq 
        = ((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready) 
           & (0x14U > (IData)(vlTOPp->QueueSinglePipeTester__DOT__value)));
}

void VQueueSinglePipeTester::_eval(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_eval\n"); );
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VQueueSinglePipeTester::_change_request(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_change_request\n"); );
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VQueueSinglePipeTester::_change_request_1(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_change_request_1\n"); );
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VQueueSinglePipeTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
