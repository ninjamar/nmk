#define VGA_ADDRESS 0xb8000

char *video = (char *)VGA_ADDRESS;

int kprint(char *msg){
  /*
   * print {msg} to the display
   */
  int i = 0;
  int j = 0;

  while (msg[j] != '\0'){
    video[i] = msg[j];
    video[i+1] = 0x07;
    ++j;
    i = i + 2;
  }
  return 0;
}

int kclear(){
  /*
   * clears the display
   */
  int i = 0;
  int j = 0;
  // 25 lines of 80 characters which take 2 bytes
  while (j < 80*25*2){
    video[j] = 'a';
    video[j+1] = 0x07;
    j = j + 2;
  }
  return 0;
}
