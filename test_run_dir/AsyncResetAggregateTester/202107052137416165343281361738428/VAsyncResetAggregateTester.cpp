// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetAggregateTester.h for the primary calling header

#include "VAsyncResetAggregateTester.h"
#include "VAsyncResetAggregateTester__Syms.h"

//==========

VerilatedContext* VAsyncResetAggregateTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VAsyncResetAggregateTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetAggregateTester::eval\n"); );
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAsyncResetAggregateTester::_eval_initial_loop(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAsyncResetAggregateTester::_sequent__TOP__1(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_sequent__TOP__1\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ ((5U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:70 assert(reg(0).x === 5.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ ((5U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:65: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 65, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ ((6U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:71 assert(reg(0).y === 6.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ ((6U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:87: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 87, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ ((7U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:72 assert(reg(1).x === 7.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ ((7U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:109: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 109, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ ((8U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:73 assert(reg(1).y === 8.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ ((8U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:131: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 131, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:76 assert(reg(0).x === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:153: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 153, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:77 assert(reg(0).y === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:175: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 175, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:78 assert(reg(1).x === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:197: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 197, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:79 assert(reg(1).y === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                          & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:219: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 219, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((5U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:81 assert(reg(0).x === 5.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((5U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:241: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 241, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((6U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:82 assert(reg(0).y === 6.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((6U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:263: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 263, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((7U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:83 assert(reg(1).x === 7.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((7U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:285: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 285, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((8U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:84 assert(reg(1).y === 8.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ ((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                              & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)))) 
                          & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count))) 
                         & (~ ((8U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:307: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 307, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v", 318, "");
        }
    }
    vlTOPp->AsyncResetAggregateTester__DOT__cDiv_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1));
    vlTOPp->AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetAggregateTester__DOT__cDiv_value)));
    vlTOPp->AsyncResetAggregateTester__DOT__slowClk 
        = (3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__cDiv_value));
}

VL_INLINE_OPT void VAsyncResetAggregateTester::_sequent__TOP__3(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_sequent__TOP__3\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext) {
        vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y = 0U;
        vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x = 0U;
        vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y = 0U;
        vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x = 0U;
    } else {
        vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y = 8U;
        vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x = 7U;
        vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y = 6U;
        vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x = 5U;
    }
}

VL_INLINE_OPT void VAsyncResetAggregateTester::_sequent__TOP__4(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_sequent__TOP__4\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext 
        = ((~ (IData)(vlTOPp->reset)) & (4U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)));
    vlTOPp->AsyncResetAggregateTester__DOT__count = 
        ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AsyncResetAggregateTester__DOT___wrap_value_T_1));
    vlTOPp->AsyncResetAggregateTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->AsyncResetAggregateTester__DOT__count)));
}

void VAsyncResetAggregateTester::_eval(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_eval\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext))) 
         | ((IData)(vlTOPp->AsyncResetAggregateTester__DOT__slowClk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
        = vlTOPp->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk 
        = vlTOPp->AsyncResetAggregateTester__DOT__slowClk;
    vlTOPp->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
        = vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext;
}

VL_INLINE_OPT QData VAsyncResetAggregateTester::_change_request(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_change_request\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAsyncResetAggregateTester::_change_request_1(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_change_request_1\n"); );
    VAsyncResetAggregateTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /home/wangpeng/test/playground_test/test_run_dir/AsyncResetAggregateTester/202107052137416165343281361738428/AsyncResetAggregateTester.v:20: AsyncResetAggregateTester.asyncResetNext\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
        = vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetAggregateTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
