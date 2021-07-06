// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCDTester.h for the primary calling header

#include "VGCDTester.h"
#include "VGCDTester__Syms.h"

//==========

VerilatedContext* VGCDTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VGCDTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGCDTester::eval\n"); );
    VGCDTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/GCDTester/2021070521381615555200137768046262/GCDTester.v", 77, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VGCDTester::_eval_initial_loop(VGCDTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/GCDTester/2021070521381615555200137768046262/GCDTester.v", 77, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VGCDTester::_sequent__TOP__1(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_sequent__TOP__1\n"); );
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__GCDTester__DOT__dut__DOT__x;
    IData/*31:0*/ __Vdly__GCDTester__DOT__dut__DOT__y;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->GCDTester__DOT__first)) 
                          & (0U == vlTOPp->GCDTester__DOT__dut__DOT__y)) 
                         & (~ ((0x10U == vlTOPp->GCDTester__DOT__dut__DOT__x) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at GCD.scala:34 assert(dut.io.z === z.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->GCDTester__DOT__first)) 
                          & (0U == vlTOPp->GCDTester__DOT__dut__DOT__y)) 
                         & (~ ((0x10U == vlTOPp->GCDTester__DOT__dut__DOT__x) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: GCDTester.v:117: Assertion failed in %NGCDTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/GCDTester/2021070521381615555200137768046262/GCDTester.v", 117, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->GCDTester__DOT__first)) 
                          & (0U == vlTOPp->GCDTester__DOT__dut__DOT__y)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/GCDTester/2021070521381615555200137768046262/GCDTester.v", 128, "");
        }
    }
    __Vdly__GCDTester__DOT__dut__DOT__y = vlTOPp->GCDTester__DOT__dut__DOT__y;
    __Vdly__GCDTester__DOT__dut__DOT__x = vlTOPp->GCDTester__DOT__dut__DOT__x;
    if (vlTOPp->GCDTester__DOT__first) {
        __Vdly__GCDTester__DOT__dut__DOT__x = 0x40U;
    } else if ((vlTOPp->GCDTester__DOT__dut__DOT__x 
                > vlTOPp->GCDTester__DOT__dut__DOT__y)) {
        __Vdly__GCDTester__DOT__dut__DOT__x = vlTOPp->GCDTester__DOT__dut__DOT___x_T_1;
    }
    if (vlTOPp->GCDTester__DOT__first) {
        __Vdly__GCDTester__DOT__dut__DOT__y = 0x30U;
    } else if ((vlTOPp->GCDTester__DOT__dut__DOT__x 
                <= vlTOPp->GCDTester__DOT__dut__DOT__y)) {
        __Vdly__GCDTester__DOT__dut__DOT__y = vlTOPp->GCDTester__DOT__dut__DOT___y_T_1;
    }
    vlTOPp->GCDTester__DOT__dut__DOT__x = __Vdly__GCDTester__DOT__dut__DOT__x;
    vlTOPp->GCDTester__DOT__dut__DOT__y = __Vdly__GCDTester__DOT__dut__DOT__y;
    vlTOPp->GCDTester__DOT__dut__DOT___x_T_1 = (vlTOPp->GCDTester__DOT__dut__DOT__x 
                                                - vlTOPp->GCDTester__DOT__dut__DOT__y);
    vlTOPp->GCDTester__DOT__dut__DOT___y_T_1 = (vlTOPp->GCDTester__DOT__dut__DOT__y 
                                                - vlTOPp->GCDTester__DOT__dut__DOT__x);
    vlTOPp->GCDTester__DOT__first = ((IData)(vlTOPp->reset) 
                                     | (IData)(vlTOPp->GCDTester__DOT___GEN_0));
    vlTOPp->GCDTester__DOT___GEN_0 = 0U;
}

void VGCDTester::_eval(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_eval\n"); );
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VGCDTester::_change_request(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_change_request\n"); );
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VGCDTester::_change_request_1(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_change_request_1\n"); );
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VGCDTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
