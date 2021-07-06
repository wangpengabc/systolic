// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalRegisterTester.h for the primary calling header

#include "VIntervalRegisterTester.h"
#include "VIntervalRegisterTester__Syms.h"

//==========

VerilatedContext* VIntervalRegisterTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VIntervalRegisterTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalRegisterTester::eval\n"); );
    VIntervalRegisterTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalRegisterTester/202107052145151087222727736035904/IntervalRegisterTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIntervalRegisterTester::_eval_initial_loop(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalRegisterTester/202107052145151087222727736035904/IntervalRegisterTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VIntervalRegisterTester::_sequent__TOP__1(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_sequent__TOP__1\n"); );
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((VL_LTS_III(1,4,4, 4U, (IData)(vlTOPp->IntervalRegisterTester__DOT__counter)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/IntervalRegisterTester/202107052145151087222727736035904/IntervalRegisterTester.v", 23, "");
        }
    }
    vlTOPp->IntervalRegisterTester__DOT__counter = 
        ((IData)(vlTOPp->reset) ? 0xfU : (IData)(vlTOPp->IntervalRegisterTester__DOT___counter_T_1));
    vlTOPp->IntervalRegisterTester__DOT___counter_T_1 
        = (0xfU & ((IData)(1U) + (0x1fU & VL_EXTENDS_II(5,4, (IData)(vlTOPp->IntervalRegisterTester__DOT__counter)))));
}

void VIntervalRegisterTester::_eval(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_eval\n"); );
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VIntervalRegisterTester::_change_request(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_change_request\n"); );
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIntervalRegisterTester::_change_request_1(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_change_request_1\n"); );
    VIntervalRegisterTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIntervalRegisterTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
