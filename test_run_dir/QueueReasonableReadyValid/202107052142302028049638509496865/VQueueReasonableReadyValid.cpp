// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueReasonableReadyValid.h for the primary calling header

#include "VQueueReasonableReadyValid.h"
#include "VQueueReasonableReadyValid__Syms.h"

//==========

VerilatedContext* VQueueReasonableReadyValid::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VQueueReasonableReadyValid::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueReasonableReadyValid::eval\n"); );
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueReasonableReadyValid/202107052142302028049638509496865/QueueReasonableReadyValid.v", 321, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VQueueReasonableReadyValid::_eval_initial_loop(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueReasonableReadyValid/202107052142302028049638509496865/QueueReasonableReadyValid.v", 321, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VQueueReasonableReadyValid::_sequent__TOP__1(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_sequent__TOP__1\n"); );
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full)) 
                                   | (2U == ((((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                               & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                               ? 2U
                                               : 0U) 
                                             | (1U 
                                                & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                   - (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:47 assert(q.io.enq.ready || q.io.count === queueDepth.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full)) 
                                   | (2U == ((((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                               & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                               ? 2U
                                               : 0U) 
                                             | (1U 
                                                & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                   - (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: QueueReasonableReadyValid.v:439: Assertion failed in %NQueueReasonableReadyValid\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueReasonableReadyValid/202107052142302028049638509496865/QueueReasonableReadyValid.v", 439, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty)) 
                                   | (0U == ((((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                               & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                               ? 2U
                                               : 0U) 
                                             | (1U 
                                                & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                   - (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:51 assert(q.io.deq.valid || q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty)) 
                                   | (0U == ((((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                               & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                               ? 2U
                                               : 0U) 
                                             | (1U 
                                                & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                   - (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value)))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: QueueReasonableReadyValid.v:462: Assertion failed in %NQueueReasonableReadyValid\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueReasonableReadyValid/202107052142302028049638509496865/QueueReasonableReadyValid.v", 462, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueReasonableReadyValid/202107052142302028049638509496865/QueueReasonableReadyValid.v", 473, "");
        }
    }
    __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0;
    __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (vlTOPp->reset) {
        vlTOPp->QueueReasonableReadyValid__DOT__value_1 = 0U;
    } else if ((1U & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                      & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty))))) {
        vlTOPp->QueueReasonableReadyValid__DOT__value_1 
            = ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__wrap_1)
                ? 0U : (IData)(vlTOPp->QueueReasonableReadyValid__DOT___value_T_3));
    }
    __Vtableidx1 = (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value) 
                     << 4U) | ((8U & (((IData)(vlTOPp->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                                       & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty))) 
                                      << 3U)) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                  << 2U) 
                                                 | ((((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full)) 
                                                      & (0x14U 
                                                         > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value))) 
                                                     << 1U) 
                                                    | (IData)(vlTOPp->reset)))));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value 
            = vlTOPp->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value 
            = vlTOPp->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value
            [__Vtableidx1];
    }
    if ((4U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full 
            = vlTOPp->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full
            [__Vtableidx1];
    }
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlTOPp->QueueReasonableReadyValid__DOT__wrap_1 
        = (0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1));
    vlTOPp->QueueReasonableReadyValid__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1)));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match 
        = ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value));
    if (vlTOPp->reset) {
        vlTOPp->QueueReasonableReadyValid__DOT__value = 0U;
    } else if (vlTOPp->QueueReasonableReadyValid__DOT___T_10) {
        vlTOPp->QueueReasonableReadyValid__DOT__value 
            = ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__wrap)
                ? 0U : (IData)(vlTOPp->QueueReasonableReadyValid__DOT___value_T_1));
    }
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty 
        = ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full)));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full 
        = ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match) 
           & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlTOPp->QueueReasonableReadyValid__DOT__wrap = 
        (0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value));
    vlTOPp->QueueReasonableReadyValid__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    vlTOPp->QueueReasonableReadyValid__DOT___T_10 = 
        ((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full)) 
         & (0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlTOPp->QueueReasonableReadyValid__DOT___q_io_deq_ready_T 
        = (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
}

void VQueueReasonableReadyValid::_eval(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_eval\n"); );
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VQueueReasonableReadyValid::_change_request(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_change_request\n"); );
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VQueueReasonableReadyValid::_change_request_1(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_change_request_1\n"); );
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VQueueReasonableReadyValid::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
