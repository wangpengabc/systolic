// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsChiselEnumTester.h for the primary calling header

#include "VAsChiselEnumTester.h"
#include "VAsChiselEnumTester__Syms.h"

//==========

VAsChiselEnumTester::VAsChiselEnumTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsChiselEnumTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsChiselEnumTester__Syms(_vcontextp__, this, name());
    VAsChiselEnumTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsChiselEnumTester::__Vconfigure(VAsChiselEnumTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsChiselEnumTester::~VAsChiselEnumTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsChiselEnumTester::_eval_initial(VAsChiselEnumTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsChiselEnumTester::_eval_initial\n"); );
    VAsChiselEnumTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAsChiselEnumTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsChiselEnumTester::final\n"); );
    // Variables
    VAsChiselEnumTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsChiselEnumTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsChiselEnumTester::_eval_settle(VAsChiselEnumTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsChiselEnumTester::_eval_settle\n"); );
    VAsChiselEnumTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsChiselEnumTester::_ctor_var_reset(VAsChiselEnumTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsChiselEnumTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
