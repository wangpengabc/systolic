// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetQueueTester.h for the primary calling header

#include "VAsyncResetQueueTester.h"
#include "VAsyncResetQueueTester__Syms.h"

//==========

VerilatedContext* VAsyncResetQueueTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VAsyncResetQueueTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetQueueTester::eval\n"); );
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetQueueTester/202107052137429584775880661821131/AsyncResetQueueTester.v", 89, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAsyncResetQueueTester::_eval_initial_loop(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetQueueTester/202107052137429584775880661821131/AsyncResetQueueTester.v", 89, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAsyncResetQueueTester::_sequent__TOP__1(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_sequent__TOP__1\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetQueueTester__DOT__doCheck) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:115 assert(queue.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetQueueTester__DOT__doCheck) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetQueueTester.v:156: Assertion failed in %NAsyncResetQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetQueueTester/202107052137429584775880661821131/AsyncResetQueueTester.v", 156, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlTOPp->AsyncResetQueueTester__DOT__count)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetQueueTester/202107052137429584775880661821131/AsyncResetQueueTester.v", 167, "");
        }
    }
    vlTOPp->AsyncResetQueueTester__DOT__cDiv_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AsyncResetQueueTester__DOT___cDiv_wrap_value_T_1));
    vlTOPp->AsyncResetQueueTester__DOT__doCheck = (
                                                   (~ (IData)(vlTOPp->reset)) 
                                                   & (3U 
                                                      == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count)));
    vlTOPp->AsyncResetQueueTester__DOT__count = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : (IData)(vlTOPp->AsyncResetQueueTester__DOT___wrap_value_T_1));
    vlTOPp->AsyncResetQueueTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetQueueTester__DOT__cDiv_value)));
    vlTOPp->AsyncResetQueueTester__DOT__queue_clock 
        = (3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__cDiv_value));
    vlTOPp->AsyncResetQueueTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->AsyncResetQueueTester__DOT__count)));
}

VL_INLINE_OPT void VAsyncResetQueueTester::_sequent__TOP__3(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_sequent__TOP__3\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext) {
        vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__maybe_full = 0U;
    } else if ((1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full)))) {
        vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__maybe_full 
            = (1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full)));
    }
    if (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext) {
        vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value = 0U;
    } else if ((1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full)))) {
        vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value 
            = vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___value_T_1;
    }
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)));
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__full 
        = ((0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)) 
           & (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__maybe_full));
}

VL_INLINE_OPT void VAsyncResetQueueTester::_sequent__TOP__4(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_sequent__TOP__4\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext 
        = ((~ (IData)(vlTOPp->reset)) & (3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count)));
}

VL_INLINE_OPT void VAsyncResetQueueTester::_sequent__TOP__5(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_sequent__TOP__5\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetQueueTester__DOT__queue_io_count 
        = ((((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__maybe_full) 
             & (0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)))
             ? 4U : 0U) | (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value));
}

void VAsyncResetQueueTester::_eval(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_eval\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) 
         | ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_clock) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) 
         | ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_clock) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
        = vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock 
        = vlTOPp->AsyncResetQueueTester__DOT__queue_clock;
    vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
        = vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext;
}

VL_INLINE_OPT QData VAsyncResetQueueTester::_change_request(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_change_request\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAsyncResetQueueTester::_change_request_1(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_change_request_1\n"); );
    VAsyncResetQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /home/wangpeng/test/playground_test/test_run_dir/AsyncResetQueueTester/202107052137429584775880661821131/AsyncResetQueueTester.v:108: AsyncResetQueueTester.asyncResetNext\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
        = vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetQueueTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
