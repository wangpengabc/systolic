// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRMaxPeriod.h for the primary calling header

#include "VLFSRMaxPeriod.h"
#include "VLFSRMaxPeriod__Syms.h"

//==========

VLFSRMaxPeriod::VLFSRMaxPeriod(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = __VlSymsp = new VLFSRMaxPeriod__Syms(_vcontextp__, this, name());
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VLFSRMaxPeriod::__Vconfigure(VLFSRMaxPeriod__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VLFSRMaxPeriod::~VLFSRMaxPeriod() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VLFSRMaxPeriod::_settle__TOP__2(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_settle__TOP__2\n"); );
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LFSRMaxPeriod__DOT__wrap_wrap_wrap = (0x3feU 
                                                  == (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value));
    vlTOPp->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->LFSRMaxPeriod__DOT__wrap_value)));
    vlTOPp->LFSRMaxPeriod__DOT__rv = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9) 
                                       << 9U) | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8) 
                                                  << 8U) 
                                                 | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7) 
                                                     << 7U) 
                                                    | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6) 
                                                        << 6U) 
                                                       | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5) 
                                                           << 5U) 
                                                          | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4) 
                                                              << 4U) 
                                                             | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3) 
                                                                 << 3U) 
                                                                | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2) 
                                                                    << 2U) 
                                                                   | (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                                                                       << 1U) 
                                                                      | (IData)(vlTOPp->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0))))))))));
}

void VLFSRMaxPeriod::_eval_initial(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_eval_initial\n"); );
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VLFSRMaxPeriod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::final\n"); );
    // Variables
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLFSRMaxPeriod::_eval_settle(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_eval_settle\n"); );
    VLFSRMaxPeriod* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VLFSRMaxPeriod::_ctor_var_reset(VLFSRMaxPeriod* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv = VL_RAND_RESET_I(10);
    self->LFSRMaxPeriod__DOT__started = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__seed = VL_RAND_RESET_I(10);
    self->LFSRMaxPeriod__DOT__wrap_value = VL_RAND_RESET_I(10);
    self->LFSRMaxPeriod__DOT__wrap_wrap_wrap = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1 = VL_RAND_RESET_I(10);
    self->LFSRMaxPeriod__DOT__last = VL_RAND_RESET_I(10);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    self->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
