// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordQueueTester__Syms.h"


//======================

void VRecordQueueTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VRecordQueueTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRecordQueueTester__Syms* __restrict vlSymsp = static_cast<VRecordQueueTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VRecordQueueTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VRecordQueueTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VRecordQueueTester__Syms* __restrict vlSymsp = static_cast<VRecordQueueTester__Syms*>(userp);
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VRecordQueueTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VRecordQueueTester__Syms* __restrict vlSymsp = static_cast<VRecordQueueTester__Syms*>(userp);
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+24,"clock", false,-1);
        tracep->declBit(c+25,"reset", false,-1);
        tracep->declBit(c+24,"RecordQueueTester clock", false,-1);
        tracep->declBit(c+25,"RecordQueueTester reset", false,-1);
        tracep->declBit(c+24,"RecordQueueTester queue_clock", false,-1);
        tracep->declBit(c+25,"RecordQueueTester queue_reset", false,-1);
        tracep->declBit(c+1,"RecordQueueTester queue_io_enq_ready", false,-1);
        tracep->declBit(c+2,"RecordQueueTester queue_io_enq_valid", false,-1);
        tracep->declBit(c+3,"RecordQueueTester queue_io_deq_valid", false,-1);
        tracep->declBus(c+4,"RecordQueueTester queue_io_deq_bits_bar", false,-1, 31,0);
        tracep->declBus(c+5,"RecordQueueTester queue_io_deq_bits_foo", false,-1, 31,0);
        tracep->declBus(c+6,"RecordQueueTester cycle", false,-1, 1,0);
        tracep->declBit(c+7,"RecordQueueTester wrap_wrap", false,-1);
        tracep->declBit(c+24,"RecordQueueTester queue clock", false,-1);
        tracep->declBit(c+25,"RecordQueueTester queue reset", false,-1);
        tracep->declBit(c+1,"RecordQueueTester queue io_enq_ready", false,-1);
        tracep->declBit(c+2,"RecordQueueTester queue io_enq_valid", false,-1);
        tracep->declBit(c+3,"RecordQueueTester queue io_deq_valid", false,-1);
        tracep->declBus(c+4,"RecordQueueTester queue io_deq_bits_bar", false,-1, 31,0);
        tracep->declBus(c+5,"RecordQueueTester queue io_deq_bits_foo", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+8+i*1,"RecordQueueTester queue ram_bar", true,(i+0), 31,0);}}
        tracep->declBit(c+26,"RecordQueueTester queue ram_bar_io_deq_bits_MPORT_en", false,-1);
        tracep->declBus(c+12,"RecordQueueTester queue ram_bar_io_deq_bits_MPORT_addr", false,-1, 1,0);
        tracep->declBus(c+4,"RecordQueueTester queue ram_bar_io_deq_bits_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+27,"RecordQueueTester queue ram_bar_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+13,"RecordQueueTester queue ram_bar_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+26,"RecordQueueTester queue ram_bar_MPORT_mask", false,-1);
        tracep->declBit(c+14,"RecordQueueTester queue ram_bar_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+15+i*1,"RecordQueueTester queue ram_foo", true,(i+0), 31,0);}}
        tracep->declBit(c+26,"RecordQueueTester queue ram_foo_io_deq_bits_MPORT_en", false,-1);
        tracep->declBus(c+12,"RecordQueueTester queue ram_foo_io_deq_bits_MPORT_addr", false,-1, 1,0);
        tracep->declBus(c+5,"RecordQueueTester queue ram_foo_io_deq_bits_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+28,"RecordQueueTester queue ram_foo_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+13,"RecordQueueTester queue ram_foo_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+26,"RecordQueueTester queue ram_foo_MPORT_mask", false,-1);
        tracep->declBit(c+14,"RecordQueueTester queue ram_foo_MPORT_en", false,-1);
        tracep->declBus(c+13,"RecordQueueTester queue enq_ptr_value", false,-1, 1,0);
        tracep->declBus(c+12,"RecordQueueTester queue deq_ptr_value", false,-1, 1,0);
        tracep->declBit(c+19,"RecordQueueTester queue maybe_full", false,-1);
        tracep->declBit(c+20,"RecordQueueTester queue ptr_match", false,-1);
        tracep->declBit(c+21,"RecordQueueTester queue empty", false,-1);
        tracep->declBit(c+22,"RecordQueueTester queue full", false,-1);
        tracep->declBit(c+23,"RecordQueueTester queue do_enq", false,-1);
    }
}

void VRecordQueueTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VRecordQueueTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VRecordQueueTester__Syms* __restrict vlSymsp = static_cast<VRecordQueueTester__Syms*>(userp);
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VRecordQueueTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VRecordQueueTester__Syms* __restrict vlSymsp = static_cast<VRecordQueueTester__Syms*>(userp);
    VRecordQueueTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__full)))));
        tracep->fullBit(oldp+2,((0U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle))));
        tracep->fullBit(oldp+3,((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__empty)))));
        tracep->fullIData(oldp+4,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar
                                  [vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]),32);
        tracep->fullIData(oldp+5,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo
                                  [vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]),32);
        tracep->fullCData(oldp+6,(vlTOPp->RecordQueueTester__DOT__cycle),2);
        tracep->fullBit(oldp+7,((3U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle))));
        tracep->fullIData(oldp+8,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[0]),32);
        tracep->fullIData(oldp+9,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[1]),32);
        tracep->fullIData(oldp+10,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[2]),32);
        tracep->fullIData(oldp+11,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_bar[3]),32);
        tracep->fullCData(oldp+12,(vlTOPp->RecordQueueTester__DOT__queue__DOT__deq_ptr_value),2);
        tracep->fullCData(oldp+13,(vlTOPp->RecordQueueTester__DOT__queue__DOT__enq_ptr_value),2);
        tracep->fullBit(oldp+14,(((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__full)) 
                                  & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__cycle)))));
        tracep->fullIData(oldp+15,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[0]),32);
        tracep->fullIData(oldp+16,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[1]),32);
        tracep->fullIData(oldp+17,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[2]),32);
        tracep->fullIData(oldp+18,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ram_foo[3]),32);
        tracep->fullBit(oldp+19,(vlTOPp->RecordQueueTester__DOT__queue__DOT__maybe_full));
        tracep->fullBit(oldp+20,(vlTOPp->RecordQueueTester__DOT__queue__DOT__ptr_match));
        tracep->fullBit(oldp+21,(vlTOPp->RecordQueueTester__DOT__queue__DOT__empty));
        tracep->fullBit(oldp+22,(vlTOPp->RecordQueueTester__DOT__queue__DOT__full));
        tracep->fullBit(oldp+23,(vlTOPp->RecordQueueTester__DOT__queue__DOT__do_enq));
        tracep->fullBit(oldp+24,(vlTOPp->clock));
        tracep->fullBit(oldp+25,(vlTOPp->reset));
        tracep->fullBit(oldp+26,(1U));
        tracep->fullIData(oldp+27,(0x162eU),32);
        tracep->fullIData(oldp+28,(0x4d2U),32);
    }
}
