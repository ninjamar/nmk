/*
  This is the main file in the kernel.
  Made by ninjamar (https://github.com/ninjamar)
*/



#include "display.h"

int kmain(){
  kclear();
  
  char *m1 = "Hello! This is ninjamar's kernel (nmk)";
  char *m2 = "https://github.com/ninjamar/nmk"

  kprint(m1);
	kprint(m2);
  return 0;
}
