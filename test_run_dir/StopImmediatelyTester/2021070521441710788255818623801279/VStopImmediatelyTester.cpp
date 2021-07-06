// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStopImmediatelyTester.h for the primary calling header

#include "VStopImmediatelyTester.h"
#include "VStopImmediatelyTester__Syms.h"

//==========

VerilatedContext* VStopImmediatelyTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VStopImmediatelyTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStopImmediatelyTester::eval\n"); );
    VStopImmediatelyTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/StopImmediatelyTester/2021070521441710788255818623801279/StopImmediatelyTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VStopImmediatelyTester::_eval_initial_loop(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/StopImmediatelyTester/2021070521441710788255818623801279/StopImmediatelyTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VStopImmediatelyTester::_sequent__TOP__1(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_sequent__TOP__1\n"); );
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((4U == (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/StopImmediatelyTester/2021070521441710788255818623801279/StopImmediatelyTester.v", 22, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ ((5U != (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Simulation did not exit upon executing stop()\n    at Stop.scala:18 assert(cycle =/= 5.U, \"Simulation did not exit upon executing stop()\")\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ ((5U != (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: StopImmediatelyTester.v:46: Assertion failed in %NStopImmediatelyTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/StopImmediatelyTester/2021070521441710788255818623801279/StopImmediatelyTester.v", 46, "");
        }
    }
    vlTOPp->StopImmediatelyTester__DOT__cycle = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : (IData)(vlTOPp->StopImmediatelyTester__DOT___cycle_T_1));
    vlTOPp->StopImmediatelyTester__DOT___cycle_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)));
}

void VStopImmediatelyTester::_eval(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_eval\n"); );
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VStopImmediatelyTester::_change_request(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_change_request\n"); );
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VStopImmediatelyTester::_change_request_1(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_change_request_1\n"); );
    VStopImmediatelyTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VStopImmediatelyTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
