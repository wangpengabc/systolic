// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleVendingMachineTester.h for the primary calling header

#include "VSimpleVendingMachineTester.h"
#include "VSimpleVendingMachineTester__Syms.h"

//==========
VlUnpacked<CData/*2:0*/, 64> VSimpleVendingMachineTester::__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state;

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
}

void VSimpleVendingMachineTester::_ctor_var_reset(VSimpleVendingMachineTester* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clock = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->SimpleVendingMachineTester__DOT__cycle = VL_RAND_RESET_I(4);
    self->SimpleVendingMachineTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    self->SimpleVendingMachineTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    self->SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state = VL_RAND_RESET_I(3);
    self->__Vtablechg1[0] = 1U;
    self->__Vtablechg1[1] = 1U;
    self->__Vtablechg1[2] = 1U;
    self->__Vtablechg1[3] = 1U;
    self->__Vtablechg1[4] = 1U;
    self->__Vtablechg1[5] = 1U;
    self->__Vtablechg1[6] = 1U;
    self->__Vtablechg1[7] = 1U;
    self->__Vtablechg1[8] = 1U;
    self->__Vtablechg1[9] = 1U;
    self->__Vtablechg1[10] = 0U;
    self->__Vtablechg1[11] = 1U;
    self->__Vtablechg1[12] = 0U;
    self->__Vtablechg1[13] = 1U;
    self->__Vtablechg1[14] = 0U;
    self->__Vtablechg1[15] = 1U;
    self->__Vtablechg1[16] = 1U;
    self->__Vtablechg1[17] = 1U;
    self->__Vtablechg1[18] = 1U;
    self->__Vtablechg1[19] = 1U;
    self->__Vtablechg1[20] = 1U;
    self->__Vtablechg1[21] = 1U;
    self->__Vtablechg1[22] = 1U;
    self->__Vtablechg1[23] = 1U;
    self->__Vtablechg1[24] = 1U;
    self->__Vtablechg1[25] = 1U;
    self->__Vtablechg1[26] = 0U;
    self->__Vtablechg1[27] = 1U;
    self->__Vtablechg1[28] = 0U;
    self->__Vtablechg1[29] = 1U;
    self->__Vtablechg1[30] = 0U;
    self->__Vtablechg1[31] = 1U;
    self->__Vtablechg1[32] = 1U;
    self->__Vtablechg1[33] = 1U;
    self->__Vtablechg1[34] = 1U;
    self->__Vtablechg1[35] = 1U;
    self->__Vtablechg1[36] = 1U;
    self->__Vtablechg1[37] = 1U;
    self->__Vtablechg1[38] = 1U;
    self->__Vtablechg1[39] = 1U;
    self->__Vtablechg1[40] = 1U;
    self->__Vtablechg1[41] = 1U;
    self->__Vtablechg1[42] = 0U;
    self->__Vtablechg1[43] = 1U;
    self->__Vtablechg1[44] = 0U;
    self->__Vtablechg1[45] = 1U;
    self->__Vtablechg1[46] = 0U;
    self->__Vtablechg1[47] = 1U;
    self->__Vtablechg1[48] = 1U;
    self->__Vtablechg1[49] = 1U;
    self->__Vtablechg1[50] = 1U;
    self->__Vtablechg1[51] = 1U;
    self->__Vtablechg1[52] = 1U;
    self->__Vtablechg1[53] = 1U;
    self->__Vtablechg1[54] = 1U;
    self->__Vtablechg1[55] = 1U;
    self->__Vtablechg1[56] = 1U;
    self->__Vtablechg1[57] = 1U;
    self->__Vtablechg1[58] = 0U;
    self->__Vtablechg1[59] = 1U;
    self->__Vtablechg1[60] = 0U;
    self->__Vtablechg1[61] = 1U;
    self->__Vtablechg1[62] = 0U;
    self->__Vtablechg1[63] = 1U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[0] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[1] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[2] = 1U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[3] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[4] = 2U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[5] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[6] = 3U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[7] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[8] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[9] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[10] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[11] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[12] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[13] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[14] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[15] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[16] = 1U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[17] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[18] = 2U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[19] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[20] = 3U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[21] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[22] = 4U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[23] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[24] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[25] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[26] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[27] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[28] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[29] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[30] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[31] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[32] = 2U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[33] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[34] = 3U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[35] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[36] = 4U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[37] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[38] = 4U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[39] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[40] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[41] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[42] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[43] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[44] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[45] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[46] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[47] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[48] = 1U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[49] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[50] = 2U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[51] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[52] = 3U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[53] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[54] = 4U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[55] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[56] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[57] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[58] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[59] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[60] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[61] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[62] = 0U;
    self->__Vtable1_SimpleVendingMachineTester__DOT__dut__DOT__impl__DOT__state[63] = 0U;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
