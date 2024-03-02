	
void visualizza(){
	
     
	 static int spazio_y=25;
	 static int spazio_x=150;
	 static int sposotamento_scena=10;
	 static int sposotamento_sfondo=20;
	 
	 	
	
	 
	 //clear_to_color(double_buffering,makecol(136,0,21));
	 

if(background_loaded==true)
	 {
	  camera_scroll();
	  blit(background[frames_stream],double_buffering,orr_scroll,0,0,0,larghezza_schermo,altezza_schermo);
	 }
	 
    

  
     
	if(Player_one.pos_x<Player_two.pos_x+25){
	draw_sprite(double_buffering,Player_two.moves[Player_two.initial_frame],Player_two.pos_x,Player_two.pos_y+sposotamento_scena);
	draw_sprite_h_flip(double_buffering,Player_one.moves[Player_one.initial_frame],Player_one.pos_x,Player_one.pos_y+sposotamento_scena);
	}
	else{
         draw_sprite(double_buffering,Player_one.moves[Player_one.initial_frame],Player_one.pos_x,Player_one.pos_y+sposotamento_scena);
         draw_sprite_h_flip(double_buffering,Player_two.moves[Player_two.initial_frame],Player_two.pos_x,Player_two.pos_y+sposotamento_scena);
	   } 

        textprintf_ex(double_buffering, font_2,0,0 ,makecol(255, 225,0),-1, "frames_flusso %d", Player_one.initial_frame);
    	textprintf_ex(double_buffering, font_2,0,sposotamento_scena+20 , makecol(255, 225,0),-1, "s+p  %d", s+p);
		textprintf_ex(double_buffering, font_2,0,sposotamento_scena+40 , makecol(255, 225,0),-1, "flusso effetto  %d", flusso_frames_effect);
		textprintf_ex(double_buffering, font_2,0,sposotamento_scena+60 , makecol(255, 225,0),-1, "effect_finished_time %d", effect_finished_time);
		textprintf_ex(double_buffering, font_2,0,sposotamento_scena+80 , makecol(255, 225,0),-1, "effect_finished %d", effect_finished_time);
		textprintf_ex(double_buffering, font_2,0,sposotamento_scena+100 , makecol(255, 225,0),-1, "distance %d", distance);	
		textprintf_ex(double_buffering, font_2,0,sposotamento_scena+120 , makecol(255, 225,0),-1, "colltick %d", collision_ticks);	
			
		
if(show_effect==true)
 {
 	draw_sprite(double_buffering, effect.special_effects[flusso_frames_effect],effect.pos_x,effect.posy_y);
 }    
	 
	//draw_sprite(double_buffering,barra,0,0);	
	draw_sprite(screen,double_buffering,0,sposotamento_sfondo);
	clear_bitmap(double_buffering);
		
}
