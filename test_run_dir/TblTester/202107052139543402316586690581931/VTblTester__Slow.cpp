// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTblTester.h for the primary calling header

#include "VTblTester.h"
#include "VTblTester__Syms.h"

//==========

VTblTester::VTblTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VTblTester__Syms* __restrict vlSymsp = __VlSymsp = new VTblTester__Syms(_vcontextp__, this, name());
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VTblTester::__Vconfigure(VTblTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VTblTester::~VTblTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VTblTester::_settle__TOP__2(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_settle__TOP__2\n"); );
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TblTester__DOT___wrap_value_T_1 = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlTOPp->TblTester__DOT__cnt)));
    vlTOPp->TblTester__DOT___GEN_8 = ((6U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                       ? 0xbU : ((5U 
                                                  == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                  ? 0xdU
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                   ? 0xcU
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                    ? 5U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                     ? 8U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                      ? 0xdU
                                                      : 2U))))));
    vlTOPp->TblTester__DOT___GEN_16 = ((6U == (7U & 
                                               ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                - (IData)(1U))))
                                        ? 0xbU : ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                       - (IData)(1U))))
                                                   ? 0xdU
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                        - (IData)(1U))))
                                                    ? 0xcU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                         - (IData)(1U))))
                                                     ? 5U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                          - (IData)(1U))))
                                                      ? 8U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                           - (IData)(1U))))
                                                       ? 0xdU
                                                       : 2U))))));
    vlTOPp->TblTester__DOT___GEN_24 = ((6U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                        ? 0U : ((5U 
                                                 == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                 ? 0xaU
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                  ? 7U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                   ? 0xbU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->TblTester__DOT__cnt))
                                                     ? 0xdU
                                                     : 1U))))));
    vlTOPp->TblTester__DOT__dut_io_wi = ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                          ? 7U : (IData)(vlTOPp->TblTester__DOT___GEN_8));
    vlTOPp->TblTester__DOT__dut_io_ri = ((7U == (7U 
                                                 & ((IData)(vlTOPp->TblTester__DOT__cnt) 
                                                    - (IData)(1U))))
                                          ? 7U : (IData)(vlTOPp->TblTester__DOT___GEN_16));
    vlTOPp->TblTester__DOT__dut_io_d = ((7U == (IData)(vlTOPp->TblTester__DOT__cnt))
                                         ? 0xaU : (IData)(vlTOPp->TblTester__DOT___GEN_24));
}

void VTblTester::_eval_initial(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_eval_initial\n"); );
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTblTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::final\n"); );
    // Variables
    VTblTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTblTester::_eval_settle(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_eval_settle\n"); );
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VTblTester::_ctor_var_reset(VTblTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->TblTester__DOT__dut_io_wi = VL_RAND_RESET_I(4);
    self->TblTester__DOT__dut_io_ri = VL_RAND_RESET_I(4);
    self->TblTester__DOT__dut_io_d = VL_RAND_RESET_I(4);
    self->TblTester__DOT__cnt = VL_RAND_RESET_I(3);
    self->TblTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(3);
    self->TblTester__DOT___GEN_8 = VL_RAND_RESET_I(4);
    self->TblTester__DOT___GEN_16 = VL_RAND_RESET_I(4);
    self->TblTester__DOT___GEN_24 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        self->TblTester__DOT__dut__DOT__m[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
