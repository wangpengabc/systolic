// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSIntOneHotTester.h for the primary calling header

#include "VSIntOneHotTester.h"
#include "VSIntOneHotTester__Syms.h"

//==========

VSIntOneHotTester::VSIntOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VSIntOneHotTester__Syms* __restrict vlSymsp = __VlSymsp = new VSIntOneHotTester__Syms(_vcontextp__, this, name());
    VSIntOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VSIntOneHotTester::__Vconfigure(VSIntOneHotTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VSIntOneHotTester::~VSIntOneHotTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VSIntOneHotTester::_eval_initial(VSIntOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSIntOneHotTester::_eval_initial\n"); );
    VSIntOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSIntOneHotTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSIntOneHotTester::final\n"); );
    // Variables
    VSIntOneHotTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSIntOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSIntOneHotTester::_eval_settle(VSIntOneHotTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSIntOneHotTester::_eval_settle\n"); );
    VSIntOneHotTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSIntOneHotTester::_ctor_var_reset(VSIntOneHotTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSIntOneHotTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
