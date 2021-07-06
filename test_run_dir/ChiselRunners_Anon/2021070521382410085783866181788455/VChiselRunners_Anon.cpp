// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChiselRunners_Anon.h for the primary calling header

#include "VChiselRunners_Anon.h"
#include "VChiselRunners_Anon__Syms.h"

//==========

VerilatedContext* VChiselRunners_Anon::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VChiselRunners_Anon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VChiselRunners_Anon::eval\n"); );
    VChiselRunners_Anon__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ChiselRunners_Anon/2021070521382410085783866181788455/ChiselRunners_Anon.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VChiselRunners_Anon::_eval_initial_loop(VChiselRunners_Anon__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ChiselRunners_Anon/2021070521382410085783866181788455/ChiselRunners_Anon.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VChiselRunners_Anon::_sequent__TOP__1(VChiselRunners_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_sequent__TOP__1\n"); );
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ChiselRunners_Anon__DOT__done_value) 
                         & (~ ((0xfU == (0xfU & (~ (IData)(vlTOPp->ChiselRunners_Anon__DOT__x)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ChiselSpec.scala:71 chisel3.assert(~(x.asUInt) === -1.S(expected.W).asUInt)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ChiselRunners_Anon__DOT__done_value) 
                         & (~ ((0xfU == (0xfU & (~ (IData)(vlTOPp->ChiselRunners_Anon__DOT__x)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: ChiselRunners_Anon.v:38: Assertion failed in %NChiselRunners_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ChiselRunners_Anon/2021070521382410085783866181788455/ChiselRunners_Anon.v", 38, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((IData)(vlTOPp->ChiselRunners_Anon__DOT__done_value) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/ChiselRunners_Anon/2021070521382410085783866181788455/ChiselRunners_Anon.v", 49, "");
        }
    }
    vlTOPp->ChiselRunners_Anon__DOT__x = ((IData)(vlTOPp->reset)
                                           ? 3U : 0U);
    vlTOPp->ChiselRunners_Anon__DOT__done_value = (
                                                   (~ (IData)(vlTOPp->reset)) 
                                                   & (IData)(vlTOPp->ChiselRunners_Anon__DOT___done_wrap_value_T_1));
    vlTOPp->ChiselRunners_Anon__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->ChiselRunners_Anon__DOT__done_value)));
}

void VChiselRunners_Anon::_eval(VChiselRunners_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_eval\n"); );
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VChiselRunners_Anon::_change_request(VChiselRunners_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_change_request\n"); );
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VChiselRunners_Anon::_change_request_1(VChiselRunners_Anon__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_change_request_1\n"); );
    VChiselRunners_Anon* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VChiselRunners_Anon::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
