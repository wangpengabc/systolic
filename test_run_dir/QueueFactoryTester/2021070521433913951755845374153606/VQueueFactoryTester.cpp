// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueFactoryTester.h for the primary calling header

#include "VQueueFactoryTester.h"
#include "VQueueFactoryTester__Syms.h"

//==========

VerilatedContext* VQueueFactoryTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VQueueFactoryTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueFactoryTester::eval\n"); );
    VQueueFactoryTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueFactoryTester/2021070521433913951755845374153606/QueueFactoryTester.v", 361, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VQueueFactoryTester::_eval_initial_loop(VQueueFactoryTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueFactoryTester/2021070521433913951755845374153606/QueueFactoryTester.v", 361, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VQueueFactoryTester::_sequent__TOP__1(VQueueFactoryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_sequent__TOP__1\n"); );
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvdim0__QueueFactoryTester__DOT__deq__DOT__ram__v0;
    CData/*3:0*/ __Vdlyvval__QueueFactoryTester__DOT__deq__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__QueueFactoryTester__DOT__deq__DOT__ram__v0;
    CData/*0:0*/ __Vdly__QueueFactoryTester__DOT__deq__DOT__value_1;
    CData/*0:0*/ __Vdly__QueueFactoryTester__DOT__deq__DOT__value;
    CData/*0:0*/ __Vdly__QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__QueueFactoryTester__DOT__deq__DOT__ram__v0 = 0U;
    __Vdly__QueueFactoryTester__DOT__deq__DOT__value 
        = vlTOPp->QueueFactoryTester__DOT__deq__DOT__value;
    __Vdly__QueueFactoryTester__DOT__deq__DOT__value_1 
        = vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                                 >> 1U) & (~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__empty))) 
                               & (~ ((((0x13U == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                        ? 0U : ((0x12U 
                                                 == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                 ? 5U
                                                 : 
                                                ((0x11U 
                                                  == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                  ? 7U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                   ? 0xbU
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                    ? 8U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                     ? 4U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                      ? 4U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                       ? 1U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                        ? 0xcU
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                         ? 0xcU
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                           ? 0xeU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                            ? 1U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                             ? 0xfU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                              ? 0xeU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                               ? 3U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                                ? 0xdU
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                                 ? 0xeU
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                                  ? 8U
                                                                  : 0xeU))))))))))))))))))) 
                                      == vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram
                                      [vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:191 assert(elems(outCnt.value) === deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                                 >> 1U) & (~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__empty))) 
                               & (~ ((((0x13U == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                        ? 0U : ((0x12U 
                                                 == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                 ? 5U
                                                 : 
                                                ((0x11U 
                                                  == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                  ? 7U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                   ? 0xbU
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                    ? 8U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                     ? 4U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                      ? 4U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                       ? 1U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                        ? 0xcU
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                         ? 0xcU
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                           ? 0xeU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                            ? 1U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                             ? 0xfU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                              ? 0xeU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                               ? 3U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                                ? 0xdU
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                                 ? 0xeU
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))
                                                                  ? 8U
                                                                  : 0xeU))))))))))))))))))) 
                                      == vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram
                                      [vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: QueueFactoryTester.v:521: Assertion failed in %NQueueFactoryTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueFactoryTester/2021070521433913951755845374153606/QueueFactoryTester.v", 521, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/QueueFactoryTester/2021070521433913951755845374153606/QueueFactoryTester.v", 532, "");
        }
    }
    __Vdly__QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0 
        = vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0;
    if (vlTOPp->reset) {
        vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_enq) 
                != (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_deq))) {
        vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full 
            = vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_enq;
    }
    if (((~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__full)) 
         & (0x14U > (IData)(vlTOPp->QueueFactoryTester__DOT__value)))) {
        __Vdlyvval__QueueFactoryTester__DOT__deq__DOT__ram__v0 
            = ((0x13U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                ? 0U : ((0x12U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                         ? 5U : ((0x11U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                  ? 7U : ((0x10U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                           ? 0xbU : 
                                          ((0xfU == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                            ? 8U : 
                                           ((0xeU == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                             ? 4U : 
                                            ((0xdU 
                                              == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                              ? 4U : 
                                             ((0xcU 
                                               == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                               ? 1U
                                               : ((0xbU 
                                                   == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                   ? 0xcU
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                    ? 0xcU
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                     ? 6U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                      ? 0xeU
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                        ? 0xfU
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                         ? 0xeU
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                          ? 3U
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                           ? 0xdU
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                            ? 0xeU
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->QueueFactoryTester__DOT__value))
                                                             ? 8U
                                                             : 0xeU)))))))))))))))))));
        __Vdlyvset__QueueFactoryTester__DOT__deq__DOT__ram__v0 = 1U;
        __Vdlyvdim0__QueueFactoryTester__DOT__deq__DOT__ram__v0 
            = vlTOPp->QueueFactoryTester__DOT__deq__DOT__value;
    }
    if (vlTOPp->reset) {
        __Vdly__QueueFactoryTester__DOT__deq__DOT__value = 0U;
    } else if (vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_enq) {
        __Vdly__QueueFactoryTester__DOT__deq__DOT__value 
            = (1U & ((IData)(1U) + (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__value)));
    }
    __Vdly__QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__QueueFactoryTester__DOT__deq__DOT__ram__v0) {
        vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram[__Vdlyvdim0__QueueFactoryTester__DOT__deq__DOT__ram__v0] 
            = __Vdlyvval__QueueFactoryTester__DOT__deq__DOT__ram__v0;
    }
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__value 
        = __Vdly__QueueFactoryTester__DOT__deq__DOT__value;
    if (vlTOPp->reset) {
        vlTOPp->QueueFactoryTester__DOT__value_1 = 0U;
    } else if ((1U & (((IData)(vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                       >> 1U) & (~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__empty))))) {
        vlTOPp->QueueFactoryTester__DOT__value_1 = 
            ((IData)(vlTOPp->QueueFactoryTester__DOT__wrap_1)
              ? 0U : (IData)(vlTOPp->QueueFactoryTester__DOT___value_T_3));
    }
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram_io_deq_bits_MPORT_addr_pipe_0 
        = ((IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_deq)
            ? ((1U != (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT___GEN_8)) 
               & (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT___value_T_3))
            : (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1));
    if (vlTOPp->reset) {
        __Vdly__QueueFactoryTester__DOT__deq__DOT__value_1 = 0U;
    } else if (vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_deq) {
        __Vdly__QueueFactoryTester__DOT__deq__DOT__value_1 
            = (1U & ((IData)(1U) + (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1)));
    }
    if (vlTOPp->reset) {
        vlTOPp->QueueFactoryTester__DOT__value = 0U;
    } else if (vlTOPp->QueueFactoryTester__DOT___T) {
        vlTOPp->QueueFactoryTester__DOT__value = ((IData)(vlTOPp->QueueFactoryTester__DOT__wrap)
                                                   ? 0U
                                                   : (IData)(vlTOPp->QueueFactoryTester__DOT___value_T_1));
    }
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1 
        = __Vdly__QueueFactoryTester__DOT__deq__DOT__value_1;
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14));
    vlTOPp->QueueFactoryTester__DOT__wrap_1 = (0x14U 
                                               == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1));
    vlTOPp->QueueFactoryTester__DOT___value_T_3 = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->QueueFactoryTester__DOT__value_1)));
    vlTOPp->QueueFactoryTester__DOT__deq__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1)));
    vlTOPp->QueueFactoryTester__DOT__deq__DOT___GEN_8 
        = vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1;
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__ptr_match 
        = ((IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__value) 
           == (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1));
    vlTOPp->QueueFactoryTester__DOT__wrap = (0x14U 
                                             == (IData)(vlTOPp->QueueFactoryTester__DOT__value));
    vlTOPp->QueueFactoryTester__DOT___value_T_1 = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->QueueFactoryTester__DOT__value)));
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__empty 
        = ((IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full)));
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__full 
        = ((IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ptr_match) 
           & (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13));
    vlTOPp->QueueFactoryTester__DOT___T = ((~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__full)) 
                                           & (0x14U 
                                              > (IData)(vlTOPp->QueueFactoryTester__DOT__value)));
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__full)) 
           & (0x14U > (IData)(vlTOPp->QueueFactoryTester__DOT__value)));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0));
    vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0 
        = __Vdly__QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0;
    vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T 
        = (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_deq 
        = (1U & (((IData)(vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                  >> 1U) & (~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__empty))));
}

void VQueueFactoryTester::_eval(VQueueFactoryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_eval\n"); );
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VQueueFactoryTester::_change_request(VQueueFactoryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_change_request\n"); );
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VQueueFactoryTester::_change_request_1(VQueueFactoryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_change_request_1\n"); );
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VQueueFactoryTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
