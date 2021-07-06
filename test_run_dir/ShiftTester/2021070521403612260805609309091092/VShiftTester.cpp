// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftTester.h for the primary calling header

#include "VShiftTester.h"
#include "VShiftTester__Syms.h"

//==========

VerilatedContext* VShiftTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VShiftTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShiftTester::eval\n"); );
    VShiftTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftTester/2021070521403612260805609309091092/ShiftTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VShiftTester::_eval_initial_loop(VShiftTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftTester/2021070521403612260805609309091092/ShiftTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VShiftTester::_sequent__TOP__1(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_sequent__TOP__1\n"); );
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->ShiftTester__DOT__cntVal)) 
                         & (~ ((0x17U == (IData)(vlTOPp->ShiftTester__DOT__sr)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:49 assert(sr === start)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->ShiftTester__DOT__cntVal)) 
                         & (~ ((0x17U == (IData)(vlTOPp->ShiftTester__DOT__sr)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: ShiftTester.v:45: Assertion failed in %NShiftTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftTester/2021070521403612260805609309091092/ShiftTester.v", 45, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->ShiftTester__DOT__cntVal)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftTester/2021070521403612260805609309091092/ShiftTester.v", 56, "");
        }
    }
    vlTOPp->ShiftTester__DOT__sr = vlTOPp->ShiftTester__DOT__sr_r_1;
    vlTOPp->ShiftTester__DOT__sr_r_1 = vlTOPp->ShiftTester__DOT__sr_r;
    vlTOPp->ShiftTester__DOT__sr_r = (0x1fU & ((IData)(0x17U) 
                                               + (IData)(vlTOPp->ShiftTester__DOT__cntVal)));
    vlTOPp->ShiftTester__DOT__cntVal = ((IData)(vlTOPp->reset)
                                         ? 0U : ((IData)(vlTOPp->ShiftTester__DOT__wrap_wrap)
                                                  ? 0U
                                                  : (IData)(vlTOPp->ShiftTester__DOT___wrap_value_T_1)));
    vlTOPp->ShiftTester__DOT__wrap_wrap = (2U == (IData)(vlTOPp->ShiftTester__DOT__cntVal));
    vlTOPp->ShiftTester__DOT___wrap_value_T_1 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ShiftTester__DOT__cntVal)));
}

void VShiftTester::_eval(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_eval\n"); );
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VShiftTester::_change_request(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_change_request\n"); );
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VShiftTester::_change_request_1(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_change_request_1\n"); );
    VShiftTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VShiftTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
