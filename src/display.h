/*
  This is the file that controls the display.
  Made by ninjamar (https://github.com/ninjamar)
*/

#define VGA_ADDRESS 0xb8000 // 0xb8000 is the address of the video

char *video = (char *)VGA_ADDRESS; // pointer to video

int y_pos = 0; // current line
int MAX_OSIZE = 80;

int _len(char *msg){ // get length of string
	int i = 0;
	while (msg[i] != '\0'){
		i++;
	}
	return i;
}

/*
 * print {msg} at {x,y}
*/
void kprint_x_y(char *msg,int color,int x,int y){
	if (_len(msg) > MAX_OSIZE){
		char *err_msg = "Error: Cannot print string: Size exceeds 80 characters";
		kprint_x_y(err_msg,0x07,x,y); // print error message
		return; // end function
	}


	int x_offset = (x % 2)+x; // x needs to be a multiple of 2 so we round up
	int y_offset = ((y*80)*2 % 2)+(y*80*2); // (y*80)*2 = y = 1 = 80 * 2 = color bytes + round 
	int offset = x_offset + y_offset;

	char *o_vid = (char *)VGA_ADDRESS+offset; // the new video (starts at offset)
	while (*msg != 0){ // copy msg to o_vid
		*o_vid++ = *msg++;
		*o_vid++ = color;
	}
}

/*
	clear the display
*/
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



/*
	wrapper for kprint_x_y(msg)
	implements global newline count
*/
void kprint(char *msg){
	kprint_x_y(msg,0x07,0,y_pos); // always print a start of line
	y_pos = y_pos + 1; // nextline
}
