// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxWithParamsTester__Syms.h"


//======================

void VBlackBoxWithParamsTester::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VBlackBoxWithParamsTester::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithParamsTester__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VBlackBoxWithParamsTester::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VBlackBoxWithParamsTester::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithParamsTester__Syms*>(userp);
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VBlackBoxWithParamsTester::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithParamsTester__Syms*>(userp);
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+1,"BlackBoxWithParamsTester clock", false,-1);
        tracep->declBit(c+2,"BlackBoxWithParamsTester reset", false,-1);
        tracep->declBit(c+5,"BlackBoxWithParamsTester blackBoxOne_out", false,-1);
        tracep->declBus(c+6,"BlackBoxWithParamsTester blackBoxFour_out", false,-1, 2,0);
        tracep->declBus(c+7,"BlackBoxWithParamsTester blackBoxStringParamOne_out", false,-1, 31,0);
        tracep->declBus(c+8,"BlackBoxWithParamsTester blackBoxStringParamTwo_out", false,-1, 31,0);
        tracep->declQuad(c+9,"BlackBoxWithParamsTester blackBoxRealParamOne_out", false,-1, 63,0);
        tracep->declQuad(c+11,"BlackBoxWithParamsTester blackBoxRealParamNeg_out", false,-1, 63,0);
        tracep->declBit(c+13,"BlackBoxWithParamsTester blackBoxTypeParamBit_out", false,-1);
        tracep->declBus(c+14,"BlackBoxWithParamsTester blackBoxTypeParamWord_out", false,-1, 31,0);
        tracep->declBus(c+3,"BlackBoxWithParamsTester cycles", false,-1, 1,0);
        tracep->declBit(c+4,"BlackBoxWithParamsTester wrap_wrap", false,-1);
        tracep->declBus(c+15,"BlackBoxWithParamsTester blackBoxOne WIDTH", false,-1, 31,0);
        tracep->declBus(c+15,"BlackBoxWithParamsTester blackBoxOne VALUE", false,-1, 31,0);
        tracep->declBus(c+5,"BlackBoxWithParamsTester blackBoxOne out", false,-1, 0,0);
        tracep->declBus(c+16,"BlackBoxWithParamsTester blackBoxFour WIDTH", false,-1, 31,0);
        tracep->declBus(c+17,"BlackBoxWithParamsTester blackBoxFour VALUE", false,-1, 31,0);
        tracep->declBus(c+6,"BlackBoxWithParamsTester blackBoxFour out", false,-1, 2,0);
        tracep->declBus(c+7,"BlackBoxWithParamsTester blackBoxStringParamOne out", false,-1, 31,0);
        tracep->declBus(c+8,"BlackBoxWithParamsTester blackBoxStringParamTwo out", false,-1, 31,0);
        tracep->declDouble(c+18,"BlackBoxWithParamsTester blackBoxRealParamOne REAL", false,-1);
        tracep->declQuad(c+9,"BlackBoxWithParamsTester blackBoxRealParamOne out", false,-1, 63,0);
        tracep->declDouble(c+20,"BlackBoxWithParamsTester blackBoxRealParamNeg REAL", false,-1);
        tracep->declQuad(c+11,"BlackBoxWithParamsTester blackBoxRealParamNeg out", false,-1, 63,0);
        tracep->declBit(c+13,"BlackBoxWithParamsTester blackBoxTypeParamBit out", false,-1);
        tracep->declBus(c+14,"BlackBoxWithParamsTester blackBoxTypeParamWord out", false,-1, 31,0);
    }
}

void VBlackBoxWithParamsTester::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VBlackBoxWithParamsTester::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithParamsTester__Syms*>(userp);
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VBlackBoxWithParamsTester::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VBlackBoxWithParamsTester__Syms* __restrict vlSymsp = static_cast<VBlackBoxWithParamsTester__Syms*>(userp);
    VBlackBoxWithParamsTester* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->BlackBoxWithParamsTester__DOT__cycles),2);
        tracep->fullBit(oldp+4,((3U == (IData)(vlTOPp->BlackBoxWithParamsTester__DOT__cycles))));
        tracep->fullBit(oldp+5,(1U));
        tracep->fullCData(oldp+6,(4U),3);
        tracep->fullIData(oldp+7,(1U),32);
        tracep->fullIData(oldp+8,(2U),32);
        tracep->fullQData(oldp+9,(0x3ff0000000000000ULL),64);
        tracep->fullQData(oldp+11,(0xbff0000000000000ULL),64);
        tracep->fullBit(oldp+13,(1U));
        tracep->fullIData(oldp+14,(0xdeadbeefU),32);
        tracep->fullIData(oldp+15,(1U),32);
        tracep->fullIData(oldp+16,(3U),32);
        tracep->fullIData(oldp+17,(4U),32);
        tracep->fullDouble(oldp+18,(1.0));
        tracep->fullDouble(oldp+20,(-1.0));
    }
}
