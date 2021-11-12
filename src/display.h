/*
  This is the file that controls the display.
  Made by ninjamar (https://github.com/ninjamar)
*/

#define VGA_ADDRESS 0xb8000

char *video = (char *)VGA_ADDRESS;

int y_pos = 0; // line

int _len(char *msg){ // get length of string
	int i = 0;
	while (msg[i] != '\0'){
		i++;
	}
	return i;
}


void kprint_x_y(char *msg,int x,int y){
	int x_offset = (x % 2)+x; // x needs to be a multiple of 2 so we round up
	int y_offset = ((y*80)*2 % 2)+(y*80*2); // (y*80)*2 = y = 1 = 80 * 2 = color bytes + round 
	int offset = x_offset + y_offset;

	char *o_vid = (char *)VGA_ADDRESS+offset; // the new video (starts at offset)
	while (*msg != 0){ // copy msg to o_vid
		*o_vid++ = *msg++;
		*o_vid++ = 0x07;
	}
}

void kclear(){
	int s = 0; // string
	int c = 1; // color
	int i = 0;
	while (i < 80*25*2){ // 80 chars * 25 lines * 2 bytes
		video[s] = ' ';
		video[c] = 0x07;
		s = s + 2;
		c = c + 2;
		i++;
	}
}


void kprint(char *msg){
	// do text wrap in kprint_x_y
	// handle newline
	// handle textwrap
	kprint_x_y(msg,0,y_pos); // always print a start of line
	y_pos = y_pos + 1; // nextline
}
