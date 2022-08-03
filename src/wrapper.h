#ifndef _WRAPPER_H_
#define _WRAPPER_H_

#ifdef __cplusplus
#include "cxx.h"
extern "C" {
#endif

typedef struct {
  void* cxx;
} CxxC;

CxxC init();
int add_cxx(CxxC* cxx, int a, int b);
void deinit(CxxC* cxx);

#ifdef __cplusplus
}
#endif

#endif