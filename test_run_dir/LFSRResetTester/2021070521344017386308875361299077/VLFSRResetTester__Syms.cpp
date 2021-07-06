// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VLFSRResetTester__Syms.h"
#include "VLFSRResetTester.h"



// FUNCTIONS
VLFSRResetTester__Syms::~VLFSRResetTester__Syms()
{
}

VLFSRResetTester__Syms::VLFSRResetTester__Syms(VerilatedContext* contextp, VLFSRResetTester* topp, const char* namep)
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
    __Vscope_LFSRResetTester.configure(this, name(), "LFSRResetTester", "LFSRResetTester", -12, VerilatedScope::SCOPE_OTHER);
}
