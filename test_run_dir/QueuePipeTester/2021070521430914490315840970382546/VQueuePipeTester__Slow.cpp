// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueuePipeTester.h for the primary calling header

#include "VQueuePipeTester.h"
#include "VQueuePipeTester__Syms.h"

//==========

VQueuePipeTester::VQueuePipeTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VQueuePipeTester__Syms* __restrict vlSymsp = __VlSymsp = new VQueuePipeTester__Syms(_vcontextp__, this, name());
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VQueuePipeTester::__Vconfigure(VQueuePipeTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VQueuePipeTester::~VQueuePipeTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VQueuePipeTester::_settle__TOP__2(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_settle__TOP__2\n"); );
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->QueuePipeTester__DOT__wrap = (0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value));
    vlTOPp->QueuePipeTester__DOT___value_T_1 = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlTOPp->QueuePipeTester__DOT__value)));
    vlTOPp->QueuePipeTester__DOT__wrap_1 = (0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value_1));
    vlTOPp->QueuePipeTester__DOT___value_T_3 = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlTOPp->QueuePipeTester__DOT__value_1)));
    vlTOPp->QueuePipeTester__DOT__q__DOT__wrap = (2U 
                                                  == (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__enq_ptr_value));
    vlTOPp->QueuePipeTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__enq_ptr_value)));
    vlTOPp->QueuePipeTester__DOT__q__DOT__wrap_1 = 
        (2U == (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__deq_ptr_value));
    vlTOPp->QueuePipeTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__deq_ptr_value)));
    vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_diff 
        = (3U & ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__enq_ptr_value) 
                 - (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__deq_ptr_value)));
    vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__deq_ptr_value));
    vlTOPp->QueuePipeTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlTOPp->QueuePipeTester__DOT__q__DOT__empty = ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_match) 
                                                   & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__maybe_full)));
    vlTOPp->QueuePipeTester__DOT__q_io_enq_ready = 
        (1U & (((IData)(vlTOPp->QueuePipeTester__DOT___q_io_deq_ready_T) 
                >> 0xcU) | (~ ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__ptr_match) 
                               & (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__maybe_full)))));
    vlTOPp->QueuePipeTester__DOT__q__DOT__do_deq = 
        (1U & (((IData)(vlTOPp->QueuePipeTester__DOT___q_io_deq_ready_T) 
                >> 0xcU) & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__empty))));
    vlTOPp->QueuePipeTester__DOT___T_7 = ((IData)(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready) 
                                          & (0x14U 
                                             > (IData)(vlTOPp->QueuePipeTester__DOT__value)));
    vlTOPp->QueuePipeTester__DOT__q__DOT__do_enq = 
        ((IData)(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready) 
         & (0x14U > (IData)(vlTOPp->QueuePipeTester__DOT__value)));
}

void VQueuePipeTester::_eval_initial(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_eval_initial\n"); );
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VQueuePipeTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::final\n"); );
    // Variables
    VQueuePipeTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueuePipeTester::_eval_settle(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_eval_settle\n"); );
    VQueuePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VQueuePipeTester::_ctor_var_reset(VQueuePipeTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_enq_ready = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__value = VL_RAND_RESET_I(5);
    self->QueuePipeTester__DOT__value_1 = VL_RAND_RESET_I(5);
    self->QueuePipeTester__DOT___q_io_deq_ready_T = VL_RAND_RESET_I(16);
    self->QueuePipeTester__DOT___T_7 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__wrap = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT___value_T_1 = VL_RAND_RESET_I(5);
    self->QueuePipeTester__DOT__wrap_1 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT___value_T_3 = VL_RAND_RESET_I(5);
    self->QueuePipeTester__DOT__q__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    self->QueuePipeTester__DOT__q__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    self->QueuePipeTester__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q__DOT__ptr_match = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q__DOT__empty = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q__DOT__do_enq = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q__DOT__do_deq = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q__DOT__wrap = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q__DOT___value_T_1 = VL_RAND_RESET_I(2);
    self->QueuePipeTester__DOT__q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q__DOT___value_T_3 = VL_RAND_RESET_I(2);
    self->QueuePipeTester__DOT__q__DOT__ptr_diff = VL_RAND_RESET_I(2);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    self->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}