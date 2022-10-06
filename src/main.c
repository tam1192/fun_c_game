#include <stdio.h>

#define pixel_x 32
#define pixel_y 18

int canvas[pixel_y][pixel_x];
void canvas_init();
void screen_canvas();

int main(){
	canvas_init();
	screen_canvas();
}
void canvas_init(){
	int x,y;
	for(y=0;y<pixel_y;y++){
		for(x=0;x<pixel_x;x++){
			canvas[y][x]=0;
		}
	}
}
void screen_canvas(){
	int x,y;
	printf("\n");
	for(y=0;y<pixel_y;y++){
		for(x=0;x<pixel_x;x++){
			printf("%d",canvas[y][x]);
		}
		printf("\n");
	}
}
