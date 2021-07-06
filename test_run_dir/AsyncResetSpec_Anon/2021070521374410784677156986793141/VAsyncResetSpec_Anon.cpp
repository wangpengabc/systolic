// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetSpec_Anon.h for the primary calling header

#include "VAsyncResetSpec_Anon.h"
#include "VAsyncResetSpec_Anon__Syms.h"

//==========

VerilatedContext* VAsyncResetSpec_Anon::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VAsyncResetSpec_Anon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetSpec_Anon::eval\n"); );
    VAsyncResetSpec_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetSpec_Anon/2021070521374410784677156986793141/AsyncResetSpec_Anon.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAsyncResetSpec_Anon::_eval_initial_loop(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetSpec_Anon/2021070521374410784677156986793141/AsyncResetSpec_Anon.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAsyncResetSpec_Anon::_sequent__TOP__2(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_sequent__TOP__2\n"); );
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0U == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count)) 
                         & (~ ((0x1bU == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:203 chisel3.assert(reg === 27.S)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0U == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count)) 
                         & (~ ((0x1bU == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetSpec_Anon.v:36: Assertion failed in %NAsyncResetSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetSpec_Anon/2021070521374410784677156986793141/AsyncResetSpec_Anon.v", 36, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count)) 
                         & (~ ((0x55U == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:205 chisel3.assert(reg === -43.S)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count)) 
                         & (~ ((0x55U == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__reg_)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetSpec_Anon.v:58: Assertion failed in %NAsyncResetSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetSpec_Anon/2021070521374410784677156986793141/AsyncResetSpec_Anon.v", 58, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/AsyncResetSpec_Anon/2021070521374410784677156986793141/AsyncResetSpec_Anon.v", 69, "");
        }
    }
    vlTOPp->AsyncResetSpec_Anon__DOT__count = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (IData)(vlTOPp->AsyncResetSpec_Anon__DOT___wrap_value_T_1));
    vlTOPp->AsyncResetSpec_Anon__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetSpec_Anon__DOT__count)));
}

VL_INLINE_OPT void VAsyncResetSpec_Anon::_sequent__TOP__4(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_sequent__TOP__4\n"); );
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetSpec_Anon__DOT__reg_ = ((IData)(vlTOPp->reset)
                                               ? 0x1bU
                                               : 0x55U);
}

void VAsyncResetSpec_Anon::_eval(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_eval\n"); );
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAsyncResetSpec_Anon::_change_request(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_change_request\n"); );
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAsyncResetSpec_Anon::_change_request_1(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_change_request_1\n"); );
    VAsyncResetSpec_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetSpec_Anon::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
