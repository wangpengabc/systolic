// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VThingsPassThroughTester__Syms.h"
#include "VThingsPassThroughTester.h"



// FUNCTIONS
VThingsPassThroughTester__Syms::~VThingsPassThroughTester__Syms()
{
}

VThingsPassThroughTester__Syms::VThingsPassThroughTester__Syms(VerilatedContext* contextp, VThingsPassThroughTester* topp, const char* namep)
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
    __Vscope_ThingsPassThroughTester.configure(this, name(), "ThingsPassThroughTester", "ThingsPassThroughTester", -12, VerilatedScope::SCOPE_OTHER);
}
