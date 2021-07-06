// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCDTester.h for the primary calling header

#include "VGCDTester.h"
#include "VGCDTester__Syms.h"

//==========

VGCDTester::VGCDTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VGCDTester__Syms* __restrict vlSymsp = __VlSymsp = new VGCDTester__Syms(_vcontextp__, this, name());
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VGCDTester::__Vconfigure(VGCDTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VGCDTester::~VGCDTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VGCDTester::_settle__TOP__2(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_settle__TOP__2\n"); );
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->GCDTester__DOT__dut__DOT___x_T_1 = (vlTOPp->GCDTester__DOT__dut__DOT__x 
                                                - vlTOPp->GCDTester__DOT__dut__DOT__y);
    vlTOPp->GCDTester__DOT__dut__DOT___y_T_1 = (vlTOPp->GCDTester__DOT__dut__DOT__y 
                                                - vlTOPp->GCDTester__DOT__dut__DOT__x);
    vlTOPp->GCDTester__DOT___GEN_0 = 0U;
}

void VGCDTester::_eval_initial(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_eval_initial\n"); );
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VGCDTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::final\n"); );
    // Variables
    VGCDTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VGCDTester::_eval_settle(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_eval_settle\n"); );
    VGCDTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VGCDTester::_ctor_var_reset(VGCDTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->GCDTester__DOT__first = VL_RAND_RESET_I(1);
    self->GCDTester__DOT___GEN_0 = VL_RAND_RESET_I(1);
    self->GCDTester__DOT__dut__DOT__x = VL_RAND_RESET_I(32);
    self->GCDTester__DOT__dut__DOT__y = VL_RAND_RESET_I(32);
    self->GCDTester__DOT__dut__DOT___x_T_1 = VL_RAND_RESET_I(32);
    self->GCDTester__DOT__dut__DOT___y_T_1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
