// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTblTester.h for the primary calling header

#include "VTblTester.h"
#include "VTblTester__Syms.h"

//==========

VerilatedContext* VTblTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VTblTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTblTester::eval\n"); );
    VTblTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/TblTester/2021070521400317633635933479677661/TblTester.v", 79, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTblTester::_eval_initial_loop(VTblTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/TblTester/2021070521400317633635933479677661/TblTester.v", 79, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTblTester::_sequent__TOP__1(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_sequent__TOP__1\n"); );
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0;
    CData/*1:0*/ __Vdlyvval__TblTester__DOT__dut__DOT__m__v0;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((0U < (IData)(vlTOPp->TblTester__DOT__cnt)) 
                          & (((7U == (7U & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                            - (IData)(1U))))
                               ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_16)) 
                             == ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                  ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_8)))) 
                         & (~ (((((IData)(vlTOPp->TblTester__DOT__dut_io_ri) 
                                  == (IData)(vlTOPp->TblTester__DOT__dut_io_wi))
                                  ? (IData)(vlTOPp->TblTester__DOT__dut_io_d)
                                  : vlTOPp->TblTester__DOT__dut__DOT__m
                                 [vlTOPp->TblTester__DOT__dut_io_ri]) 
                                == ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                     ? 1U : (IData)(vlTOPp->TblTester__DOT___GEN_24))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Tbl.scala:40 assert(dut.io.o === vvalues(cnt))\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((0U < (IData)(vlTOPp->TblTester__DOT__cnt)) 
                          & (((7U == (7U & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                            - (IData)(1U))))
                               ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_16)) 
                             == ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                  ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_8)))) 
                         & (~ (((((IData)(vlTOPp->TblTester__DOT__dut_io_ri) 
                                  == (IData)(vlTOPp->TblTester__DOT__dut_io_wi))
                                  ? (IData)(vlTOPp->TblTester__DOT__dut_io_d)
                                  : vlTOPp->TblTester__DOT__dut__DOT__m
                                 [vlTOPp->TblTester__DOT__dut_io_ri]) 
                                == ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                     ? 1U : (IData)(vlTOPp->TblTester__DOT___GEN_24))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: TblTester.v:156: Assertion failed in %NTblTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/TblTester/2021070521400317633635933479677661/TblTester.v", 156, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((0U < (IData)(vlTOPp->TblTester__DOT__cnt)) 
                          & (((7U == (7U & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                            - (IData)(1U))))
                               ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_16)) 
                             != ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                  ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_8)))) 
                         & (~ (((((IData)(vlTOPp->TblTester__DOT__dut_io_ri) 
                                  == (IData)(vlTOPp->TblTester__DOT__dut_io_wi))
                                  ? (IData)(vlTOPp->TblTester__DOT__dut_io_d)
                                  : vlTOPp->TblTester__DOT__dut__DOT__m
                                 [vlTOPp->TblTester__DOT__dut_io_ri]) 
                                == ((7U == (7U & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                  - (IData)(1U))))
                                     ? 1U : ((6U == 
                                              (7U & 
                                               ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                - (IData)(1U))))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                   - (IData)(1U))))
                                               ? 0U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                       - (IData)(1U))))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                        - (IData)(1U))))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                         - (IData)(1U))))
                                                     ? 1U
                                                     : 2U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Tbl.scala:42 assert(dut.io.o === prev_value)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((0U < (IData)(vlTOPp->TblTester__DOT__cnt)) 
                          & (((7U == (7U & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                            - (IData)(1U))))
                               ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_16)) 
                             != ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                  ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_8)))) 
                         & (~ (((((IData)(vlTOPp->TblTester__DOT__dut_io_ri) 
                                  == (IData)(vlTOPp->TblTester__DOT__dut_io_wi))
                                  ? (IData)(vlTOPp->TblTester__DOT__dut_io_d)
                                  : vlTOPp->TblTester__DOT__dut__DOT__m
                                 [vlTOPp->TblTester__DOT__dut_io_ri]) 
                                == ((7U == (7U & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                  - (IData)(1U))))
                                     ? 1U : ((6U == 
                                              (7U & 
                                               ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                - (IData)(1U))))
                                              ? 1U : 
                                             ((5U == 
                                               (7U 
                                                & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                   - (IData)(1U))))
                                               ? 0U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                       - (IData)(1U))))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                        - (IData)(1U))))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                         - (IData)(1U))))
                                                     ? 1U
                                                     : 2U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: TblTester.v:178: Assertion failed in %NTblTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/TblTester/2021070521400317633635933479677661/TblTester.v", 178, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((7U == (IData)(vlTOPp->TblTester__DOT__cnt)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/TblTester/2021070521400317633635933479677661/TblTester.v", 189, "");
        }
    }
    __Vdlyvval__TblTester__DOT__dut__DOT__m__v0 = vlTOPp->TblTester__DOT__dut_io_d;
    __Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0 = vlTOPp->TblTester__DOT__dut_io_wi;
    vlTOPp->TblTester__DOT__dut__DOT__m[__Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0] 
        = __Vdlyvval__TblTester__DOT__dut__DOT__m__v0;
    vlTOPp->TblTester__DOT__cnt = ((IData)(vlTOPp->reset)
                                    ? 0U : (IData)(vlTOPp->TblTester__DOT___wrap_value_T_1));
    vlTOPp->TblTester__DOT___wrap_value_T_1 = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlTOPp->TblTester__DOT__cnt)));
    vlTOPp->TblTester__DOT___GEN_8 = ((6U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                       ? 1U : ((5U 
                                                == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                ? 1U
                                                : (
                                                   (4U 
                                                    == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                       ? 0U
                                                       : 3U))))));
    vlTOPp->TblTester__DOT___GEN_16 = ((6U == (7U & 
                                               ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                - (IData)(1U))))
                                        ? 1U : ((5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                     - (IData)(1U))))
                                                 ? 1U
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                      - (IData)(1U))))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                       - (IData)(1U))))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                        - (IData)(1U))))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                         - (IData)(1U))))
                                                     ? 0U
                                                     : 3U))))));
    vlTOPp->TblTester__DOT___GEN_24 = ((6U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                        ? 1U : ((5U 
                                                 == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                    ? 1U
                                                    : 2U)))));
    vlTOPp->TblTester__DOT__dut_io_wi = ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                          ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_8));
    vlTOPp->TblTester__DOT__dut_io_ri = ((7U == (7U 
                                                 & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                    - (IData)(1U))))
                                          ? 3U : (IData)(vlTOPp->TblTester__DOT___GEN_16));
    vlTOPp->TblTester__DOT__dut_io_d = ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                         ? 1U : (IData)(vlTOPp->TblTester__DOT___GEN_24));
}

void VTblTester::_eval(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_eval\n"); );
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VTblTester::_change_request(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_change_request\n"); );
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTblTester::_change_request_1(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_change_request_1\n"); );
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTblTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
