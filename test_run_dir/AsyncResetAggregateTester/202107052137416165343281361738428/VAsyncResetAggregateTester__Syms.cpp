// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAsyncResetAggregateTester__Syms.h"
#include "VAsyncResetAggregateTester.h"



// FUNCTIONS
VAsyncResetAggregateTester__Syms::~VAsyncResetAggregateTester__Syms()
{
}

VAsyncResetAggregateTester__Syms::VAsyncResetAggregateTester__Syms(VerilatedContext* contextp, VAsyncResetAggregateTester* topp, const char* namep)
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
    __Vscope_AsyncResetAggregateTester.configure(this, name(), "AsyncResetAggregateTester", "AsyncResetAggregateTester", -12, VerilatedScope::SCOPE_OTHER);
}
