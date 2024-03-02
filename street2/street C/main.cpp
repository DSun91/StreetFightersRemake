#define  larghezza_schermo  640
#define  altezza_schermo    400
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <allegro.h>
//#include <alpng.h>
#include "Players.h"
#include "background.h"
#include "frames_loader.h"
#include "special_effects.h"
#include "load_Player_one.h"
#include "load_Player_two.h"
#include "combos.h"
#include "time_handler.h"
#include "Player_one_mecc.h"
#include "Player_one_moves_frames_manage.h"
#include "Player_two_moves_frames_manage.h"
#include "Player_two_mecc.h"
#include "collisions.h"
#include "camera.h"
#include "visualizza.h"

/*developer Sunny dial
            
			dialsunny91@gmail.com*/




int main() {
	        
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(2, larghezza_schermo, altezza_schermo, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	    install_timer();
	    install_keyboard();
	    install_mouse();
	    install_joystick(JOY_TYPE_AUTODETECT);
	
	

  
	load_frames_Player_one();
	load_frames_Player_two();	
	create_background(background,"sfondi/background_5/tempesta",24,".bmp");
	effect.load_eff();
    install_gameplay_timers(32,37,12);  	
     //barra=load_bmp("lifebar.bmp",NULL);
	// create_double_buffering_bitmap(640,400);                  
      
      
	    
           
        
        
        
	while (!key[KEY_ESC]) { 
	
	
	               
		            Player_one.loop();
					
					Player_two.loop();      
		
					background_loop();				
					 
					check_collision();			
		            
					visualizza(); 
	                                              
	
	                       
	                         
	}

	clear_keybuf();
	destroy_bitmap(double_buffering);
	clear_background(background);
	 free_multimedia_1();
	 free_multimedia_2();
	return 0;
}
END_OF_MAIN()






