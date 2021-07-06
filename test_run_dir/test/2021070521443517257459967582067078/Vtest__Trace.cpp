// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


void Vtest::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtest__Syms* __restrict vlSymsp = static_cast<Vtest__Syms*>(userp);
    Vtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
