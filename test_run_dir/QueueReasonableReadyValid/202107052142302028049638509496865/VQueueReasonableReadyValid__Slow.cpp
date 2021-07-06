// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueReasonableReadyValid.h for the primary calling header

#include "VQueueReasonableReadyValid.h"
#include "VQueueReasonableReadyValid__Syms.h"

//==========
VlUnpacked<CData/*0:0*/, 32> VQueueReasonableReadyValid::__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value;
VlUnpacked<CData/*0:0*/, 32> VQueueReasonableReadyValid::__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value;
VlUnpacked<CData/*0:0*/, 32> VQueueReasonableReadyValid::__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full;

VQueueReasonableReadyValid::VQueueReasonableReadyValid(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = __VlSymsp = new VQueueReasonableReadyValid__Syms(_vcontextp__, this, name());
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VQueueReasonableReadyValid::__Vconfigure(VQueueReasonableReadyValid__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VQueueReasonableReadyValid::~VQueueReasonableReadyValid() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VQueueReasonableReadyValid::_settle__TOP__2(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_settle__TOP__2\n"); );
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->QueueReasonableReadyValid__DOT__wrap_1 
        = (0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1));
    vlTOPp->QueueReasonableReadyValid__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1)));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match 
        = ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value));
    vlTOPp->QueueReasonableReadyValid__DOT__wrap = 
        (0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value));
    vlTOPp->QueueReasonableReadyValid__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    vlTOPp->QueueReasonableReadyValid__DOT___q_io_deq_ready_T 
        = (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__empty 
        = ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full)));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full 
        = ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__ptr_match) 
           & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__maybe_full));
    vlTOPp->QueueReasonableReadyValid__DOT___T_10 = 
        ((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__full)) 
         & (0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
}

void VQueueReasonableReadyValid::_eval_initial(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_eval_initial\n"); );
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VQueueReasonableReadyValid::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::final\n"); );
    // Variables
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = this->__VlSymsp;
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueueReasonableReadyValid::_eval_settle(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_eval_settle\n"); );
    VQueueReasonableReadyValid* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VQueueReasonableReadyValid::_ctor_var_reset(VQueueReasonableReadyValid* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__value = VL_RAND_RESET_I(5);
    self->QueueReasonableReadyValid__DOT__value_1 = VL_RAND_RESET_I(5);
    self->QueueReasonableReadyValid__DOT___q_io_deq_ready_T = VL_RAND_RESET_I(16);
    self->QueueReasonableReadyValid__DOT___T_10 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__wrap = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT___value_T_1 = VL_RAND_RESET_I(5);
    self->QueueReasonableReadyValid__DOT__wrap_1 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT___value_T_3 = VL_RAND_RESET_I(5);
    self->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q__DOT__ptr_match = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q__DOT__empty = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    self->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    self->__Vtablechg1[0] = 0U;
    self->__Vtablechg1[1] = 7U;
    self->__Vtablechg1[2] = 5U;
    self->__Vtablechg1[3] = 7U;
    self->__Vtablechg1[4] = 0U;
    self->__Vtablechg1[5] = 7U;
    self->__Vtablechg1[6] = 5U;
    self->__Vtablechg1[7] = 7U;
    self->__Vtablechg1[8] = 6U;
    self->__Vtablechg1[9] = 7U;
    self->__Vtablechg1[10] = 3U;
    self->__Vtablechg1[11] = 7U;
    self->__Vtablechg1[12] = 6U;
    self->__Vtablechg1[13] = 7U;
    self->__Vtablechg1[14] = 3U;
    self->__Vtablechg1[15] = 7U;
    self->__Vtablechg1[16] = 0U;
    self->__Vtablechg1[17] = 7U;
    self->__Vtablechg1[18] = 5U;
    self->__Vtablechg1[19] = 7U;
    self->__Vtablechg1[20] = 0U;
    self->__Vtablechg1[21] = 7U;
    self->__Vtablechg1[22] = 5U;
    self->__Vtablechg1[23] = 7U;
    self->__Vtablechg1[24] = 6U;
    self->__Vtablechg1[25] = 7U;
    self->__Vtablechg1[26] = 3U;
    self->__Vtablechg1[27] = 7U;
    self->__Vtablechg1[28] = 6U;
    self->__Vtablechg1[29] = 7U;
    self->__Vtablechg1[30] = 3U;
    self->__Vtablechg1[31] = 7U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[0] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[1] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[2] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[3] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[4] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[5] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[6] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[7] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[8] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[9] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[10] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[11] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[12] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[13] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[14] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[15] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[16] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[17] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[18] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[19] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[20] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[21] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[22] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[23] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[24] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[25] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[26] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[27] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[28] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[29] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[30] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value[31] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[0] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[1] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[2] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[3] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[4] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[5] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[6] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[7] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[8] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[9] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[10] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[11] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[12] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[13] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[14] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[15] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[16] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[17] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[18] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[19] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[20] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[21] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[22] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[23] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[24] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[25] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[26] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[27] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[28] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[29] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[30] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value[31] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[0] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[1] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[2] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[3] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[4] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[5] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[6] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[7] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[8] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[9] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[10] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[11] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[12] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[13] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[14] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[15] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[16] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[17] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[18] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[19] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[20] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[21] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[22] = 1U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[23] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[24] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[25] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[26] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[27] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[28] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[29] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[30] = 0U;
    self->__Vtable1_QueueReasonableReadyValid__DOT__q__DOT__maybe_full[31] = 0U;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
