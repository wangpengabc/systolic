// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTTESTER__SYMS_H_
#define VERILATED_VSHIFTTESTER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VShiftTester.h"

// SYMS CLASS
class VShiftTester__Syms : public VerilatedSyms {
  public:

    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;

    // SUBCELL STATE
    VShiftTester*                  TOPp;

    // SCOPE NAMES
    VerilatedScope __Vscope_ShiftTester;

    // CREATORS
    VShiftTester__Syms(VerilatedContext* contextp, VShiftTester* topp, const char* namep);
    ~VShiftTester__Syms();

    // METHODS
    inline const char* name() { return __Vm_namep; }

} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
