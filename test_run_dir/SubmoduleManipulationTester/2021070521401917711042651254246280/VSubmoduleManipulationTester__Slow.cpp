// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSubmoduleManipulationTester.h for the primary calling header

#include "VSubmoduleManipulationTester.h"
#include "VSubmoduleManipulationTester__Syms.h"

//==========

VSubmoduleManipulationTester::VSubmoduleManipulationTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VSubmoduleManipulationTester__Syms* __restrict vlSymsp = __VlSymsp = new VSubmoduleManipulationTester__Syms(_vcontextp__, this, name());
    VSubmoduleManipulationTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VSubmoduleManipulationTester::__Vconfigure(VSubmoduleManipulationTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VSubmoduleManipulationTester::~VSubmoduleManipulationTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VSubmoduleManipulationTester::_eval_initial(VSubmoduleManipulationTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleManipulationTester::_eval_initial\n"); );
    VSubmoduleManipulationTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSubmoduleManipulationTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleManipulationTester::final\n"); );
    // Variables
    VSubmoduleManipulationTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSubmoduleManipulationTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSubmoduleManipulationTester::_eval_settle(VSubmoduleManipulationTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleManipulationTester::_eval_settle\n"); );
    VSubmoduleManipulationTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSubmoduleManipulationTester::_ctor_var_reset(VSubmoduleManipulationTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleManipulationTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
