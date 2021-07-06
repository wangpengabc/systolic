// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPRNGSTEPTEST_H_
#define VERILATED_VPRNGSTEPTEST_H_  // guard

#include "verilated_heavy.h"

//==========

class VPRNGStepTest__Syms;
class VPRNGStepTest_VerilatedVcd;


//----------

VL_MODULE(VPRNGStepTest) {
  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ PRNGStepTest__DOT__count2;
    CData/*0:0*/ PRNGStepTest__DOT___count2_wrap_value_T_1;
    CData/*1:0*/ PRNGStepTest__DOT__count4;
    CData/*1:0*/ PRNGStepTest__DOT___count4_wrap_value_T_1;
    CData/*3:0*/ PRNGStepTest__DOT__done_value;
    CData/*3:0*/ PRNGStepTest__DOT___done_wrap_value_T_1;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_0;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_1;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_2;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_3;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_4;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_5;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_6;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_7;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_8;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_9;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_10;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_11;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_12;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_13;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_14;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_15;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_0;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_1;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_2;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_3;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_4;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_5;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_6;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_7;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_8;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_9;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_10;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_11;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_12;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_13;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_14;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_15;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT___GEN_0;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_0;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_1;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_2;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_3;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_4;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_5;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_6;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_7;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_8;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_9;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_10;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_11;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_12;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_13;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_14;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_15;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT___GEN_0;

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPRNGStepTest__Syms* __VlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPRNGStepTest);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPRNGStepTest(VerilatedContext* contextp, const char* name = "TOP");
    VPRNGStepTest(const char* name = "TOP")
      : VPRNGStepTest(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~VPRNGStepTest();
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
    static void _eval_initial_loop(VPRNGStepTest__Syms* __restrict vlSymsp);
    void __Vconfigure(VPRNGStepTest__Syms* symsp, bool first);
  private:
    static QData _change_request(VPRNGStepTest__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPRNGStepTest__Syms* __restrict vlSymsp);
    static void _ctor_var_reset(VPRNGStepTest* self) VL_ATTR_COLD;
  public:
    static void _eval(VPRNGStepTest__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPRNGStepTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPRNGStepTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VPRNGStepTest__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VPRNGStepTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
