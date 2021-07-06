// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsTypeOfVecTester.h for the primary calling header

#include "VAsTypeOfVecTester.h"
#include "VAsTypeOfVecTester__Syms.h"

//==========

VAsTypeOfVecTester::VAsTypeOfVecTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VAsTypeOfVecTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsTypeOfVecTester__Syms(_vcontextp__, this, name());
    VAsTypeOfVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VAsTypeOfVecTester::__Vconfigure(VAsTypeOfVecTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VAsTypeOfVecTester::~VAsTypeOfVecTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VAsTypeOfVecTester::_eval_initial(VAsTypeOfVecTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfVecTester::_eval_initial\n"); );
    VAsTypeOfVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VAsTypeOfVecTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfVecTester::final\n"); );
    // Variables
    VAsTypeOfVecTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsTypeOfVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfVecTester::_eval_settle(VAsTypeOfVecTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfVecTester::_eval_settle\n"); );
    VAsTypeOfVecTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsTypeOfVecTester::_ctor_var_reset(VAsTypeOfVecTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfVecTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
