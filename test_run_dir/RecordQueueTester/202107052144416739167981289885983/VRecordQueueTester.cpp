// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordQueueTester.h for the primary calling header

#include "VRecordQueueTester.h"
#include "VRecordQueueTester__Syms.h"

//==========

VerilatedContext* VRecordQueueTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VRecordQueueTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecordQueueTester::eval\n"); );
    VRecordQueueTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/RecordQueueTester/202107052144416739167981289885983/RecordQueueTester.v", 143, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VRecordQueueTester::_eval_initial_loop(VRecordQueueTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/RecordQueueTester/202107052144416739167981289885983/RecordQueueTester.v", 143, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VRecordQueueTester::_sequent__TOP__1(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_sequent__TOP__1\n"); );
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_foo__v0;
    CData/*0:0*/ __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_foo__v0;
    CData/*1:0*/ __Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_bar__v0;
    CData/*0:0*/ __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_bar__v0;
    // Body
    __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_bar__v0 = 0U;
    __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_foo__v0 = 0U;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((1U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)) 
                         & (~ ((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__empty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:76 assert(queue.io.deq.valid === true.B)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((1U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)) 
                         & (~ ((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__empty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:195: Assertion failed in %NRecordQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/RecordQueueTester/202107052144416739167981289885983/RecordQueueTester.v", 195, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((1U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)) 
                         & (~ ((0x4d2U == vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo
                                [vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:77 assert(queue.io.deq.bits(\"foo\").asUInt === 1234.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((1U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)) 
                         & (~ ((0x4d2U == vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo
                                [vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:218: Assertion failed in %NRecordQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/RecordQueueTester/202107052144416739167981289885983/RecordQueueTester.v", 218, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((1U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)) 
                         & (~ ((0x162eU == vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar
                                [vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:78 assert(queue.io.deq.bits(\"bar\").asUInt === 5678.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((1U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)) 
                         & (~ ((0x162eU == vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar
                                [vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:241: Assertion failed in %NRecordQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/RecordQueueTester/202107052144416739167981289885983/RecordQueueTester.v", 241, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/RecordQueueTester/202107052144416739167981289885983/RecordQueueTester.v", 252, "");
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RecordQueueTester__DOT__queue__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__do_enq) 
                != (1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__empty))))) {
        vlTOPp->RecordQueueTester__DOT__queue__DOT__maybe_full 
            = vlTOPp->RecordQueueTester__DOT__queue__DOT__do_enq;
    }
    if (((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__full)) 
         & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)))) {
        __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_bar__v0 = 1U;
        __Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_bar__v0 
            = vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__full)) 
         & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)))) {
        __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_foo__v0 = 1U;
        __Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_foo__v0 
            = vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value;
    }
    if (__Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_bar__v0) {
        vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_bar__v0] = 0x162eU;
    }
    if (__Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_foo__v0) {
        vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_foo__v0] = 0x4d2U;
    }
    if (vlTOPp->reset) {
        vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value = 0U;
    } else if ((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__empty)))) {
        vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value 
            = vlTOPp->RecordQueueTester__DOT__queue__DOT___value_T_3;
    }
    vlTOPp->RecordQueueTester__DOT__cycle = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(vlTOPp->RecordQueueTester__DOT___wrap_value_T_1));
    if (vlTOPp->reset) {
        vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->RecordQueueTester__DOT__queue__DOT__do_enq) {
        vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value 
            = vlTOPp->RecordQueueTester__DOT__queue__DOT___value_T_1;
    }
    vlTOPp->RecordQueueTester__DOT__queue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value)));
    vlTOPp->RecordQueueTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__cycle)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT__ptr_match 
        = ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value));
    vlTOPp->RecordQueueTester__DOT__queue__DOT__empty 
        = ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__maybe_full)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT__full 
        = ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__ptr_match) 
           & (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__maybe_full));
    vlTOPp->RecordQueueTester__DOT__queue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__full)) 
           & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)));
}

void VRecordQueueTester::_eval(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_eval\n"); );
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VRecordQueueTester::_change_request(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_change_request\n"); );
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VRecordQueueTester::_change_request_1(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_change_request_1\n"); );
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRecordQueueTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
