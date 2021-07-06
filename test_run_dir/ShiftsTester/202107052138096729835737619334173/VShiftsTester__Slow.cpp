// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftsTester.h for the primary calling header

#include "VShiftsTester.h"
#include "VShiftsTester__Syms.h"

//==========

VShiftsTester::VShiftsTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VShiftsTester__Syms* __restrict vlSymsp = __VlSymsp = new VShiftsTester__Syms(_vcontextp__, this, name());
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VShiftsTester::__Vconfigure(VShiftsTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VShiftsTester::~VShiftsTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VShiftsTester::_eval_initial(VShiftsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::_eval_initial\n"); );
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VShiftsTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::final\n"); );
    // Variables
    VShiftsTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftsTester::_eval_settle(VShiftsTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::_eval_settle\n"); );
    VShiftsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftsTester::_ctor_var_reset(VShiftsTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}