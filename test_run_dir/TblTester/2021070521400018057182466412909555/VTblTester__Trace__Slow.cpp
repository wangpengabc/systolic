// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTblTester__Syms.h"


//======================

void VTblTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VTblTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTblTester__Syms* __restrict vlSymsp = static_cast<VTblTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VTblTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VTblTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VTblTester__Syms* __restrict vlSymsp = static_cast<VTblTester__Syms*>(userp);
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VTblTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VTblTester__Syms* __restrict vlSymsp = static_cast<VTblTester__Syms*>(userp);
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+24,"clock", false,-1);
        tracep->declBit(c+25,"reset", false,-1);
        tracep->declBit(c+24,"TblTester clock", false,-1);
        tracep->declBit(c+25,"TblTester reset", false,-1);
        tracep->declBit(c+24,"TblTester dut_clock", false,-1);
        tracep->declBus(c+1,"TblTester dut_io_wi", false,-1, 3,0);
        tracep->declBus(c+2,"TblTester dut_io_ri", false,-1, 3,0);
        tracep->declBus(c+3,"TblTester dut_io_d", false,-1, 3,0);
        tracep->declBus(c+4,"TblTester dut_io_o", false,-1, 3,0);
        tracep->declBus(c+5,"TblTester cnt", false,-1, 2,0);
        tracep->declBit(c+6,"TblTester wrap_wrap", false,-1);
        tracep->declBit(c+24,"TblTester dut clock", false,-1);
        tracep->declBus(c+1,"TblTester dut io_wi", false,-1, 3,0);
        tracep->declBus(c+2,"TblTester dut io_ri", false,-1, 3,0);
        tracep->declBus(c+3,"TblTester dut io_d", false,-1, 3,0);
        tracep->declBus(c+4,"TblTester dut io_o", false,-1, 3,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+7+i*1,"TblTester dut m", true,(i+0), 3,0);}}
        tracep->declBit(c+26,"TblTester dut m_io_o_MPORT_en", false,-1);
        tracep->declBus(c+2,"TblTester dut m_io_o_MPORT_addr", false,-1, 3,0);
        tracep->declBus(c+23,"TblTester dut m_io_o_MPORT_data", false,-1, 3,0);
        tracep->declBus(c+3,"TblTester dut m_MPORT_data", false,-1, 3,0);
        tracep->declBus(c+1,"TblTester dut m_MPORT_addr", false,-1, 3,0);
        tracep->declBit(c+26,"TblTester dut m_MPORT_mask", false,-1);
        tracep->declBit(c+26,"TblTester dut m_MPORT_en", false,-1);
    }
}

void VTblTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VTblTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VTblTester__Syms* __restrict vlSymsp = static_cast<VTblTester__Syms*>(userp);
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VTblTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VTblTester__Syms* __restrict vlSymsp = static_cast<VTblTester__Syms*>(userp);
    VTblTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->TblTester__DOT__dut_io_wi),4);
        tracep->fullCData(oldp+2,(vlTOPp->TblTester__DOT__dut_io_ri),4);
        tracep->fullCData(oldp+3,(vlTOPp->TblTester__DOT__dut_io_d),4);
        tracep->fullCData(oldp+4,((((IData)(vlTOPp->TblTester__DOT__dut_io_ri) 
                                    == (IData)(vlTOPp->TblTester__DOT__dut_io_wi))
                                    ? (IData)(vlTOPp->TblTester__DOT__dut_io_d)
                                    : vlTOPp->TblTester__DOT__dut__DOT__m
                                   [vlTOPp->TblTester__DOT__dut_io_ri])),4);
        tracep->fullCData(oldp+5,(vlTOPp->TblTester__DOT__cnt),3);
        tracep->fullBit(oldp+6,((7U == (IData)(vlTOPp->TblTester__DOT__cnt))));
        tracep->fullCData(oldp+7,(vlTOPp->TblTester__DOT__dut__DOT__m[0]),4);
        tracep->fullCData(oldp+8,(vlTOPp->TblTester__DOT__dut__DOT__m[1]),4);
        tracep->fullCData(oldp+9,(vlTOPp->TblTester__DOT__dut__DOT__m[2]),4);
        tracep->fullCData(oldp+10,(vlTOPp->TblTester__DOT__dut__DOT__m[3]),4);
        tracep->fullCData(oldp+11,(vlTOPp->TblTester__DOT__dut__DOT__m[4]),4);
        tracep->fullCData(oldp+12,(vlTOPp->TblTester__DOT__dut__DOT__m[5]),4);
        tracep->fullCData(oldp+13,(vlTOPp->TblTester__DOT__dut__DOT__m[6]),4);
        tracep->fullCData(oldp+14,(vlTOPp->TblTester__DOT__dut__DOT__m[7]),4);
        tracep->fullCData(oldp+15,(vlTOPp->TblTester__DOT__dut__DOT__m[8]),4);
        tracep->fullCData(oldp+16,(vlTOPp->TblTester__DOT__dut__DOT__m[9]),4);
        tracep->fullCData(oldp+17,(vlTOPp->TblTester__DOT__dut__DOT__m[10]),4);
        tracep->fullCData(oldp+18,(vlTOPp->TblTester__DOT__dut__DOT__m[11]),4);
        tracep->fullCData(oldp+19,(vlTOPp->TblTester__DOT__dut__DOT__m[12]),4);
        tracep->fullCData(oldp+20,(vlTOPp->TblTester__DOT__dut__DOT__m[13]),4);
        tracep->fullCData(oldp+21,(vlTOPp->TblTester__DOT__dut__DOT__m[14]),4);
        tracep->fullCData(oldp+22,(vlTOPp->TblTester__DOT__dut__DOT__m[15]),4);
        tracep->fullCData(oldp+23,(vlTOPp->TblTester__DOT__dut__DOT__m
                                   [vlTOPp->TblTester__DOT__dut_io_ri]),4);
        tracep->fullBit(oldp+24,(vlTOPp->clock));
        tracep->fullBit(oldp+25,(vlTOPp->reset));
        tracep->fullBit(oldp+26,(1U));
    }
}
