#include <stdio.h>
#include "cxx.h"

Cxx::Cxx(/* args */)
{
  printf("hello!\n");
}

Cxx::~Cxx()
{
  printf("bye!\n");
}

int Cxx::add(int a, int b) {
  return a + b;
}