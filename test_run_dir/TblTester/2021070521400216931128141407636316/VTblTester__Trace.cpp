// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTblTester__Syms.h"


void VTblTester::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VTblTester__Syms* __restrict vlSymsp = static_cast<VTblTester__Syms*>(userp);
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VTblTester::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VTblTester__Syms* __restrict vlSymsp = static_cast<VTblTester__Syms*>(userp);
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->TblTester__DOT__dut_io_wi),3);
            tracep->chgCData(oldp+1,(vlTOPp->TblTester__DOT__dut_io_ri),3);
            tracep->chgCData(oldp+2,(vlTOPp->TblTester__DOT__dut_io_d),3);
            tracep->chgCData(oldp+3,((((IData)(vlTOPp->TblTester__DOT__dut_io_ri) 
                                       == (IData)(vlTOPp->TblTester__DOT__dut_io_wi))
                                       ? (IData)(vlTOPp->TblTester__DOT__dut_io_d)
                                       : vlTOPp->TblTester__DOT__dut__DOT__m
                                      [vlTOPp->TblTester__DOT__dut_io_ri])),3);
            tracep->chgCData(oldp+4,(vlTOPp->TblTester__DOT__cnt),3);
            tracep->chgBit(oldp+5,((7U == (IData)(vlTOPp->TblTester__DOT__cnt))));
            tracep->chgCData(oldp+6,(vlTOPp->TblTester__DOT__dut__DOT__m[0]),3);
            tracep->chgCData(oldp+7,(vlTOPp->TblTester__DOT__dut__DOT__m[1]),3);
            tracep->chgCData(oldp+8,(vlTOPp->TblTester__DOT__dut__DOT__m[2]),3);
            tracep->chgCData(oldp+9,(vlTOPp->TblTester__DOT__dut__DOT__m[3]),3);
            tracep->chgCData(oldp+10,(vlTOPp->TblTester__DOT__dut__DOT__m[4]),3);
            tracep->chgCData(oldp+11,(vlTOPp->TblTester__DOT__dut__DOT__m[5]),3);
            tracep->chgCData(oldp+12,(vlTOPp->TblTester__DOT__dut__DOT__m[6]),3);
            tracep->chgCData(oldp+13,(vlTOPp->TblTester__DOT__dut__DOT__m[7]),3);
            tracep->chgCData(oldp+14,(vlTOPp->TblTester__DOT__dut__DOT__m
                                      [vlTOPp->TblTester__DOT__dut_io_ri]),3);
        }
        tracep->chgBit(oldp+15,(vlTOPp->clock));
        tracep->chgBit(oldp+16,(vlTOPp->reset));
    }
}

void VTblTester::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VTblTester__Syms* __restrict vlSymsp = static_cast<VTblTester__Syms*>(userp);
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
