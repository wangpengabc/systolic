// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSQUEEZEFUNCTIONALITYTESTER__SYMS_H_
#define VERILATED_VSQUEEZEFUNCTIONALITYTESTER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VSqueezeFunctionalityTester.h"

// SYMS CLASS
class VSqueezeFunctionalityTester__Syms : public VerilatedSyms {
  public:

    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;

    // SUBCELL STATE
    VSqueezeFunctionalityTester*   TOPp;

    // CREATORS
    VSqueezeFunctionalityTester__Syms(VerilatedContext* contextp, VSqueezeFunctionalityTester* topp, const char* namep);
    ~VSqueezeFunctionalityTester__Syms();

    // METHODS
    inline const char* name() { return __Vm_namep; }

} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
