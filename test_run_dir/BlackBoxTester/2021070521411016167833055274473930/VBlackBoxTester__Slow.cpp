// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxTester.h for the primary calling header

#include "VBlackBoxTester.h"
#include "VBlackBoxTester__Syms.h"

//==========

VBlackBoxTester::VBlackBoxTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBlackBoxTester__Syms* __restrict vlSymsp = __VlSymsp = new VBlackBoxTester__Syms(_vcontextp__, this, name());
    VBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBlackBoxTester::__Vconfigure(VBlackBoxTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBlackBoxTester::~VBlackBoxTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBlackBoxTester::_eval_initial(VBlackBoxTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTester::_eval_initial\n"); );
    VBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBlackBoxTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTester::final\n"); );
    // Variables
    VBlackBoxTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlackBoxTester::_eval_settle(VBlackBoxTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTester::_eval_settle\n"); );
    VBlackBoxTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlackBoxTester::_ctor_var_reset(VBlackBoxTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
