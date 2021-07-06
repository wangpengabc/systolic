// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleVendingMachineTester.h for the primary calling header

#include "VSimpleVendingMachineTester.h"
#include "VSimpleVendingMachineTester__Syms.h"

//==========

VSimpleVendingMachineTester::VSimpleVendingMachineTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = __VlSymsp = new VSimpleVendingMachineTester__Syms(_vcontextp__, this, name());
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VSimpleVendingMachineTester::__Vconfigure(VSimpleVendingMachineTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VSimpleVendingMachineTester::~VSimpleVendingMachineTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VSimpleVendingMachineTester::_settle__TOP__2(VSimpleVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_settle__TOP__2\n"); );
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SimpleVendingMachineTester__DOT__wrap_wrap 
        = (9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle));
    vlTOPp->SimpleVendingMachineTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)));
    vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime 
        = ((9U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
           | ((8U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
              & ((7U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                 & ((6U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                    | (5U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))))));
    vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel 
        = ((9U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
           & ((8U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
              | ((7U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                 & ((6U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle)) 
                    & (5U != (IData)(vlTOPp->SimpleVendingMachineTester__DOT__cycle))))));
    vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_2 
        = ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel)
            ? 2U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state));
    vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_5 
        = ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime)
            ? 4U : ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel)
                     ? 3U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state)));
    vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT___GEN_9 
        = ((3U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state))
            ? ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_dime)
                ? 4U : ((IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut_io_nickel)
                         ? 4U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state)))
            : ((4U == (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state))
                ? 0U : (IData)(vlTOPp->SimpleVendingMachineTester__DOT__dut__DOT__state)));
}

void VSimpleVendingMachineTester::_eval_initial(VSimpleVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_eval_initial\n"); );
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSimpleVendingMachineTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::final\n"); );
    // Variables
    VSimpleVendingMachineTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSimpleVendingMachineTester::_eval_settle(VSimpleVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_eval_settle\n"); );
    VSimpleVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VSimpleVendingMachineTester::_ctor_var_reset(VSimpleVendingMachineTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->SimpleVendingMachineTester__DOT__dut_io_nickel = VL_RAND_RESET_I(1);
    self->SimpleVendingMachineTester__DOT__dut_io_dime = VL_RAND_RESET_I(1);
    self->SimpleVendingMachineTester__DOT__cycle = VL_RAND_RESET_I(4);
    self->SimpleVendingMachineTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    self->SimpleVendingMachineTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    self->SimpleVendingMachineTester__DOT__dut__DOT__state = VL_RAND_RESET_I(3);
    self->SimpleVendingMachineTester__DOT__dut__DOT___GEN_2 = VL_RAND_RESET_I(3);
    self->SimpleVendingMachineTester__DOT__dut__DOT___GEN_5 = VL_RAND_RESET_I(3);
    self->SimpleVendingMachineTester__DOT__dut__DOT___GEN_9 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
