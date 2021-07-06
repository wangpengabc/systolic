// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithClockTester.h for the primary calling header

#include "VBlackBoxWithClockTester.h"
#include "VBlackBoxWithClockTester__Syms.h"

//==========

VerilatedContext* VBlackBoxWithClockTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VBlackBoxWithClockTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlackBoxWithClockTester::eval\n"); );
    VBlackBoxWithClockTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/BlackBoxWithClockTester/202107052141166476618467787581910/BlackBoxWithClockTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBlackBoxWithClockTester::_eval_initial_loop(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/BlackBoxWithClockTester/202107052141166476618467787581910/BlackBoxWithClockTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBlackBoxWithClockTester::_sequent__TOP__1(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_sequent__TOP__1\n"); );
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0U < (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles)) 
                         & (~ (((IData)(vlTOPp->BlackBoxWithClockTester__DOT__blackBox__DOT__register) 
                                == (IData)(vlTOPp->BlackBoxWithClockTester__DOT__model)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at BlackBox.scala:118 assert(blackBox.io.out === model)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0U < (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles)) 
                         & (~ (((IData)(vlTOPp->BlackBoxWithClockTester__DOT__blackBox__DOT__register) 
                                == (IData)(vlTOPp->BlackBoxWithClockTester__DOT__model)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: BlackBoxWithClockTester.v:49: Assertion failed in %NBlackBoxWithClockTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/BlackBoxWithClockTester/202107052141166476618467787581910/BlackBoxWithClockTester.v", 49, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0xeU == (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/BlackBoxWithClockTester/202107052141166476618467787581910/BlackBoxWithClockTester.v", 60, "");
        }
    }
    vlTOPp->BlackBoxWithClockTester__DOT__blackBox__DOT__register 
        = (1U & (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles));
    vlTOPp->BlackBoxWithClockTester__DOT__model = (1U 
                                                   & (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles));
    vlTOPp->BlackBoxWithClockTester__DOT__cycles = 
        ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->BlackBoxWithClockTester__DOT__wrap_wrap)
                                         ? 0U : (IData)(vlTOPp->BlackBoxWithClockTester__DOT___wrap_value_T_1)));
    vlTOPp->BlackBoxWithClockTester__DOT__wrap_wrap 
        = (0xeU == (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles));
    vlTOPp->BlackBoxWithClockTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->BlackBoxWithClockTester__DOT__cycles)));
}

void VBlackBoxWithClockTester::_eval(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_eval\n"); );
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VBlackBoxWithClockTester::_change_request(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_change_request\n"); );
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBlackBoxWithClockTester::_change_request_1(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_change_request_1\n"); );
    VBlackBoxWithClockTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBlackBoxWithClockTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
