// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VQUEUEPIPETESTER_H_
#define VERILATED_VQUEUEPIPETESTER_H_  // guard

#include "verilated_heavy.h"

//==========

class VQueuePipeTester__Syms;
class VQueuePipeTester_VerilatedVcd;


//----------

VL_MODULE(VQueuePipeTester) {
  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ QueuePipeTester__DOT__q_io_enq_ready;
    CData/*4:0*/ QueuePipeTester__DOT__value;
    CData/*4:0*/ QueuePipeTester__DOT__value_1;
    CData/*0:0*/ QueuePipeTester__DOT___T_7;
    CData/*0:0*/ QueuePipeTester__DOT__wrap;
    CData/*4:0*/ QueuePipeTester__DOT___value_T_1;
    CData/*0:0*/ QueuePipeTester__DOT__wrap_1;
    CData/*4:0*/ QueuePipeTester__DOT___value_T_3;
    CData/*0:0*/ QueuePipeTester__DOT__q__DOT__maybe_full;
    CData/*0:0*/ QueuePipeTester__DOT__q__DOT__do_enq;
    CData/*0:0*/ QueuePipeTester__DOT__q__DOT__do_deq;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15;
    SData/*15:0*/ QueuePipeTester__DOT___q_io_deq_ready_T;

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VQueuePipeTester__Syms* __VlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VQueuePipeTester);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VQueuePipeTester(VerilatedContext* contextp, const char* name = "TOP");
    VQueuePipeTester(const char* name = "TOP")
      : VQueuePipeTester(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~VQueuePipeTester();
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
    static void _eval_initial_loop(VQueuePipeTester__Syms* __restrict vlSymsp);
    void __Vconfigure(VQueuePipeTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VQueuePipeTester__Syms* __restrict vlSymsp);
    static QData _change_request_1(VQueuePipeTester__Syms* __restrict vlSymsp);
    static void _ctor_var_reset(VQueuePipeTester* self) VL_ATTR_COLD;
  public:
    static void _eval(VQueuePipeTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VQueuePipeTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VQueuePipeTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VQueuePipeTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VQueuePipeTester__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
