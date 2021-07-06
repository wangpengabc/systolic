// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueSinglePipeTester.h for the primary calling header

#include "VQueueSinglePipeTester.h"
#include "VQueueSinglePipeTester__Syms.h"

//==========

VQueueSinglePipeTester::VQueueSinglePipeTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VQueueSinglePipeTester__Syms* __restrict vlSymsp = __VlSymsp = new VQueueSinglePipeTester__Syms(_vcontextp__, this, name());
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VQueueSinglePipeTester::__Vconfigure(VQueueSinglePipeTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VQueueSinglePipeTester::~VQueueSinglePipeTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VQueueSinglePipeTester::_settle__TOP__2(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_settle__TOP__2\n"); );
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->QueueSinglePipeTester__DOT__wrap = (0x14U 
                                                == (IData)(vlTOPp->QueueSinglePipeTester__DOT__value));
    vlTOPp->QueueSinglePipeTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueSinglePipeTester__DOT__value)));
    vlTOPp->QueueSinglePipeTester__DOT__wrap_1 = (0x14U 
                                                  == (IData)(vlTOPp->QueueSinglePipeTester__DOT__value_1));
    vlTOPp->QueueSinglePipeTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueSinglePipeTester__DOT__value_1)));
    vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlTOPp->QueueSinglePipeTester__DOT__q__DOT__do_deq 
        = (((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
            >> 1U) & (IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full));
    vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready 
        = (1U & (((IData)(vlTOPp->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                  >> 1U) | (~ (IData)(vlTOPp->QueueSinglePipeTester__DOT__q__DOT__maybe_full))));
    vlTOPp->QueueSinglePipeTester__DOT___T_7 = ((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready) 
                                                & (0x14U 
                                                   > (IData)(vlTOPp->QueueSinglePipeTester__DOT__value)));
    vlTOPp->QueueSinglePipeTester__DOT__q__DOT__do_enq 
        = ((IData)(vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready) 
           & (0x14U > (IData)(vlTOPp->QueueSinglePipeTester__DOT__value)));
}

void VQueueSinglePipeTester::_eval_initial(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_eval_initial\n"); );
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VQueueSinglePipeTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::final\n"); );
    // Variables
    VQueueSinglePipeTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueueSinglePipeTester::_eval_settle(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_eval_settle\n"); );
    VQueueSinglePipeTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VQueueSinglePipeTester::_ctor_var_reset(VQueueSinglePipeTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_enq_ready = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__value = VL_RAND_RESET_I(5);
    self->QueueSinglePipeTester__DOT__value_1 = VL_RAND_RESET_I(5);
    self->QueueSinglePipeTester__DOT___q_io_deq_ready_T = VL_RAND_RESET_I(16);
    self->QueueSinglePipeTester__DOT___T_7 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__wrap = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT___value_T_1 = VL_RAND_RESET_I(5);
    self->QueueSinglePipeTester__DOT__wrap_1 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT___value_T_3 = VL_RAND_RESET_I(5);
    self->QueueSinglePipeTester__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q__DOT__do_enq = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q__DOT__do_deq = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    self->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
