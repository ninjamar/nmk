#include "display.h"

int kmain(){
  kclear();
  char *a = "Hello, World!\n";
  char *b = "This is ninjamar's kernel (nmk)\n";
  char *c = "See the source code at https://github.com/ninjamar/nmk\n";
  kprint(a);
  kprint(b);
  kprint(c);
  
  return 0;
}
