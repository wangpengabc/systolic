// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVectorPacketIOUnitTester.h for the primary calling header

#include "VVectorPacketIOUnitTester.h"
#include "VVectorPacketIOUnitTester__Syms.h"

//==========

VVectorPacketIOUnitTester::VVectorPacketIOUnitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VVectorPacketIOUnitTester__Syms* __restrict vlSymsp = __VlSymsp = new VVectorPacketIOUnitTester__Syms(_vcontextp__, this, name());
    VVectorPacketIOUnitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VVectorPacketIOUnitTester::__Vconfigure(VVectorPacketIOUnitTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VVectorPacketIOUnitTester::~VVectorPacketIOUnitTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VVectorPacketIOUnitTester::_eval_initial(VVectorPacketIOUnitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorPacketIOUnitTester::_eval_initial\n"); );
    VVectorPacketIOUnitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VVectorPacketIOUnitTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorPacketIOUnitTester::final\n"); );
    // Variables
    VVectorPacketIOUnitTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VVectorPacketIOUnitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVectorPacketIOUnitTester::_eval_settle(VVectorPacketIOUnitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorPacketIOUnitTester::_eval_settle\n"); );
    VVectorPacketIOUnitTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVectorPacketIOUnitTester::_ctor_var_reset(VVectorPacketIOUnitTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorPacketIOUnitTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
