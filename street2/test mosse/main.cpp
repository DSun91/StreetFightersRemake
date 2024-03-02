#include <allegro.h>
#include "file_1.h"

void init();
void deinit();
volatile int ticks=0;
void timer(void)
{
    ticks++;
    
}
END_OF_FUNCTION(timer)

int main() {
	init();
	                             LOCK_VARIABLE(ticks);
	                            LOCK_FUNCTION(timer);
							  
							
							install_int_ex(timer,BPS_TO_TIMER(25));
    load_players();
    
	while (!key[KEY_ESC]) {
		while(ticks>0 && !key[KEY_ESC])
		{
				control_p2();
		        control_p1();
		        collision();
		  
		        ticks--;
		}
	
		
		
	}

	deinit();
	return 0;
}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
