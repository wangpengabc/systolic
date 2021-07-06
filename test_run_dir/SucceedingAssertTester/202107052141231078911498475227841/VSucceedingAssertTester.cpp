// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSucceedingAssertTester.h for the primary calling header

#include "VSucceedingAssertTester.h"
#include "VSucceedingAssertTester__Syms.h"

//==========

VerilatedContext* VSucceedingAssertTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VSucceedingAssertTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSucceedingAssertTester::eval\n"); );
    VSucceedingAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/SucceedingAssertTester/202107052141231078911498475227841/SucceedingAssertTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSucceedingAssertTester::_eval_initial_loop(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/SucceedingAssertTester/202107052141231078911498475227841/SucceedingAssertTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSucceedingAssertTester::_sequent__TOP__1(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_sequent__TOP__1\n"); );
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->reset)) 
                          & (3U == (IData)(vlTOPp->SucceedingAssertTester__DOT__done_value))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/SucceedingAssertTester/202107052141231078911498475227841/SucceedingAssertTester.v", 24, "");
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SucceedingAssertTester__DOT__done_value = 0U;
    } else if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->SucceedingAssertTester__DOT__done_value 
            = vlTOPp->SucceedingAssertTester__DOT___done_wrap_value_T_1;
    }
    vlTOPp->SucceedingAssertTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->SucceedingAssertTester__DOT__done_value)));
}

void VSucceedingAssertTester::_eval(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_eval\n"); );
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VSucceedingAssertTester::_change_request(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_change_request\n"); );
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSucceedingAssertTester::_change_request_1(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_change_request_1\n"); );
    VSucceedingAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSucceedingAssertTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
