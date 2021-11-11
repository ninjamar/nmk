#include "display.h"

int kmain(){
  kclear();
  char *a = "Hello, World!";
  char *b = "This is ninjamar's kernel (nmk)";
  char *c = "See the source code at https://github.com/ninjamar/nmk";
  kprint(a);
  kprint(b);
  kprint(c);
  
  return 0;
}
