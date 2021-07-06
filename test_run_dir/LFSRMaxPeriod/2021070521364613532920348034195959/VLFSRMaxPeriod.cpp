// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRMaxPeriod.h for the primary calling header

#include "VLFSRMaxPeriod.h"
#include "VLFSRMaxPeriod__Syms.h"

//==========

VerilatedContext* VLFSRMaxPeriod::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VLFSRMaxPeriod::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLFSRMaxPeriod::eval\n"); );
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRMaxPeriod/2021070521364613532920348034195959/LFSRMaxPeriod.v", 72, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VLFSRMaxPeriod::_eval_initial_loop(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRMaxPeriod/2021070521364613532920348034195959/LFSRMaxPeriod.v", 72, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VLFSRMaxPeriod::_sequent__TOP__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_sequent__TOP__1\n"); );
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
                           == (IData)(vlTOPp->LFSRMaxPeriod__DOT__seed)) 
                          & (IData)(vlTOPp->LFSRMaxPeriod__DOT__started)) 
                         & (~ (((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
                                & (2U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at LFSRSpec.scala:27 chisel3.assert(wrap)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
                           == (IData)(vlTOPp->LFSRMaxPeriod__DOT__seed)) 
                          & (IData)(vlTOPp->LFSRMaxPeriod__DOT__started)) 
                         & (~ (((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
                                & (2U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: LFSRMaxPeriod.v:138: Assertion failed in %NLFSRMaxPeriod\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRMaxPeriod/2021070521364613532920348034195959/LFSRMaxPeriod.v", 138, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
                           == (IData)(vlTOPp->LFSRMaxPeriod__DOT__seed)) 
                          & (IData)(vlTOPp->LFSRMaxPeriod__DOT__started)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRMaxPeriod/2021070521364613532920348034195959/LFSRMaxPeriod.v", 149, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
                                   != (IData)(vlTOPp->LFSRMaxPeriod__DOT__last)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: LFSR last value (0b%b) was equal to current value (0b%b)\n    at LFSRSpec.scala:32 chisel3.assert(rv =/= last, \"LFSR last value (0b%%b) was equal to current value (0b%%b)\", rv, last)\n",
                       2,vlTOPp->LFSRMaxPeriod__DOT__rv,
                       2,(IData)(vlTOPp->LFSRMaxPeriod__DOT__last));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
                                   != (IData)(vlTOPp->LFSRMaxPeriod__DOT__last)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: LFSRMaxPeriod.v:173: Assertion failed in %NLFSRMaxPeriod\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/LFSRMaxPeriod/2021070521364613532920348034195959/LFSRMaxPeriod.v", 173, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LFSRMaxPeriod__DOT__started)))) {
        vlTOPp->LFSRMaxPeriod__DOT__seed = vlTOPp->LFSRMaxPeriod__DOT__rv;
    }
    if (vlTOPp->reset) {
        vlTOPp->LFSRMaxPeriod__DOT__wrap_value = 0U;
    } else if (vlTOPp->LFSRMaxPeriod__DOT__started) {
        vlTOPp->LFSRMaxPeriod__DOT__wrap_value = ((IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_wrap_wrap)
                                                   ? 0U
                                                   : (IData)(vlTOPp->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1));
    }
    vlTOPp->LFSRMaxPeriod__DOT__last = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                                         << 1U) | (IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
    vlTOPp->LFSRMaxPeriod__DOT__wrap_wrap_wrap = (2U 
                                                  == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value));
    vlTOPp->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value)));
    vlTOPp->LFSRMaxPeriod__DOT__started = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
    vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT___T_1));
    vlTOPp->LFSRMaxPeriod__DOT__rv = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                                       << 1U) | (IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
    vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT___T_1 
        = (1U & (~ ((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                    ^ (IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0))));
}

void VLFSRMaxPeriod::_eval(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_eval\n"); );
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VLFSRMaxPeriod::_change_request(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_change_request\n"); );
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VLFSRMaxPeriod::_change_request_1(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_change_request_1\n"); );
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VLFSRMaxPeriod::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
