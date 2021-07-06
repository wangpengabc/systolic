// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTSTESTER__SYMS_H_
#define VERILATED_VSHIFTSTESTER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VShiftsTester.h"

// SYMS CLASS
class VShiftsTester__Syms : public VerilatedSyms {
  public:

    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;

    // SUBCELL STATE
    VShiftsTester*                 TOPp;

    // SCOPE NAMES
    VerilatedScope __Vscope_ShiftsTester;

    // CREATORS
    VShiftsTester__Syms(VerilatedContext* contextp, VShiftsTester* topp, const char* namep);
    ~VShiftsTester__Syms();

    // METHODS
    inline const char* name() { return __Vm_namep; }

} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
