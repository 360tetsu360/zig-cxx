#include "wrapper.h"
#include "cxx.h"

CxxC init() {
  return {
    new Cxx(),
  };
}

int add_cxx(CxxC* cxx, int a, int b) {
  return ((Cxx*)cxx->cxx)->add(a,b);
}

void deinit(CxxC* cxx) {
  delete ((Cxx*)cxx->cxx);
}