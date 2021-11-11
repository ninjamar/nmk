#include "display.h"

int kmain(){
  kclear();
  char *msga = "Hello, World!\n";
  char *msgb = "Foobar";
  kprint(msga);
  kprint(msgb);
  
  return 0;
}
