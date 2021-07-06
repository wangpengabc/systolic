// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleVendingMachineTester.h for the primary calling header

#include "VSimpleVendingMachineTester.h"
#include "VSimpleVendingMachineTester__Syms.h"

//==========

VerilatedContext* VSimpleVendingMachineTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VSimpleVendingMachineTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimpleVendingMachineTester::eval\n"); );
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/SimpleVendingMachineTester/202107052134341883855841846172167/SimpleVendingMachineTester.v", 111, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSimpleVendingMachineTester::_eval_initial_loop(VSimpleVendingMachineTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/SimpleVendingMachineTester/202107052134341883855841846172167/SimpleVendingMachineTester.v", 111, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSimpleVendingMachineTester::_sequent__TOP__1(VSimpleVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_sequent__TOP__1\n"); );
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state;
    // Body
    __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state 
        = vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel) 
                                      & (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Only one of nickel or dime can be input at a time!\n    at SimpleVendingMachine.scala:19 assert(!(io.nickel && io.dime), \"Only one of nickel or dime can be input at a time!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel) 
                                      & (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: SimpleVendingMachineTester.v:58: Assertion failed in %NSimpleVendingMachineTester.dut\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/SimpleVendingMachineTester/202107052134341883855841846172167/SimpleVendingMachineTester.v", 58, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/SimpleVendingMachineTester/202107052134341883855841846172167/SimpleVendingMachineTester.v", 159, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/SimpleVendingMachineTester/202107052134341883855841846172167/SimpleVendingMachineTester.v", 170, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((4U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state)) 
                                   == ((9U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                       & ((8U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                          & ((7U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                             | ((6U 
                                                 != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                                & ((5U 
                                                    != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                                   & (4U 
                                                      == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)))))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SimpleVendingMachine.scala:84 assert(dut.io.dispense === expected(cycle))\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((4U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state)) 
                                   == ((9U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                       & ((8U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                          & ((7U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                             | ((6U 
                                                 != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                                & ((5U 
                                                    != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                                                   & (4U 
                                                      == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)))))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: SimpleVendingMachineTester.v:193: Assertion failed in %NSimpleVendingMachineTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/SimpleVendingMachineTester/202107052134341883855841846172167/SimpleVendingMachineTester.v", 193, "");
        }
    }
    if (vlTOPp->reset) {
        __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state = 0U;
    } else if ((0U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state))) {
        if (vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime) {
            __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state = 2U;
        } else if (vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel) {
            __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state = 1U;
        }
    } else {
        __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state 
            = ((1U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state))
                ? ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime)
                    ? 3U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_2))
                : ((2U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state))
                    ? (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_5)
                    : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_9)));
    }
    vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state 
        = __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state;
    vlTOPp->SimpleVendingMachineTester__DOT__cycle 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__wrap_wrap)
                                           ? 0U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT___wrap_value_T_1)));
    vlTOPp->SimpleVendingMachineTester__DOT__wrap_wrap 
        = (9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle));
    vlTOPp->SimpleVendingMachineTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)));
    vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime 
        = ((9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
           | ((8U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
              & ((7U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                 & ((6U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                    | (5U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))))));
    vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel 
        = ((9U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
           & ((8U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
              | ((7U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                 & ((6U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                    & (5U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))))));
    vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_2 
        = ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel)
            ? 2U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state));
    vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_5 
        = ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime)
            ? 4U : ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel)
                     ? 3U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state)));
    vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_9 
        = ((3U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state))
            ? ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime)
                ? 4U : ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel)
                         ? 4U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state)))
            : ((4U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state))
                ? 0U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state)));
}

void VSimpleVendingMachineTester::_eval(VSimpleVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_eval\n"); );
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VSimpleVendingMachineTester::_change_request(VSimpleVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_change_request\n"); );
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSimpleVendingMachineTester::_change_request_1(VSimpleVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_change_request_1\n"); );
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSimpleVendingMachineTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG