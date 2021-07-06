// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMPLEVENDINGMACHINETESTER__SYMS_H_
#define VERILATED_VSIMPLEVENDINGMACHINETESTER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VSimpleVendingMachineTester.h"

// SYMS CLASS
class VSimpleVendingMachineTester__Syms : public VerilatedSyms {
  public:

    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;

    // SUBCELL STATE
    VSimpleVendingMachineTester*   TOPp;

    // SCOPE NAMES
    VerilatedScope __Vscope_SimpleVendingMachineTester;
    VerilatedScope __Vscope_SimpleVendingMachineTester__dut;

    // CREATORS
    VSimpleVendingMachineTester__Syms(VerilatedContext* contextp, VSimpleVendingMachineTester* topp, const char* namep);
    ~VSimpleVendingMachineTester__Syms();

    // METHODS
    inline const char* name() { return __Vm_namep; }

} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
