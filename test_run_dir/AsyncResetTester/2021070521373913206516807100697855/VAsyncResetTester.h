// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VASYNCRESETTESTER_H_
#define VERILATED_VASYNCRESETTESTER_H_  // guard

#include "verilated_heavy.h"

//==========

class VAsyncResetTester__Syms;
class VAsyncResetTester_VerilatedVcd;


//----------

VL_MODULE(VAsyncResetTester) {
  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AsyncResetTester__DOT__slowClk;
    CData/*0:0*/ AsyncResetTester__DOT__asyncResetNext;
    CData/*1:0*/ AsyncResetTester__DOT__cDiv_value;
    CData/*1:0*/ AsyncResetTester__DOT___cDiv_wrap_value_T_1;
    CData/*3:0*/ AsyncResetTester__DOT__count;
    CData/*3:0*/ AsyncResetTester__DOT___wrap_value_T_1;
    CData/*7:0*/ AsyncResetTester__DOT__reg_;

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    CData/*0:0*/ __Vclklast__TOP__AsyncResetTester__DOT__slowClk;
    CData/*0:0*/ __Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAsyncResetTester__Syms* __VlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAsyncResetTester);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAsyncResetTester(VerilatedContext* contextp, const char* name = "TOP");
    VAsyncResetTester(const char* name = "TOP")
      : VAsyncResetTester(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~VAsyncResetTester();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);

    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();

    // INTERNAL METHODS
    static void _eval_initial_loop(VAsyncResetTester__Syms* __restrict vlSymsp);
    void __Vconfigure(VAsyncResetTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VAsyncResetTester__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _ctor_var_reset(VAsyncResetTester* self) VL_ATTR_COLD;
  public:
    static void _eval(VAsyncResetTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAsyncResetTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAsyncResetTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VAsyncResetTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
