// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedVendingMachineTester.h for the primary calling header

#include "VParameterizedVendingMachineTester.h"
#include "VParameterizedVendingMachineTester__Syms.h"

//==========

VerilatedContext* VParameterizedVendingMachineTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VParameterizedVendingMachineTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VParameterizedVendingMachineTester::eval\n"); );
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ParameterizedVendingMachineTester/2021070521343014060437855292276379/ParameterizedVendingMachineTester.v", 120, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VParameterizedVendingMachineTester::_eval_initial_loop(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ParameterizedVendingMachineTester/2021070521343014060437855292276379/ParameterizedVendingMachineTester.v", 120, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VParameterizedVendingMachineTester::_sequent__TOP__1(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_sequent__TOP__1\n"); );
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                               & (~ ((~ ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                         >> 1U)) | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                               & (~ ((~ ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                         >> 1U)) | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:43: Assertion failed in %NParameterizedVendingMachineTester.dut\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ParameterizedVendingMachineTester/2021070521343014060437855292276379/ParameterizedVendingMachineTester.v", 43, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                >> 1U) & (~ ((~ (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102)) 
                                             | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                >> 1U) & (~ ((~ (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102)) 
                                             | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:67: Assertion failed in %NParameterizedVendingMachineTester.dut\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ParameterizedVendingMachineTester/2021070521343014060437855292276379/ParameterizedVendingMachineTester.v", 67, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/ParameterizedVendingMachineTester/2021070521343014060437855292276379/ParameterizedVendingMachineTester.v", 301, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/ParameterizedVendingMachineTester/2021070521343014060437855292276379/ParameterizedVendingMachineTester.v", 312, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((0x1edU <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value)) 
                                   == ((0x63U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                       & ((0x62U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                          & ((0x61U 
                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                             & ((0x60U 
                                                 != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                & ((0x5fU 
                                                    != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                   & ((0x5eU 
                                                       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                      & ((0x5dU 
                                                          != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                         & ((0x5cU 
                                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                            & ((0x5bU 
                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                               & ((0x5aU 
                                                                   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                  & ((0x59U 
                                                                      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                     & ((0x58U 
                                                                         != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                        & ((0x57U 
                                                                            != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                           & ((0x56U 
                                                                               != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                              & ((0x55U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x54U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x53U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x52U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_184)))))))))))))))))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at VendingMachineGenerator.scala:97 assert(dut.io.dispense === expectedVec(idx))\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((0x1edU <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value)) 
                                   == ((0x63U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                       & ((0x62U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                          & ((0x61U 
                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                             & ((0x60U 
                                                 != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                & ((0x5fU 
                                                    != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                   & ((0x5eU 
                                                       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                      & ((0x5dU 
                                                          != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                         & ((0x5cU 
                                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                            & ((0x5bU 
                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                               & ((0x5aU 
                                                                   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                  & ((0x59U 
                                                                      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                     & ((0x58U 
                                                                         != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                        & ((0x57U 
                                                                            != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                           & ((0x56U 
                                                                               != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                              & ((0x55U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x54U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x53U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x52U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_184)))))))))))))))))))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:335: Assertion failed in %NParameterizedVendingMachineTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ParameterizedVendingMachineTester/2021070521343014060437855292276379/ParameterizedVendingMachineTester.v", 335, "");
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value = 0U;
        vlTOPp->ParameterizedVendingMachineTester__DOT__idx = 0U;
    } else {
        vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value 
            = ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense)
                ? 0U : (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT___value_T_1));
        vlTOPp->ParameterizedVendingMachineTester__DOT__idx 
            = ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__wrap_wrap)
                ? 0U : (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___wrap_value_T_1));
    }
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense 
        = (0x1edU <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value));
    vlTOPp->ParameterizedVendingMachineTester__DOT__wrap_wrap 
        = (0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx));
    vlTOPp->ParameterizedVendingMachineTester__DOT___wrap_value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_184 
        = ((0x51U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x50U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
              & ((0x4fU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                 & ((0x4eU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                    & ((0x4dU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x4cU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                          & ((0x4bU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                             & ((0x4aU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x49U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                   & ((0x48U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x47U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x46U 
                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x45U 
                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x44U 
                                                   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x43U 
                                                      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     & ((0x42U 
                                                         != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x41U 
                                                            != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x40U 
                                                               != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x3fU 
                                                                  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0x3eU 
                                                                     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0x3dU 
                                                                        != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x3cU 
                                                                           != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0x3bU 
                                                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0x3aU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x39U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (0x38U 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_23 
        = ((0x14U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
            ? 1U : ((0x13U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                     ? 1U : ((0x12U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                              ? 1U : ((0x11U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 0U : ((0x10U 
                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 1U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 2U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 0U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 0U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 2U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 0U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 2U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 2U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 0U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 2U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                               ? 0U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                ? 0U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                 ? 1U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                  ? 0U
                                                                  : 2U))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_44 
        = ((0x29U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
            ? 2U : ((0x28U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                     ? 0U : ((0x27U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                              ? 1U : ((0x26U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 0U : ((0x25U 
                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 2U
                                                : (
                                                   (0x24U 
                                                    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 2U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 0U
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 0U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 0U
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 2U
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 1U
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 1U
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 0U
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 1U
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 2U
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                               ? 1U
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                ? 2U
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                 ? 1U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                  ? 2U
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                   ? 1U
                                                                   : (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_23))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_65 
        = ((0x3eU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
            ? 1U : ((0x3dU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                     ? 1U : ((0x3cU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                              ? 1U : ((0x3bU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 1U : ((0x3aU 
                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 0U
                                                : (
                                                   (0x39U 
                                                    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 0U
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 1U
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 2U
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 2U
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 1U
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 1U
                                                          : 
                                                         ((0x32U 
                                                           == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 1U
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 1U
                                                            : 
                                                           ((0x30U 
                                                             == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 0U
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 2U
                                                              : 
                                                             ((0x2eU 
                                                               == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                               ? 1U
                                                               : 
                                                              ((0x2dU 
                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                ? 0U
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                 ? 1U
                                                                 : 
                                                                ((0x2bU 
                                                                  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                  ? 1U
                                                                  : 
                                                                 ((0x2aU 
                                                                   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                   ? 0U
                                                                   : (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_44))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_86 
        = ((0x53U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
            ? 2U : ((0x52U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                     ? 0U : ((0x51U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                              ? 2U : ((0x50U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 0U : ((0x4fU 
                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 2U
                                                : (
                                                   (0x4eU 
                                                    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 2U
                                                    : 
                                                   ((0x4dU 
                                                     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 2U
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 1U
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 1U
                                                       : 
                                                      ((0x4aU 
                                                        == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 1U
                                                        : 
                                                       ((0x49U 
                                                         == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 0U
                                                         : 
                                                        ((0x48U 
                                                          == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 2U
                                                          : 
                                                         ((0x47U 
                                                           == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 2U
                                                           : 
                                                          ((0x46U 
                                                            == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 0U
                                                            : 
                                                           ((0x45U 
                                                             == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 1U
                                                             : 
                                                            ((0x44U 
                                                              == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 1U
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                               ? 1U
                                                               : 
                                                              ((0x42U 
                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                ? 2U
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                 ? 2U
                                                                 : 
                                                                ((0x40U 
                                                                  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x3fU 
                                                                   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                                   ? 1U
                                                                   : (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_65))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102 
        = ((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
            ? 0U : ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                     ? 2U : ((0x61U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                              ? 1U : ((0x60U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 2U : ((0x5fU 
                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 0U
                                                : (
                                                   (0x5eU 
                                                    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 0U
                                                    : 
                                                   ((0x5dU 
                                                     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 1U
                                                     : 
                                                    ((0x5cU 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 0U
                                                      : 
                                                     ((0x5bU 
                                                       == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 2U
                                                       : 
                                                      ((0x5aU 
                                                        == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 2U
                                                        : 
                                                       ((0x59U 
                                                         == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 1U
                                                         : 
                                                        ((0x58U 
                                                          == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 0U
                                                          : 
                                                         ((0x57U 
                                                           == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 1U
                                                           : 
                                                          ((0x56U 
                                                            == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 0U
                                                            : 
                                                           ((0x55U 
                                                             == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 2U
                                                             : 
                                                            ((0x54U 
                                                              == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 2U
                                                              : (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_86)))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT___value_T_1 
        = (0x3ffU & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value) 
                     + ((2U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                         ? 0x1dU : ((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_102))
                                     ? 1U : 0U))));
}

void VParameterizedVendingMachineTester::_eval(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_eval\n"); );
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VParameterizedVendingMachineTester::_change_request(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_change_request\n"); );
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VParameterizedVendingMachineTester::_change_request_1(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_change_request_1\n"); );
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VParameterizedVendingMachineTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
