// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClipSqueezeWrapDemo.h for the primary calling header

#include "VClipSqueezeWrapDemo.h"
#include "VClipSqueezeWrapDemo__Syms.h"

//==========

VerilatedContext* VClipSqueezeWrapDemo::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VClipSqueezeWrapDemo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VClipSqueezeWrapDemo::eval\n"); );
    VClipSqueezeWrapDemo__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ClipSqueezeWrapDemo/202107052144592460673952903992280/ClipSqueezeWrapDemo.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VClipSqueezeWrapDemo::_eval_initial_loop(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ClipSqueezeWrapDemo/202107052144592460673952903992280/ClipSqueezeWrapDemo.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VClipSqueezeWrapDemo::_sequent__TOP__1(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_sequent__TOP__1\n"); );
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((VL_LTS_III(1,7,7, 0x1eU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/ClipSqueezeWrapDemo/202107052144592460673952903992280/ClipSqueezeWrapDemo.v", 32, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x7cU == (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Target range is range\"[-10,33].0\"\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x7cU == (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"value     clip      squeeze      wrap\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"       %3#       %2#          %2#         %2#\n",
                       7,vlTOPp->ClipSqueezeWrapDemo__DOT__counter,
                       6,(VL_LTS_III(1,7,7, 0x11U, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                           ? 0x11U : (VL_GTS_III(1,7,7, 0x7cU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                       ? 0x3cU : (0x3fU 
                                                  & (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)))),
                       6,(0x3fU & (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)),
                       6,(0x3fU & (VL_LTS_III(1,7,7, 0x11U, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                    ? VL_EXTENDS_II(8,7, 
                                                    (0x7fU 
                                                     & ((IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter) 
                                                        - (IData)(0x16U))))
                                    : (VL_GTS_III(1,7,7, 0x7cU, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))
                                        ? VL_EXTENDS_II(8,7, 
                                                        (0x7fU 
                                                         & ((IData)(0x16U) 
                                                            + (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))))
                                        : ((0x80U & 
                                            ((IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter))))));
        }
    }
    vlTOPp->ClipSqueezeWrapDemo__DOT__counter = ((IData)(vlTOPp->reset)
                                                  ? 0x7cU
                                                  : (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT___counter_T_1));
    vlTOPp->ClipSqueezeWrapDemo__DOT___counter_T_1 
        = (0x7fU & ((IData)(1U) + (0xffU & VL_EXTENDS_II(8,7, (IData)(vlTOPp->ClipSqueezeWrapDemo__DOT__counter)))));
}

void VClipSqueezeWrapDemo::_eval(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_eval\n"); );
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VClipSqueezeWrapDemo::_change_request(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_change_request\n"); );
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VClipSqueezeWrapDemo::_change_request_1(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_change_request_1\n"); );
    VClipSqueezeWrapDemo* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VClipSqueezeWrapDemo::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
