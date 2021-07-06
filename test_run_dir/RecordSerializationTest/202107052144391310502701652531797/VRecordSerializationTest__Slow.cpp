// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordSerializationTest.h for the primary calling header

#include "VRecordSerializationTest.h"
#include "VRecordSerializationTest__Syms.h"

//==========

VRecordSerializationTest::VRecordSerializationTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VRecordSerializationTest__Syms* __restrict vlSymsp = __VlSymsp = new VRecordSerializationTest__Syms(_vcontextp__, this, name());
    VRecordSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VRecordSerializationTest::__Vconfigure(VRecordSerializationTest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VRecordSerializationTest::~VRecordSerializationTest() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VRecordSerializationTest::_eval_initial(VRecordSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_eval_initial\n"); );
    VRecordSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRecordSerializationTest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::final\n"); );
    // Variables
    VRecordSerializationTest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRecordSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordSerializationTest::_eval_settle(VRecordSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_eval_settle\n"); );
    VRecordSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordSerializationTest::_ctor_var_reset(VRecordSerializationTest* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
