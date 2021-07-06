// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPopCountTester.h for the primary calling header

#include "VPopCountTester.h"
#include "VPopCountTester__Syms.h"

//==========

VerilatedContext* VPopCountTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VPopCountTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPopCountTester::eval\n"); );
    VPopCountTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/PopCountTester/202107052141341499939712928425012/PopCountTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPopCountTester::_eval_initial_loop(VPopCountTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/PopCountTester/202107052141341499939712928425012/PopCountTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPopCountTester::_sequent__TOP__1(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_sequent__TOP__1\n"); );
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->PopCountTester__DOT__REG) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/PopCountTester/202107052141341499939712928425012/PopCountTester.v", 33, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((3U & ((1U & (IData)(vlTOPp->PopCountTester__DOT__x)) 
                                          + ((1U & 
                                              ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                               >> 1U)) 
                                             + (1U 
                                                & ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                   >> 2U))))) 
                                   == (0xfU & ((7U 
                                                & ((1U 
                                                    & (IData)(vlTOPp->PopCountTester__DOT__x)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                       >> 1U)))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                     >> 2U))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at PopCount.scala:16 assert(result === expected)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((3U & ((1U & (IData)(vlTOPp->PopCountTester__DOT__x)) 
                                          + ((1U & 
                                              ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                               >> 1U)) 
                                             + (1U 
                                                & ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                   >> 2U))))) 
                                   == (0xfU & ((7U 
                                                & ((1U 
                                                    & (IData)(vlTOPp->PopCountTester__DOT__x)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                       >> 1U)))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->PopCountTester__DOT__x) 
                                                     >> 2U))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: PopCountTester.v:55: Assertion failed in %NPopCountTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/PopCountTester/202107052141341499939712928425012/PopCountTester.v", 55, "");
        }
    }
    vlTOPp->PopCountTester__DOT__REG = (7U == (IData)(vlTOPp->PopCountTester__DOT__x));
    vlTOPp->PopCountTester__DOT__x = ((IData)(vlTOPp->reset)
                                       ? 0U : (IData)(vlTOPp->PopCountTester__DOT___x_T_1));
    vlTOPp->PopCountTester__DOT___x_T_1 = (7U & ((IData)(1U) 
                                                 + (IData)(vlTOPp->PopCountTester__DOT__x)));
}

void VPopCountTester::_eval(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_eval\n"); );
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VPopCountTester::_change_request(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_change_request\n"); );
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPopCountTester::_change_request_1(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_change_request_1\n"); );
    VPopCountTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPopCountTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
