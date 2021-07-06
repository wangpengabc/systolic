// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThingsPassThroughTester.h for the primary calling header

#include "VThingsPassThroughTester.h"
#include "VThingsPassThroughTester__Syms.h"

//==========

VerilatedContext* VThingsPassThroughTester::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VThingsPassThroughTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VThingsPassThroughTester::eval\n"); );
    VThingsPassThroughTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ThingsPassThroughTester/2021070521421711157632960219353456/ThingsPassThroughTester.v", 362, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VThingsPassThroughTester::_eval_initial_loop(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/wangpeng/test/playground_test/test_run_dir/ThingsPassThroughTester/2021070521421711157632960219353456/ThingsPassThroughTester.v", 362, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VThingsPassThroughTester::_sequent__TOP__1(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_sequent__TOP__1\n"); );
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdlyvdim0__ThingsPassThroughTester__DOT__q__DOT__ram__v0;
    CData/*3:0*/ __Vdlyvval__ThingsPassThroughTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ThingsPassThroughTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdly__ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__ThingsPassThroughTester__DOT__q__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (((IData)(vlTOPp->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
                                & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty))) 
                               & (~ ((((0x13U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                        ? 0xbU : ((0x12U 
                                                   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                   ? 0xcU
                                                   : 
                                                  ((0x11U 
                                                    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                    ? 4U
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                     ? 0xfU
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                      ? 7U
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                       ? 4U
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                        ? 0xfU
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                         ? 3U
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                          ? 0xbU
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                           ? 0xeU
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                            ? 5U
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                             ? 0xdU
                                                             : 
                                                            ((7U 
                                                              == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                              ? 9U
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                               ? 0U
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                ? 0xaU
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                 ? 9U
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                  ? 4U
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                   ? 0xeU
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                    ? 9U
                                                                    : 0xcU))))))))))))))))))) 
                                      == vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram
                                      [vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:29 assert(elems(outCnt.value) === q.io.deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (((IData)(vlTOPp->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
                                & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty))) 
                               & (~ ((((0x13U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                        ? 0xbU : ((0x12U 
                                                   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                   ? 0xcU
                                                   : 
                                                  ((0x11U 
                                                    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                    ? 4U
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                     ? 0xfU
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                      ? 7U
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                       ? 4U
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                        ? 0xfU
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                         ? 3U
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                          ? 0xbU
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                           ? 0xeU
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                            ? 5U
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                             ? 0xdU
                                                             : 
                                                            ((7U 
                                                              == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                              ? 9U
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                               ? 0U
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                ? 0xaU
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                 ? 9U
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                  ? 4U
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                   ? 0xeU
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
                                                                    ? 9U
                                                                    : 0xcU))))))))))))))))))) 
                                      == vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram
                                      [vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: ThingsPassThroughTester.v:520: Assertion failed in %NThingsPassThroughTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/wangpeng/test/playground_test/test_run_dir/ThingsPassThroughTester/2021070521421711157632960219353456/ThingsPassThroughTester.v", 520, "");
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/ThingsPassThroughTester/2021070521421711157632960219353456/ThingsPassThroughTester.v", 531, "");
        }
    }
    __Vdly__ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    if (vlTOPp->reset) {
        vlTOPp->ThingsPassThroughTester__DOT__q__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_enq) 
                != (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_deq))) {
        vlTOPp->ThingsPassThroughTester__DOT__q__DOT__maybe_full 
            = vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_enq;
    }
    if (((~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full)) 
         & (0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)))) {
        __Vdlyvval__ThingsPassThroughTester__DOT__q__DOT__ram__v0 
            = ((0x13U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                ? 0xbU : ((0x12U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                           ? 0xcU : ((0x11U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                      ? 4U : ((0x10U 
                                               == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                               ? 0xfU
                                               : ((0xfU 
                                                   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                   ? 7U
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                    ? 4U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                     ? 0xfU
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                      ? 3U
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                       ? 0xbU
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                        ? 0xeU
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                         ? 5U
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                          ? 0xdU
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                           ? 9U
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                            ? 0U
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                             ? 0xaU
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                              ? 9U
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                               ? 4U
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
                                                                 ? 9U
                                                                 : 0xcU)))))))))))))))))));
        __Vdlyvset__ThingsPassThroughTester__DOT__q__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ThingsPassThroughTester__DOT__q__DOT__ram__v0 
            = vlTOPp->ThingsPassThroughTester__DOT__q__DOT__enq_ptr_value;
    }
    __Vdly__ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__ThingsPassThroughTester__DOT__q__DOT__ram__v0) {
        vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram[__Vdlyvdim0__ThingsPassThroughTester__DOT__q__DOT__ram__v0] 
            = __Vdlyvval__ThingsPassThroughTester__DOT__q__DOT__ram__v0;
    }
    if (vlTOPp->reset) {
        vlTOPp->ThingsPassThroughTester__DOT__value_1 = 0U;
    } else if ((1U & ((IData)(vlTOPp->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
                      & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty))))) {
        vlTOPp->ThingsPassThroughTester__DOT__value_1 
            = ((IData)(vlTOPp->ThingsPassThroughTester__DOT__wrap_1)
                ? 0U : (IData)(vlTOPp->ThingsPassThroughTester__DOT___value_T_3));
    }
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0 
        = (3U & ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_deq)
                  ? ((3U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value))
                      ? 0U : ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value)))
                  : (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value)));
    if (vlTOPp->reset) {
        vlTOPp->ThingsPassThroughTester__DOT__value = 0U;
    } else if (vlTOPp->ThingsPassThroughTester__DOT___T) {
        vlTOPp->ThingsPassThroughTester__DOT__value 
            = ((IData)(vlTOPp->ThingsPassThroughTester__DOT__wrap)
                ? 0U : (IData)(vlTOPp->ThingsPassThroughTester__DOT___value_T_1));
    }
    if (vlTOPp->reset) {
        vlTOPp->ThingsPassThroughTester__DOT__q__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_enq) {
        vlTOPp->ThingsPassThroughTester__DOT__q__DOT__enq_ptr_value 
            = vlTOPp->ThingsPassThroughTester__DOT__q__DOT___value_T_1;
    }
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlTOPp->ThingsPassThroughTester__DOT__wrap_1 = 
        (0x14U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1));
    vlTOPp->ThingsPassThroughTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1)));
    if (vlTOPp->reset) {
        vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value = 0U;
    } else if (vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_deq) {
        vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value 
            = vlTOPp->ThingsPassThroughTester__DOT__q__DOT___value_T_3;
    }
    vlTOPp->ThingsPassThroughTester__DOT__wrap = (0x14U 
                                                  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value));
    vlTOPp->ThingsPassThroughTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__enq_ptr_value)));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty 
        = ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__maybe_full)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full 
        = ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__maybe_full));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlTOPp->ThingsPassThroughTester__DOT___T = ((~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full)) 
                                                & (0x14U 
                                                   > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__full)) 
           & (0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlTOPp->ThingsPassThroughTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT__do_deq 
        = (1U & ((IData)(vlTOPp->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
                 & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__empty))));
}

void VThingsPassThroughTester::_eval(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_eval\n"); );
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VThingsPassThroughTester::_change_request(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_change_request\n"); );
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VThingsPassThroughTester::_change_request_1(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_change_request_1\n"); );
    VThingsPassThroughTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VThingsPassThroughTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
