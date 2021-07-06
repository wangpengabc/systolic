// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModuloAssertTester.h for the primary calling header

#include "VModuloAssertTester.h"
#include "VModuloAssertTester__Syms.h"

//==========

VModuloAssertTester::VModuloAssertTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VModuloAssertTester__Syms* __restrict vlSymsp = __VlSymsp = new VModuloAssertTester__Syms(_vcontextp__, this, name());
    VModuloAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VModuloAssertTester::__Vconfigure(VModuloAssertTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VModuloAssertTester::~VModuloAssertTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VModuloAssertTester::_eval_initial(VModuloAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuloAssertTester::_eval_initial\n"); );
    VModuloAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VModuloAssertTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuloAssertTester::final\n"); );
    // Variables
    VModuloAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VModuloAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VModuloAssertTester::_eval_settle(VModuloAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuloAssertTester::_eval_settle\n"); );
    VModuloAssertTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VModuloAssertTester::_ctor_var_reset(VModuloAssertTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuloAssertTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
