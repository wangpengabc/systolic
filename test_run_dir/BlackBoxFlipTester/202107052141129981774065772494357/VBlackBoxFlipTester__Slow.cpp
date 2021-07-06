// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxFlipTester.h for the primary calling header

#include "VBlackBoxFlipTester.h"
#include "VBlackBoxFlipTester__Syms.h"

//==========

VBlackBoxFlipTester::VBlackBoxFlipTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBlackBoxFlipTester__Syms* __restrict vlSymsp = __VlSymsp = new VBlackBoxFlipTester__Syms(_vcontextp__, this, name());
    VBlackBoxFlipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBlackBoxFlipTester::__Vconfigure(VBlackBoxFlipTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBlackBoxFlipTester::~VBlackBoxFlipTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBlackBoxFlipTester::_eval_initial(VBlackBoxFlipTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester::_eval_initial\n"); );
    VBlackBoxFlipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBlackBoxFlipTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester::final\n"); );
    // Variables
    VBlackBoxFlipTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBlackBoxFlipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlackBoxFlipTester::_eval_settle(VBlackBoxFlipTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester::_eval_settle\n"); );
    VBlackBoxFlipTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlackBoxFlipTester::_ctor_var_reset(VBlackBoxFlipTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
