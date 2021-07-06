// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAspectTester.h for the primary calling header

#include "VAspectTester.h"
#include "VAspectTester__Syms.h"

//==========

VerilatedContext* VAspectTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VAspectTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAspectTester::eval\n"); );
    VAspectTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AspectTester/2021070521401114854191991757349696/AspectTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAspectTester::_eval_initial_loop(VAspectTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AspectTester/2021070521401114854191991757349696/AspectTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAspectTester::_sequent__TOP__1(VAspectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_sequent__TOP__1\n"); );
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U <= (IData)(vlTOPp->AspectTester__DOT__counter)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/AspectTester/2021070521401114854191991757349696/AspectTester.v", 24, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((3U > (IData)(vlTOPp->AspectTester__DOT__counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at InjectionSpec.scala:57 assert(counter === values(counter))\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((3U > (IData)(vlTOPp->AspectTester__DOT__counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: AspectTester.v:46: Assertion failed in %NAspectTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AspectTester/2021070521401114854191991757349696/AspectTester.v", 46, "");
        }
    }
    vlTOPp->AspectTester__DOT__counter = ((IData)(vlTOPp->reset)
                                           ? 0U : (IData)(vlTOPp->AspectTester__DOT___counter_T_1));
    vlTOPp->AspectTester__DOT___counter_T_1 = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlTOPp->AspectTester__DOT__counter)));
}

void VAspectTester::_eval(VAspectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_eval\n"); );
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VAspectTester::_change_request(VAspectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_change_request\n"); );
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAspectTester::_change_request_1(VAspectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_change_request_1\n"); );
    VAspectTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAspectTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
