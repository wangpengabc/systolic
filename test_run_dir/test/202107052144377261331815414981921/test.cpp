
#include "Vtest.h"
#include "verilated.h"

vluint64_t main_time = 0;
double sc_time_stamp () { return main_time; }

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vtest* top = new Vtest;
    while (!Verilated::gotFinish()) { top->eval(); }
    delete top;
    exit(0);
}

void vl_finish(const char* filename, int linenum, const char* hier) {
  Verilated::flushCall();
  exit(0);
}
