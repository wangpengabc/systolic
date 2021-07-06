// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRResetTester.h for the primary calling header

#include "VLFSRResetTester.h"
#include "VLFSRResetTester__Syms.h"

//==========

VerilatedContext* VLFSRResetTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VLFSRResetTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLFSRResetTester::eval\n"); );
    VLFSRResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRResetTester/2021070521344017386308875361299077/LFSRResetTester.v", 66, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VLFSRResetTester::_eval_initial_loop(VLFSRResetTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRResetTester/2021070521344017386308875361299077/LFSRResetTester.v", 66, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VLFSRResetTester::_sequent__TOP__1(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_sequent__TOP__1\n"); );
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->LFSRResetTester__DOT__count)) 
                         & (~ ((0xfU == (0xeU | (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:92 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->LFSRResetTester__DOT__count)) 
                         & (~ ((0xfU == (0xeU | (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: LFSRResetTester.v:117: Assertion failed in %NLFSRResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRResetTester/2021070521344017386308875361299077/LFSRResetTester.v", 117, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((4U == (IData)(vlTOPp->LFSRResetTester__DOT__count)) 
                         & (~ ((0xfU != (0xeU | (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:98 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((4U == (IData)(vlTOPp->LFSRResetTester__DOT__count)) 
                         & (~ ((0xfU != (0xeU | (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: LFSRResetTester.v:141: Assertion failed in %NLFSRResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRResetTester/2021070521344017386308875361299077/LFSRResetTester.v", 141, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((4U == (IData)(vlTOPp->LFSRResetTester__DOT__count)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRResetTester/2021070521344017386308875361299077/LFSRResetTester.v", 152, "");
        }
    }
    vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0 
        = ((3U != (IData)(vlTOPp->LFSRResetTester__DOT__count)) 
           & (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT___GEN_4));
    vlTOPp->LFSRResetTester__DOT__count = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           ((IData)(vlTOPp->LFSRResetTester__DOT__wrap_wrap)
                                             ? 0U : (IData)(vlTOPp->LFSRResetTester__DOT___wrap_value_T_1)));
    vlTOPp->LFSRResetTester__DOT__wrap_wrap = (4U == (IData)(vlTOPp->LFSRResetTester__DOT__count));
    vlTOPp->LFSRResetTester__DOT___wrap_value_T_1 = 
        (7U & ((IData)(1U) + (IData)(vlTOPp->LFSRResetTester__DOT__count)));
    vlTOPp->LFSRResetTester__DOT__lfsr__DOT___GEN_4 
        = ((1U == (IData)(vlTOPp->LFSRResetTester__DOT__count)) 
           | (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0));
}

void VLFSRResetTester::_eval(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_eval\n"); );
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VLFSRResetTester::_change_request(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_change_request\n"); );
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VLFSRResetTester::_change_request_1(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_change_request_1\n"); );
    VLFSRResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VLFSRResetTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
