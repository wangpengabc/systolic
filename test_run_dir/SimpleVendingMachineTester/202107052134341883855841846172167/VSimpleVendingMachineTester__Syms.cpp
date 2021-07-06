// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimpleVendingMachineTester__Syms.h"
#include "VSimpleVendingMachineTester.h"



// FUNCTIONS
VSimpleVendingMachineTester__Syms::~VSimpleVendingMachineTester__Syms()
{
}

VSimpleVendingMachineTester__Syms::VSimpleVendingMachineTester__Syms(VerilatedContext* contextp, VSimpleVendingMachineTester* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_SimpleVendingMachineTester.configure(this, name(), "SimpleVendingMachineTester", "SimpleVendingMachineTester", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimpleVendingMachineTester__dut.configure(this, name(), "SimpleVendingMachineTester.dut", "dut", -12, VerilatedScope::SCOPE_OTHER);
}
