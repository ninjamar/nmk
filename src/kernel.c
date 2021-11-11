/*
  This is the main file in the kernel.
  Made by ninjamar (https://github.com/ninjamar)
*/



#include "display.h"

int kmain(){
  kclear();
  char *msga = "Hello, World!\n";
  kprint(msga);
  
  return 0;
}
