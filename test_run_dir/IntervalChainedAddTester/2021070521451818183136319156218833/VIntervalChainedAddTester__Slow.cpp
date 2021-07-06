// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalChainedAddTester.h for the primary calling header

#include "VIntervalChainedAddTester.h"
#include "VIntervalChainedAddTester__Syms.h"

//==========

VIntervalChainedAddTester::VIntervalChainedAddTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VIntervalChainedAddTester__Syms* __restrict vlSymsp = __VlSymsp = new VIntervalChainedAddTester__Syms(_vcontextp__, this, name());
    VIntervalChainedAddTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VIntervalChainedAddTester::__Vconfigure(VIntervalChainedAddTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VIntervalChainedAddTester::~VIntervalChainedAddTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VIntervalChainedAddTester::_eval_initial(VIntervalChainedAddTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedAddTester::_eval_initial\n"); );
    VIntervalChainedAddTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIntervalChainedAddTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedAddTester::final\n"); );
    // Variables
    VIntervalChainedAddTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntervalChainedAddTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalChainedAddTester::_eval_settle(VIntervalChainedAddTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedAddTester::_eval_settle\n"); );
    VIntervalChainedAddTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntervalChainedAddTester::_ctor_var_reset(VIntervalChainedAddTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedAddTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}