// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftsTester.h for the primary calling header

#include "VShiftsTester.h"
#include "VShiftsTester__Syms.h"

//==========

VerilatedContext* VShiftsTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VShiftsTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShiftsTester::eval\n"); );
    VShiftsTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftsTester/202107052138123373928995375832470/ShiftsTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VShiftsTester::_eval_initial_loop(VShiftsTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftsTester/202107052138123373928995375832470/ShiftsTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VShiftsTester::_sequent__TOP__1(VShiftsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::_sequent__TOP__1\n"); );
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__ShiftsTester__DOT__srs_2;
    // Body
    __Vdly__ShiftsTester__DOT__srs_2 = vlTOPp->ShiftsTester__DOT__srs_2;
    __Vdly__ShiftsTester__DOT__srs_2 = vlTOPp->ShiftsTester__DOT__srs_1;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ShiftsTester__DOT__REG) 
                         & (~ ((0x19U == (IData)(vlTOPp->ShiftsTester__DOT__srs_0)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:80 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ShiftsTester__DOT__REG) 
                         & (~ ((0x19U == (IData)(vlTOPp->ShiftsTester__DOT__srs_0)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:48: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftsTester/202107052138123373928995375832470/ShiftsTester.v", 48, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ShiftsTester__DOT__REG) 
                         & (~ ((0x18U == (IData)(vlTOPp->ShiftsTester__DOT__srs_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:80 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ShiftsTester__DOT__REG) 
                         & (~ ((0x18U == (IData)(vlTOPp->ShiftsTester__DOT__srs_1)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:70: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftsTester/202107052138123373928995375832470/ShiftsTester.v", 70, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ShiftsTester__DOT__REG) 
                         & (~ ((0x17U == (IData)(vlTOPp->ShiftsTester__DOT__srs_2)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:80 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ShiftsTester__DOT__REG) 
                         & (~ ((0x17U == (IData)(vlTOPp->ShiftsTester__DOT__srs_2)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:92: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftsTester/202107052138123373928995375832470/ShiftsTester.v", 92, "");
        }
    }
    vlTOPp->ShiftsTester__DOT__srs_1 = vlTOPp->ShiftsTester__DOT__srs_0;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ShiftsTester__DOT__REG) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/ShiftsTester/202107052138123373928995375832470/ShiftsTester.v", 103, "");
        }
    }
    vlTOPp->ShiftsTester__DOT__srs_2 = __Vdly__ShiftsTester__DOT__srs_2;
    vlTOPp->ShiftsTester__DOT__REG = (2U == (IData)(vlTOPp->ShiftsTester__DOT__cntVal));
    vlTOPp->ShiftsTester__DOT__srs_0 = (0x1fU & ((IData)(0x17U) 
                                                 + (IData)(vlTOPp->ShiftsTester__DOT__cntVal)));
    vlTOPp->ShiftsTester__DOT__cntVal = ((IData)(vlTOPp->reset)
                                          ? 0U : ((IData)(vlTOPp->ShiftsTester__DOT__wrap_wrap)
                                                   ? 0U
                                                   : (IData)(vlTOPp->ShiftsTester__DOT___wrap_value_T_1)));
    vlTOPp->ShiftsTester__DOT__wrap_wrap = (2U == (IData)(vlTOPp->ShiftsTester__DOT__cntVal));
    vlTOPp->ShiftsTester__DOT___wrap_value_T_1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->ShiftsTester__DOT__cntVal)));
}

void VShiftsTester::_eval(VShiftsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::_eval\n"); );
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VShiftsTester::_change_request(VShiftsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::_change_request\n"); );
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VShiftsTester::_change_request_1(VShiftsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::_change_request_1\n"); );
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VShiftsTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
