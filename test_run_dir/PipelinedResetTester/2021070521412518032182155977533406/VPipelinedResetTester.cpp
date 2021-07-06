// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedResetTester.h for the primary calling header

#include "VPipelinedResetTester.h"
#include "VPipelinedResetTester__Syms.h"

//==========

VerilatedContext* VPipelinedResetTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VPipelinedResetTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPipelinedResetTester::eval\n"); );
    VPipelinedResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/PipelinedResetTester/2021070521412518032182155977533406/PipelinedResetTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPipelinedResetTester::_eval_initial_loop(VPipelinedResetTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/PipelinedResetTester/2021070521412518032182155977533406/PipelinedResetTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPipelinedResetTester::_sequent__TOP__1(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_sequent__TOP__1\n"); );
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->reset)) 
                          & (3U == (IData)(vlTOPp->PipelinedResetTester__DOT__done_value))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/PipelinedResetTester/2021070521412518032182155977533406/PipelinedResetTester.v", 24, "");
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->PipelinedResetTester__DOT__done_value = 0U;
    } else if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->PipelinedResetTester__DOT__done_value 
            = vlTOPp->PipelinedResetTester__DOT___done_wrap_value_T_1;
    }
    vlTOPp->PipelinedResetTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->PipelinedResetTester__DOT__done_value)));
}

void VPipelinedResetTester::_eval(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_eval\n"); );
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VPipelinedResetTester::_change_request(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_change_request\n"); );
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPipelinedResetTester::_change_request_1(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_change_request_1\n"); );
    VPipelinedResetTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPipelinedResetTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
