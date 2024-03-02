#include<stdio.h>
#include<math.h>
#include<stdlib.h>  
#include<time.h>
#include <allegro.h>
#include<alpng.h>
#include "definizioni.h"
#include "music.h" 
#include "foto.h" 
#include "mec.h" 
#include "animazioni_onde.h"    
#include "ken.h" 
#include "collisions.h"  
#include "visualizza.h"   
#include "camera_motions.h"  
#include "intell.h"   
                                 
#define AUTODETECT_WINDOW 2     
#define FULLSCREEN 0




int main() {
    
	int tipo_visualizzazione,delta_tempo=40;
	tipo_visualizzazione=2;
    int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(32);
    res = set_gfx_mode(tipo_visualizzazione,640, 480, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	
 	install_joystick(JOY_TYPE_AUTODETECT);
    	
buffer_doppio_buffering = create_bitmap(larghezza_schermo,altezza_schermo);// creo bitmap per doppio buffering

set_immagini_Ryu=0;
set_immagini_Ken=0;

wall_paper=load_bitmap("wall_peppe.bmp", NULL);
draw_sprite(screen,wall_paper,0,40);

caric();

musica(); 

 install_int(timer1, 1000);
	while (!key[KEY_ESC]) {    // poll_joystick();
                              LOCK_VARIABLE(counter);
                              LOCK_VARIABLE(framerate);
                              LOCK_VARIABLE(ticks);
                              LOCK_FUNCTION(timer1);
//create the interrupt handler

ticks++;
resting=0;
rest_callback(delta_tempo, rest1);
                                if(key[KEY_B]!=0 ){delta_tempo+=1;
								}
                               
							    if(key[KEY_T]!=0&&delta_tempo>0){delta_tempo-=1;
								}
							   if(turn==0){
                                          turn=1;}
                                           
                               else if(turn==1){turn=0;}
                               if(timer_on==true){
                               tempo++;}
                               flusso_frames_ken++;
                               flusso_frames_Ryu++;
                                if(flusso_frames_Ryu>50){flusso_frames_Ryu=0;}
                                if(flusso_frames_ken>50){flusso_frames_ken=0;}
                                if(tempo>intervallo_tempo){tempo=0;
                                                           step_calcio_frontale=0;
                                                           step_super_onda=0;
                                                           timer_on=false;}
                                               
                 controlKen();              
                 controlRyu();
                 contrcoll();
                 muovimento_onde();
                 separa();      
                 ambiente();
                
                 
                 mosseken();
                 mosseRyu();
                 
                 animaz_base_Ryu();
                 animaz_base_Ken();
                 
                 intelligenza();
                 collisione();
                 
                 
      
} 
destroy_bitmap(buffer_doppio_buffering);

destroy_bitmap(sfondo[0]);

for(i=0;i<13;i++){
                     for(j=0; j<46;j++)
                     {destroy_bitmap(images[i][j]);}}
for(i=0;i<13;i++){
                     for(j=0; j<40;j++)
                     {destroy_bitmap(image[i][j]);}}

clear_keybuf(); 
stop_midi();
destroy_sample(sound);
destroy_sample(a);
destroy_sample(b);
destroy_sample(c);	        
destroy_sample(d);
//destroy_sample(f);
	
allegro_exit();
	return(1);
}
END_OF_MAIN()























