// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalTester2.h for the primary calling header

#include "VIntervalTester2.h"
#include "VIntervalTester2__Syms.h"

//==========

VerilatedContext* VIntervalTester2::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VIntervalTester2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalTester2::eval\n"); );
    VIntervalTester2__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalTester2/2021070521445618407130610467951301/IntervalTester2.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIntervalTester2::_eval_initial_loop(VIntervalTester2__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalTester2/2021070521445618407130610467951301/IntervalTester2.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VIntervalTester2::_sequent__TOP__1(VIntervalTester2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_sequent__TOP__1\n"); );
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0xaU == (IData)(vlTOPp->IntervalTester2__DOT__cycle)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalTester2/2021070521445618407130610467951301/IntervalTester2.v", 25, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalTester2/2021070521445618407130610467951301/IntervalTester2.v", 36, "");
        }
    }
    vlTOPp->IntervalTester2__DOT__cycle = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           ((IData)(vlTOPp->IntervalTester2__DOT__wrap_wrap)
                                             ? 0U : (IData)(vlTOPp->IntervalTester2__DOT___wrap_value_T_1)));
    vlTOPp->IntervalTester2__DOT__wrap_wrap = (0xaU 
                                               == (IData)(vlTOPp->IntervalTester2__DOT__cycle));
    vlTOPp->IntervalTester2__DOT___wrap_value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlTOPp->IntervalTester2__DOT__cycle)));
}

void VIntervalTester2::_eval(VIntervalTester2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_eval\n"); );
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VIntervalTester2::_change_request(VIntervalTester2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_change_request\n"); );
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIntervalTester2::_change_request_1(VIntervalTester2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_change_request_1\n"); );
    VIntervalTester2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIntervalTester2::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
