// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSqueezeFunctionalityTester.h for the primary calling header

#include "VSqueezeFunctionalityTester.h"
#include "VSqueezeFunctionalityTester__Syms.h"

//==========

VerilatedContext* VSqueezeFunctionalityTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VSqueezeFunctionalityTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSqueezeFunctionalityTester::eval\n"); );
    VSqueezeFunctionalityTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/SqueezeFunctionalityTester/2021070521450311297826235836358826/SqueezeFunctionalityTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSqueezeFunctionalityTester::_eval_initial_loop(VSqueezeFunctionalityTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/SqueezeFunctionalityTester/2021070521450311297826235836358826/SqueezeFunctionalityTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSqueezeFunctionalityTester::_sequent__TOP__1(VSqueezeFunctionalityTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_sequent__TOP__1\n"); );
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0xaU < (IData)(vlTOPp->SqueezeFunctionalityTester__DOT__counter)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/SqueezeFunctionalityTester/2021070521450311297826235836358826/SqueezeFunctionalityTester.v", 28, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"SqueezeTest %4#    %2#.squeeze(range\"[-2,5].0\") => %2#\n",
                       10,vlTOPp->SqueezeFunctionalityTester__DOT__counter,
                       4,(0xfU & ((0x1fU & VL_EXTENDS_II(5,4, 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SqueezeFunctionalityTester__DOT__counter)))) 
                                  - (IData)(6U))),4,
                       (0xfU & ((0x1fU & VL_EXTENDS_II(5,4, 
                                                       (0xfU 
                                                        & (IData)(vlTOPp->SqueezeFunctionalityTester__DOT__counter)))) 
                                - (IData)(6U))));
        }
    }
    vlTOPp->SqueezeFunctionalityTester__DOT__counter 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->SqueezeFunctionalityTester__DOT___counter_T_1));
    vlTOPp->SqueezeFunctionalityTester__DOT___counter_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->SqueezeFunctionalityTester__DOT__counter)));
}

void VSqueezeFunctionalityTester::_eval(VSqueezeFunctionalityTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_eval\n"); );
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VSqueezeFunctionalityTester::_change_request(VSqueezeFunctionalityTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_change_request\n"); );
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSqueezeFunctionalityTester::_change_request_1(VSqueezeFunctionalityTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_change_request_1\n"); );
    VSqueezeFunctionalityTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSqueezeFunctionalityTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
