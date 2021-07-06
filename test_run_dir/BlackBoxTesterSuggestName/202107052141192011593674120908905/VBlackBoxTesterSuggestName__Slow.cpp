// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxTesterSuggestName.h for the primary calling header

#include "VBlackBoxTesterSuggestName.h"
#include "VBlackBoxTesterSuggestName__Syms.h"

//==========

VBlackBoxTesterSuggestName::VBlackBoxTesterSuggestName(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp = __VlSymsp = new VBlackBoxTesterSuggestName__Syms(_vcontextp__, this, name());
    VBlackBoxTesterSuggestName* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBlackBoxTesterSuggestName::__Vconfigure(VBlackBoxTesterSuggestName__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBlackBoxTesterSuggestName::~VBlackBoxTesterSuggestName() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBlackBoxTesterSuggestName::_eval_initial(VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName::_eval_initial\n"); );
    VBlackBoxTesterSuggestName* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBlackBoxTesterSuggestName::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName::final\n"); );
    // Variables
    VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBlackBoxTesterSuggestName* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlackBoxTesterSuggestName::_eval_settle(VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName::_eval_settle\n"); );
    VBlackBoxTesterSuggestName* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlackBoxTesterSuggestName::_ctor_var_reset(VBlackBoxTesterSuggestName* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
