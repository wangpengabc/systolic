// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest.h"
#include "Vtest__Syms.h"

//==========

Vtest::Vtest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vtest__Syms* __restrict vlSymsp = __VlSymsp = new Vtest__Syms(_vcontextp__, this, name());
    Vtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void Vtest::__Vconfigure(Vtest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vtest::~Vtest() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtest::_initial__TOP__1(Vtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_initial__TOP__1\n"); );
    Vtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_WRITEF("test!\n");
    VL_FINISH_MT("/home/wangpeng/test/playground_test/test_run_dir/test/2021070521443517257459967582067078/test.v", 5, "");
}

void Vtest::_eval_initial(Vtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_eval_initial\n"); );
    Vtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::final\n"); );
    // Variables
    Vtest__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtest::_eval_settle(Vtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_eval_settle\n"); );
    Vtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtest::_ctor_var_reset(Vtest* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
