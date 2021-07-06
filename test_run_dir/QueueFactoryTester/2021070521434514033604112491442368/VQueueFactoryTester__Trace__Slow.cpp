// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueFactoryTester__Syms.h"


//======================

void VQueueFactoryTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VQueueFactoryTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueueFactoryTester__Syms* __restrict vlSymsp = static_cast<VQueueFactoryTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VQueueFactoryTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VQueueFactoryTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VQueueFactoryTester__Syms* __restrict vlSymsp = static_cast<VQueueFactoryTester__Syms*>(userp);
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VQueueFactoryTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VQueueFactoryTester__Syms* __restrict vlSymsp = static_cast<VQueueFactoryTester__Syms*>(userp);
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+41,"clock", false,-1);
        tracep->declBit(c+42,"reset", false,-1);
        tracep->declBit(c+41,"QueueFactoryTester clock", false,-1);
        tracep->declBit(c+42,"QueueFactoryTester reset", false,-1);
        tracep->declBit(c+41,"QueueFactoryTester deq_clock", false,-1);
        tracep->declBit(c+42,"QueueFactoryTester deq_reset", false,-1);
        tracep->declBit(c+1,"QueueFactoryTester deq_io_enq_ready", false,-1);
        tracep->declBit(c+2,"QueueFactoryTester deq_io_enq_valid", false,-1);
        tracep->declBit(c+3,"QueueFactoryTester deq_io_enq_bits", false,-1);
        tracep->declBit(c+4,"QueueFactoryTester deq_io_deq_ready", false,-1);
        tracep->declBit(c+5,"QueueFactoryTester deq_io_deq_valid", false,-1);
        tracep->declBit(c+6,"QueueFactoryTester deq_io_deq_bits", false,-1);
        tracep->declBit(c+41,"QueueFactoryTester deq_io_deq_ready_prng_clock", false,-1);
        tracep->declBit(c+42,"QueueFactoryTester deq_io_deq_ready_prng_reset", false,-1);
        tracep->declBit(c+7,"QueueFactoryTester deq_io_deq_ready_prng_io_out_0", false,-1);
        tracep->declBit(c+8,"QueueFactoryTester deq_io_deq_ready_prng_io_out_1", false,-1);
        tracep->declBit(c+9,"QueueFactoryTester deq_io_deq_ready_prng_io_out_2", false,-1);
        tracep->declBit(c+10,"QueueFactoryTester deq_io_deq_ready_prng_io_out_3", false,-1);
        tracep->declBit(c+11,"QueueFactoryTester deq_io_deq_ready_prng_io_out_4", false,-1);
        tracep->declBit(c+12,"QueueFactoryTester deq_io_deq_ready_prng_io_out_5", false,-1);
        tracep->declBit(c+13,"QueueFactoryTester deq_io_deq_ready_prng_io_out_6", false,-1);
        tracep->declBit(c+14,"QueueFactoryTester deq_io_deq_ready_prng_io_out_7", false,-1);
        tracep->declBit(c+15,"QueueFactoryTester deq_io_deq_ready_prng_io_out_8", false,-1);
        tracep->declBit(c+16,"QueueFactoryTester deq_io_deq_ready_prng_io_out_9", false,-1);
        tracep->declBit(c+17,"QueueFactoryTester deq_io_deq_ready_prng_io_out_10", false,-1);
        tracep->declBit(c+18,"QueueFactoryTester deq_io_deq_ready_prng_io_out_11", false,-1);
        tracep->declBit(c+19,"QueueFactoryTester deq_io_deq_ready_prng_io_out_12", false,-1);
        tracep->declBit(c+20,"QueueFactoryTester deq_io_deq_ready_prng_io_out_13", false,-1);
        tracep->declBit(c+21,"QueueFactoryTester deq_io_deq_ready_prng_io_out_14", false,-1);
        tracep->declBit(c+22,"QueueFactoryTester deq_io_deq_ready_prng_io_out_15", false,-1);
        tracep->declBus(c+23,"QueueFactoryTester value", false,-1, 4,0);
        tracep->declBus(c+24,"QueueFactoryTester value_1", false,-1, 4,0);
        tracep->declBit(c+2,"QueueFactoryTester enq_valid", false,-1);
        tracep->declBus(c+25,"QueueFactoryTester deq_io_deq_ready_lo", false,-1, 7,0);
        tracep->declBit(c+1,"QueueFactoryTester enq_ready", false,-1);
        tracep->declBit(c+26,"QueueFactoryTester wrap", false,-1);
        tracep->declBit(c+27,"QueueFactoryTester wrap_1", false,-1);
        tracep->declBit(c+41,"QueueFactoryTester deq clock", false,-1);
        tracep->declBit(c+42,"QueueFactoryTester deq reset", false,-1);
        tracep->declBit(c+1,"QueueFactoryTester deq io_enq_ready", false,-1);
        tracep->declBit(c+2,"QueueFactoryTester deq io_enq_valid", false,-1);
        tracep->declBit(c+3,"QueueFactoryTester deq io_enq_bits", false,-1);
        tracep->declBit(c+4,"QueueFactoryTester deq io_deq_ready", false,-1);
        tracep->declBit(c+5,"QueueFactoryTester deq io_deq_valid", false,-1);
        tracep->declBit(c+6,"QueueFactoryTester deq io_deq_bits", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+28+i*1,"QueueFactoryTester deq ram", true,(i+0));}}
        tracep->declBit(c+43,"QueueFactoryTester deq ram_io_deq_bits_MPORT_en", false,-1);
        tracep->declBus(c+32,"QueueFactoryTester deq ram_io_deq_bits_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+6,"QueueFactoryTester deq ram_io_deq_bits_MPORT_data", false,-1);
        tracep->declBit(c+3,"QueueFactoryTester deq ram_MPORT_data", false,-1);
        tracep->declBus(c+33,"QueueFactoryTester deq ram_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+43,"QueueFactoryTester deq ram_MPORT_mask", false,-1);
        tracep->declBit(c+34,"QueueFactoryTester deq ram_MPORT_en", false,-1);
        tracep->declBus(c+33,"QueueFactoryTester deq value", false,-1, 1,0);
        tracep->declBus(c+32,"QueueFactoryTester deq value_1", false,-1, 1,0);
        tracep->declBit(c+35,"QueueFactoryTester deq maybe_full", false,-1);
        tracep->declBit(c+36,"QueueFactoryTester deq ptr_match", false,-1);
        tracep->declBit(c+37,"QueueFactoryTester deq empty", false,-1);
        tracep->declBit(c+38,"QueueFactoryTester deq full", false,-1);
        tracep->declBit(c+39,"QueueFactoryTester deq do_enq", false,-1);
        tracep->declBit(c+40,"QueueFactoryTester deq do_deq", false,-1);
        tracep->declBit(c+41,"QueueFactoryTester deq_io_deq_ready_prng clock", false,-1);
        tracep->declBit(c+42,"QueueFactoryTester deq_io_deq_ready_prng reset", false,-1);
        tracep->declBit(c+7,"QueueFactoryTester deq_io_deq_ready_prng io_out_0", false,-1);
        tracep->declBit(c+8,"QueueFactoryTester deq_io_deq_ready_prng io_out_1", false,-1);
        tracep->declBit(c+9,"QueueFactoryTester deq_io_deq_ready_prng io_out_2", false,-1);
        tracep->declBit(c+10,"QueueFactoryTester deq_io_deq_ready_prng io_out_3", false,-1);
        tracep->declBit(c+11,"QueueFactoryTester deq_io_deq_ready_prng io_out_4", false,-1);
        tracep->declBit(c+12,"QueueFactoryTester deq_io_deq_ready_prng io_out_5", false,-1);
        tracep->declBit(c+13,"QueueFactoryTester deq_io_deq_ready_prng io_out_6", false,-1);
        tracep->declBit(c+14,"QueueFactoryTester deq_io_deq_ready_prng io_out_7", false,-1);
        tracep->declBit(c+15,"QueueFactoryTester deq_io_deq_ready_prng io_out_8", false,-1);
        tracep->declBit(c+16,"QueueFactoryTester deq_io_deq_ready_prng io_out_9", false,-1);
        tracep->declBit(c+17,"QueueFactoryTester deq_io_deq_ready_prng io_out_10", false,-1);
        tracep->declBit(c+18,"QueueFactoryTester deq_io_deq_ready_prng io_out_11", false,-1);
        tracep->declBit(c+19,"QueueFactoryTester deq_io_deq_ready_prng io_out_12", false,-1);
        tracep->declBit(c+20,"QueueFactoryTester deq_io_deq_ready_prng io_out_13", false,-1);
        tracep->declBit(c+21,"QueueFactoryTester deq_io_deq_ready_prng io_out_14", false,-1);
        tracep->declBit(c+22,"QueueFactoryTester deq_io_deq_ready_prng io_out_15", false,-1);
        tracep->declBit(c+7,"QueueFactoryTester deq_io_deq_ready_prng state_0", false,-1);
        tracep->declBit(c+8,"QueueFactoryTester deq_io_deq_ready_prng state_1", false,-1);
        tracep->declBit(c+9,"QueueFactoryTester deq_io_deq_ready_prng state_2", false,-1);
        tracep->declBit(c+10,"QueueFactoryTester deq_io_deq_ready_prng state_3", false,-1);
        tracep->declBit(c+11,"QueueFactoryTester deq_io_deq_ready_prng state_4", false,-1);
        tracep->declBit(c+12,"QueueFactoryTester deq_io_deq_ready_prng state_5", false,-1);
        tracep->declBit(c+13,"QueueFactoryTester deq_io_deq_ready_prng state_6", false,-1);
        tracep->declBit(c+14,"QueueFactoryTester deq_io_deq_ready_prng state_7", false,-1);
        tracep->declBit(c+15,"QueueFactoryTester deq_io_deq_ready_prng state_8", false,-1);
        tracep->declBit(c+16,"QueueFactoryTester deq_io_deq_ready_prng state_9", false,-1);
        tracep->declBit(c+17,"QueueFactoryTester deq_io_deq_ready_prng state_10", false,-1);
        tracep->declBit(c+18,"QueueFactoryTester deq_io_deq_ready_prng state_11", false,-1);
        tracep->declBit(c+19,"QueueFactoryTester deq_io_deq_ready_prng state_12", false,-1);
        tracep->declBit(c+20,"QueueFactoryTester deq_io_deq_ready_prng state_13", false,-1);
        tracep->declBit(c+21,"QueueFactoryTester deq_io_deq_ready_prng state_14", false,-1);
        tracep->declBit(c+22,"QueueFactoryTester deq_io_deq_ready_prng state_15", false,-1);
    }
}

void VQueueFactoryTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VQueueFactoryTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VQueueFactoryTester__Syms* __restrict vlSymsp = static_cast<VQueueFactoryTester__Syms*>(userp);
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VQueueFactoryTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VQueueFactoryTester__Syms* __restrict vlSymsp = static_cast<VQueueFactoryTester__Syms*>(userp);
    VQueueFactoryTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__full)))));
        tracep->fullBit(oldp+2,((0x14U > (IData)(vlTOPp->QueueFactoryTester__DOT__value))));
        tracep->fullBit(oldp+3,(((0x13U == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                 | ((0x12U != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                    & ((0x11U == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                       | ((0x10U == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                          | ((0xfU 
                                              == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                             | ((0xeU 
                                                 != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                & ((0xdU 
                                                    != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                   & ((0xcU 
                                                       == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                      | ((0xbU 
                                                          == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                         | ((0xaU 
                                                             != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                            & ((9U 
                                                                != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                               & ((8U 
                                                                   != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                                  & ((7U 
                                                                      == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                                     | ((6U 
                                                                         != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                                        & ((5U 
                                                                            == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                                           | ((4U 
                                                                               != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                                              & ((3U 
                                                                                != (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                                                & ((2U 
                                                                                == (IData)(vlTOPp->QueueFactoryTester__DOT__value)) 
                                                                                | (1U 
                                                                                != (IData)(vlTOPp->QueueFactoryTester__DOT__value))))))))))))))))))))));
        tracep->fullBit(oldp+4,((1U & ((IData)(vlTOPp->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                                       >> 2U))));
        tracep->fullBit(oldp+5,((1U & (~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__empty)))));
        tracep->fullBit(oldp+6,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram
                                [vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1]));
        tracep->fullBit(oldp+7,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0));
        tracep->fullBit(oldp+8,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1));
        tracep->fullBit(oldp+9,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2));
        tracep->fullBit(oldp+10,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3));
        tracep->fullBit(oldp+11,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4));
        tracep->fullBit(oldp+12,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5));
        tracep->fullBit(oldp+13,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6));
        tracep->fullBit(oldp+14,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7));
        tracep->fullBit(oldp+15,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8));
        tracep->fullBit(oldp+16,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9));
        tracep->fullBit(oldp+17,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10));
        tracep->fullBit(oldp+18,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11));
        tracep->fullBit(oldp+19,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12));
        tracep->fullBit(oldp+20,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13));
        tracep->fullBit(oldp+21,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14));
        tracep->fullBit(oldp+22,(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15));
        tracep->fullCData(oldp+23,(vlTOPp->QueueFactoryTester__DOT__value),5);
        tracep->fullCData(oldp+24,(vlTOPp->QueueFactoryTester__DOT__value_1),5);
        tracep->fullCData(oldp+25,((((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7) 
                                     << 7U) | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1) 
                                                               << 1U) 
                                                              | (IData)(vlTOPp->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->fullBit(oldp+26,((0x14U == (IData)(vlTOPp->QueueFactoryTester__DOT__value))));
        tracep->fullBit(oldp+27,((0x14U == (IData)(vlTOPp->QueueFactoryTester__DOT__value_1))));
        tracep->fullBit(oldp+28,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram[0]));
        tracep->fullBit(oldp+29,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram[1]));
        tracep->fullBit(oldp+30,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram[2]));
        tracep->fullBit(oldp+31,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ram[3]));
        tracep->fullCData(oldp+32,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__value_1),2);
        tracep->fullCData(oldp+33,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__value),2);
        tracep->fullBit(oldp+34,(((~ (IData)(vlTOPp->QueueFactoryTester__DOT__deq__DOT__full)) 
                                  & (0x14U > (IData)(vlTOPp->QueueFactoryTester__DOT__value)))));
        tracep->fullBit(oldp+35,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__maybe_full));
        tracep->fullBit(oldp+36,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__ptr_match));
        tracep->fullBit(oldp+37,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__empty));
        tracep->fullBit(oldp+38,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__full));
        tracep->fullBit(oldp+39,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_enq));
        tracep->fullBit(oldp+40,(vlTOPp->QueueFactoryTester__DOT__deq__DOT__do_deq));
        tracep->fullBit(oldp+41,(vlTOPp->clock));
        tracep->fullBit(oldp+42,(vlTOPp->reset));
        tracep->fullBit(oldp+43,(1U));
    }
}
