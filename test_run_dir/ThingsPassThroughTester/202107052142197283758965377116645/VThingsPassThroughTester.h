// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTHINGSPASSTHROUGHTESTER_H_
#define VERILATED_VTHINGSPASSTHROUGHTESTER_H_  // guard

#include "verilated_heavy.h"

//==========

class VThingsPassThroughTester__Syms;
class VThingsPassThroughTester_VerilatedVcd;


//----------

VL_MODULE(VThingsPassThroughTester) {
  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*4:0*/ ThingsPassThroughTester__DOT__value;
    CData/*4:0*/ ThingsPassThroughTester__DOT__value_1;
    CData/*0:0*/ ThingsPassThroughTester__DOT___T;
    CData/*0:0*/ ThingsPassThroughTester__DOT__wrap;
    CData/*4:0*/ ThingsPassThroughTester__DOT___value_T_1;
    CData/*0:0*/ ThingsPassThroughTester__DOT__wrap_1;
    CData/*4:0*/ ThingsPassThroughTester__DOT___value_T_3;
    CData/*1:0*/ ThingsPassThroughTester__DOT__q__DOT__enq_ptr_value;
    CData/*1:0*/ ThingsPassThroughTester__DOT__q__DOT__deq_ptr_value;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q__DOT__maybe_full;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q__DOT__ptr_match;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q__DOT__empty;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q__DOT__full;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q__DOT__do_enq;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q__DOT__do_deq;
    CData/*1:0*/ ThingsPassThroughTester__DOT__q__DOT___value_T_1;
    CData/*1:0*/ ThingsPassThroughTester__DOT__q__DOT___value_T_3;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14;
    CData/*0:0*/ ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15;
    SData/*15:0*/ ThingsPassThroughTester__DOT___q_io_deq_ready_T;
    VlUnpacked<CData/*1:0*/, 4> ThingsPassThroughTester__DOT__q__DOT__ram;

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VThingsPassThroughTester__Syms* __VlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VThingsPassThroughTester);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VThingsPassThroughTester(VerilatedContext* contextp, const char* name = "TOP");
    VThingsPassThroughTester(const char* name = "TOP")
      : VThingsPassThroughTester(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~VThingsPassThroughTester();
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
    static void _eval_initial_loop(VThingsPassThroughTester__Syms* __restrict vlSymsp);
    void __Vconfigure(VThingsPassThroughTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VThingsPassThroughTester__Syms* __restrict vlSymsp);
    static QData _change_request_1(VThingsPassThroughTester__Syms* __restrict vlSymsp);
    static void _ctor_var_reset(VThingsPassThroughTester* self) VL_ATTR_COLD;
  public:
    static void _eval(VThingsPassThroughTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VThingsPassThroughTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VThingsPassThroughTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VThingsPassThroughTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VThingsPassThroughTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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