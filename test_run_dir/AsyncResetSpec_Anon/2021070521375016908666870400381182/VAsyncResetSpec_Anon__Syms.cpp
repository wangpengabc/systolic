// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAsyncResetSpec_Anon__Syms.h"
#include "VAsyncResetSpec_Anon.h"



// FUNCTIONS
VAsyncResetSpec_Anon__Syms::~VAsyncResetSpec_Anon__Syms()
{
}

VAsyncResetSpec_Anon__Syms::VAsyncResetSpec_Anon__Syms(VerilatedContext* contextp, VAsyncResetSpec_Anon* topp, const char* namep)
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
    __Vscope_AsyncResetSpec_Anon.configure(this, name(), "AsyncResetSpec_Anon", "AsyncResetSpec_Anon", -12, VerilatedScope::SCOPE_OTHER);
}