// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUIntToOHTester.h for the primary calling header

#include "VUIntToOHTester.h"
#include "VUIntToOHTester__Syms.h"

//==========

VUIntToOHTester::VUIntToOHTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VUIntToOHTester__Syms* __restrict vlSymsp = __VlSymsp = new VUIntToOHTester__Syms(_vcontextp__, this, name());
    VUIntToOHTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VUIntToOHTester::__Vconfigure(VUIntToOHTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VUIntToOHTester::~VUIntToOHTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VUIntToOHTester::_eval_initial(VUIntToOHTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntToOHTester::_eval_initial\n"); );
    VUIntToOHTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VUIntToOHTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntToOHTester::final\n"); );
    // Variables
    VUIntToOHTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VUIntToOHTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUIntToOHTester::_eval_settle(VUIntToOHTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntToOHTester::_eval_settle\n"); );
    VUIntToOHTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUIntToOHTester::_ctor_var_reset(VUIntToOHTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntToOHTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
