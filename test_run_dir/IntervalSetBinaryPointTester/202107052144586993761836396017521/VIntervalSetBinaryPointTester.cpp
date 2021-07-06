// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalSetBinaryPointTester.h for the primary calling header

#include "VIntervalSetBinaryPointTester.h"
#include "VIntervalSetBinaryPointTester__Syms.h"

//==========

VerilatedContext* VIntervalSetBinaryPointTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VIntervalSetBinaryPointTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalSetBinaryPointTester::eval\n"); );
    VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalSetBinaryPointTester/202107052144586993761836396017521/IntervalSetBinaryPointTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIntervalSetBinaryPointTester::_eval_initial_loop(VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalSetBinaryPointTester/202107052144586993761836396017521/IntervalSetBinaryPointTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VIntervalSetBinaryPointTester::_sequent__TOP__1(VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::_sequent__TOP__1\n"); );
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalSetBinaryPointTester/202107052144586993761836396017521/IntervalSetBinaryPointTester.v", 11, "");
        }
    }
}

void VIntervalSetBinaryPointTester::_eval(VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::_eval\n"); );
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VIntervalSetBinaryPointTester::_change_request(VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::_change_request\n"); );
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIntervalSetBinaryPointTester::_change_request_1(VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::_change_request_1\n"); );
    VIntervalSetBinaryPointTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIntervalSetBinaryPointTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
