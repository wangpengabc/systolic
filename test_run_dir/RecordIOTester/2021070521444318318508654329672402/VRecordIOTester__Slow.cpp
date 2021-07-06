// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordIOTester.h for the primary calling header

#include "VRecordIOTester.h"
#include "VRecordIOTester__Syms.h"

//==========

VRecordIOTester::VRecordIOTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VRecordIOTester__Syms* __restrict vlSymsp = __VlSymsp = new VRecordIOTester__Syms(_vcontextp__, this, name());
    VRecordIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VRecordIOTester::__Vconfigure(VRecordIOTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VRecordIOTester::~VRecordIOTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VRecordIOTester::_eval_initial(VRecordIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_eval_initial\n"); );
    VRecordIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRecordIOTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::final\n"); );
    // Variables
    VRecordIOTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRecordIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordIOTester::_eval_settle(VRecordIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_eval_settle\n"); );
    VRecordIOTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordIOTester::_ctor_var_reset(VRecordIOTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
