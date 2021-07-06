// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedVendingMachineTester.h for the primary calling header

#include "VParameterizedVendingMachineTester.h"
#include "VParameterizedVendingMachineTester__Syms.h"

//==========

VParameterizedVendingMachineTester::VParameterizedVendingMachineTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = __VlSymsp = new VParameterizedVendingMachineTester__Syms(_vcontextp__, this, name());
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VParameterizedVendingMachineTester::__Vconfigure(VParameterizedVendingMachineTester__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VParameterizedVendingMachineTester::~VParameterizedVendingMachineTester() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VParameterizedVendingMachineTester::_settle__TOP__2(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_settle__TOP__2\n"); );
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ParameterizedVendingMachineTester__DOT__wrap_wrap 
        = (0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx));
    vlTOPp->ParameterizedVendingMachineTester__DOT___wrap_value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)));
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense 
        = (6U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_137 
        = ((0x22U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x21U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
              & ((0x20U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                 & ((0x1fU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                    & ((0x1eU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x1dU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                          & ((0x1cU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                             & ((0x1bU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x1aU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                   & ((0x19U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x18U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x17U 
                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x16U 
                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x15U 
                                                   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x14U 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     | ((0x13U 
                                                         != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x12U 
                                                            != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x11U 
                                                               != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x10U 
                                                                  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0xfU 
                                                                     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0xeU 
                                                                        != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0xdU 
                                                                           != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0xcU 
                                                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0xbU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0xaU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (9U 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_30 
        = ((0x1bU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x1aU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
              | ((0x19U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                 & ((0x18U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                    | ((0x17U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x16U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                          | ((0x15U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                             & ((0x14U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                | ((0x13U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                   | ((0x12U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                      | ((0x11U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                         | ((0x10U 
                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0xfU 
                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                               | ((0xeU 
                                                   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0xdU 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     | ((0xcU 
                                                         != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0xbU 
                                                            == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           | ((0xaU 
                                                               != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((9U 
                                                                  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((8U 
                                                                     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    | ((7U 
                                                                        != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((6U 
                                                                           == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          | ((5U 
                                                                              == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             | ((4U 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((3U 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | (2U 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_163 
        = ((0x3cU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x3bU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
              & ((0x3aU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                 & ((0x39U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                    & ((0x38U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x37U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                          & ((0x36U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                             | ((0x35U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x34U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                   & ((0x33U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x32U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x31U 
                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x30U 
                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x2fU 
                                                   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x2eU 
                                                      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     & ((0x2dU 
                                                         != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x2cU 
                                                            != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x2bU 
                                                               != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x2aU 
                                                                  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0x29U 
                                                                     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0x28U 
                                                                        != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x27U 
                                                                           == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          | ((0x26U 
                                                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0x25U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x24U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x23U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_137)))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_57 
        = ((0x36U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x35U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
              | ((0x34U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                 & ((0x33U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                    & ((0x32U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x31U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                          & ((0x30U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                             & ((0x2fU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x2eU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                   | ((0x2dU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                      | ((0x2cU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                         | ((0x2bU 
                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x2aU 
                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x29U 
                                                   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  | ((0x28U 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     | ((0x27U 
                                                         != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x26U 
                                                            == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           | ((0x25U 
                                                               == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              | ((0x24U 
                                                                  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0x23U 
                                                                     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0x22U 
                                                                        != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x21U 
                                                                           != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0x20U 
                                                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0x1fU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x1eU 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x1dU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x1cU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_30))))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_189 
        = ((0x56U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x55U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
              & ((0x54U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                 & ((0x53U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                    & ((0x52U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x51U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                          & ((0x50U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                             | ((0x4fU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x4eU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                   & ((0x4dU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x4cU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x4bU 
                                             != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x4aU 
                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x49U 
                                                   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x48U 
                                                      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     & ((0x47U 
                                                         == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        | ((0x46U 
                                                            != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x45U 
                                                               != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x44U 
                                                                  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0x43U 
                                                                     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0x42U 
                                                                        != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x41U 
                                                                           != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0x40U 
                                                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0x3fU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x3eU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x3dU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_163)))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_92 
        = ((0x59U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x58U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
              | ((0x57U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                 | ((0x56U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                    | ((0x55U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                       | ((0x54U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                          | ((0x53U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                             | ((0x52U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                | ((0x51U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                   | ((0x50U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                      | ((0x4fU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                         | ((0x4eU 
                                             == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                            | ((0x4dU 
                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x4cU 
                                                   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  | ((0x4bU 
                                                      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     | ((0x4aU 
                                                         == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        | ((0x49U 
                                                            == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           | ((0x48U 
                                                               != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x47U 
                                                                  != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0x46U 
                                                                     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    | ((0x45U 
                                                                        != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x44U 
                                                                           == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          | ((0x43U 
                                                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0x42U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x41U 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x40U 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x3fU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x3eU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x3dU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x3cU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x3bU 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x3aU 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x39U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x38U 
                                                                                == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x37U 
                                                                                != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_57))))))))))))))))))))))))))))))))))));
    vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT___value_T_1 
        = (7U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value) 
                 + (((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                     | ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                        | ((0x61U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                           & ((0x60U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                              | ((0x5fU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                 | ((0x5eU != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                    & ((0x5dU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                       | ((0x5cU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                          | ((0x5bU 
                                              != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                             & ((0x5aU 
                                                 != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__idx)) 
                                                & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_92)))))))))))
                     ? 1U : 0U)));
}

void VParameterizedVendingMachineTester::_eval_initial(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_eval_initial\n"); );
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VParameterizedVendingMachineTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::final\n"); );
    // Variables
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParameterizedVendingMachineTester::_eval_settle(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_eval_settle\n"); );
    VParameterizedVendingMachineTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VParameterizedVendingMachineTester::_ctor_var_reset(VParameterizedVendingMachineTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT__idx = VL_RAND_RESET_I(7);
    self->ParameterizedVendingMachineTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(7);
    self->ParameterizedVendingMachineTester__DOT___GEN_30 = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT___GEN_57 = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT___GEN_92 = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT___GEN_137 = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT___GEN_163 = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT___GEN_189 = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT__dut__DOT__value = VL_RAND_RESET_I(3);
    self->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense = VL_RAND_RESET_I(1);
    self->ParameterizedVendingMachineTester__DOT__dut__DOT___value_T_1 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
