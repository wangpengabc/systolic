// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMIXEDVECSPEC_ANON__SYMS_H_
#define VERILATED_VMIXEDVECSPEC_ANON__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VMixedVecSpec_Anon.h"

// SYMS CLASS
class VMixedVecSpec_Anon__Syms : public VerilatedSyms {
  public:

    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;

    // SUBCELL STATE
    VMixedVecSpec_Anon*            TOPp;

    // CREATORS
    VMixedVecSpec_Anon__Syms(VerilatedContext* contextp, VMixedVecSpec_Anon* topp, const char* namep);
    ~VMixedVecSpec_Anon__Syms();

    // METHODS
    inline const char* name() { return __Vm_namep; }

} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
