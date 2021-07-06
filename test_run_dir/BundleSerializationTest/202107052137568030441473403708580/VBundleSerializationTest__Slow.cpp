// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleSerializationTest.h for the primary calling header

#include "VBundleSerializationTest.h"
#include "VBundleSerializationTest__Syms.h"

//==========

VBundleSerializationTest::VBundleSerializationTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VBundleSerializationTest__Syms* __restrict vlSymsp = __VlSymsp = new VBundleSerializationTest__Syms(_vcontextp__, this, name());
    VBundleSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VBundleSerializationTest::__Vconfigure(VBundleSerializationTest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VBundleSerializationTest::~VBundleSerializationTest() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VBundleSerializationTest::_eval_initial(VBundleSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleSerializationTest::_eval_initial\n"); );
    VBundleSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBundleSerializationTest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleSerializationTest::final\n"); );
    // Variables
    VBundleSerializationTest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBundleSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBundleSerializationTest::_eval_settle(VBundleSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleSerializationTest::_eval_settle\n"); );
    VBundleSerializationTest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBundleSerializationTest::_ctor_var_reset(VBundleSerializationTest* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleSerializationTest::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
