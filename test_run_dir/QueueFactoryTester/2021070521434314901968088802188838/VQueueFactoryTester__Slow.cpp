// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueFactoryTester.h for the primary calling header

#include "VQueueFactoryTester.h"
#include "VQueueFactoryTester__Syms.h"

//==========

VQueueFactoryTester::VQueueFactoryTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VQueueFactoryTester__Syms* __restrict vlSymsp = __VlSymsp = new VQueueFactoryTester__Syms(_vcontextp__, this, name());
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VQueueFactoryTester::__Vconfigure(VQueueFactoryTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VQueueFactoryTester::~VQueueFactoryTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VQueueFactoryTester::_settle__TOP__2(VQueueFactoryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_settle__TOP__2\n"); );
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->QueueFactoryTester__DOT__wrap_1 = (0x14U 
                                               == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1));
    vlTOPp->QueueFactoryTester__DOT___value_T_3 = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->QueueFactoryTester__DOT__value_1)));
    vlTOPp->QueueFactoryTester__DOT__wrap = (0x14U 
                                             == (IData)(vlTOPp->QueueFactoryTester__DOT__value));
    vlTOPp->QueueFactoryTester__DOT___value_T_1 = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->QueueFactoryTester__DOT__value)));
    vlTOPp->QueueFactoryTester__DOT___T = ((~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full)) 
                                           & (0x14U 
                                              > (IData)(vlTOPp->QueueFactoryTester__DOT__value)));
    vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full)) 
           & (0x14U > (IData)(vlTOPp->QueueFactoryTester__DOT__value)));
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
        = (((IData)(vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
            >> 0xdU) & (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full));
}

void VQueueFactoryTester::_eval_initial(VQueueFactoryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_eval_initial\n"); );
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VQueueFactoryTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::final\n"); );
    // Variables
    VQueueFactoryTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueueFactoryTester::_eval_settle(VQueueFactoryTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_eval_settle\n"); );
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VQueueFactoryTester::_ctor_var_reset(VQueueFactoryTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__value = VL_RAND_RESET_I(5);
    self->QueueFactoryTester__DOT__value_1 = VL_RAND_RESET_I(5);
    self->QueueFactoryTester__DOT___deq_io_deq_ready_T = VL_RAND_RESET_I(16);
    self->QueueFactoryTester__DOT___T = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__wrap = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT___value_T_1 = VL_RAND_RESET_I(5);
    self->QueueFactoryTester__DOT__wrap_1 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT___value_T_3 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->QueueFactoryTester__DOT__deq__DOT__ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    self->QueueFactoryTester__DOT__deq__DOT__maybe_full = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq__DOT__do_enq = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq__DOT__do_deq = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    self->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
