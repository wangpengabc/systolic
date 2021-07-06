// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VShiftsTester__Syms.h"
#include "VShiftsTester.h"



// FUNCTIONS
VShiftsTester__Syms::~VShiftsTester__Syms()
{
}

VShiftsTester__Syms::VShiftsTester__Syms(VerilatedContext* contextp, VShiftsTester* topp, const char* namep)
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
    __Vscope_ShiftsTester.configure(this, name(), "ShiftsTester", "ShiftsTester", -12, VerilatedScope::SCOPE_OTHER);
}
