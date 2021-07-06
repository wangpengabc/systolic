// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithParamsTester.h for the primary calling header

#include "VBlackBoxWithParamsTester.h"
#include "VBlackBoxWithParamsTester__Syms.h"

//==========

VerilatedContext* VBlackBoxWithParamsTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VBlackBoxWithParamsTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlackBoxWithParamsTester::eval\n"); );
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/BlackBoxWithParamsTester/2021070521411716092053020330379406/BlackBoxWithParamsTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBlackBoxWithParamsTester::_eval_initial_loop(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/BlackBoxWithParamsTester/2021070521411716092053020330379406/BlackBoxWithParamsTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBlackBoxWithParamsTester::_sequent__TOP__1(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_sequent__TOP__1\n"); );
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->BlackBoxWithParamsTester__DOT__cycles)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/BlackBoxWithParamsTester/2021070521411716092053020330379406/BlackBoxWithParamsTester.v", 239, "");
        }
    }
    vlTOPp->BlackBoxWithParamsTester__DOT__cycles = 
        ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BlackBoxWithParamsTester__DOT___wrap_value_T_1));
    vlTOPp->BlackBoxWithParamsTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->BlackBoxWithParamsTester__DOT__cycles)));
}

void VBlackBoxWithParamsTester::_eval(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_eval\n"); );
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VBlackBoxWithParamsTester::_change_request(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_change_request\n"); );
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBlackBoxWithParamsTester::_change_request_1(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_change_request_1\n"); );
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBlackBoxWithParamsTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
