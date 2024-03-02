
int	  step_combo=0;


void  combo_pugni(){
        int combo_duration=10;
        
		static int timer_combo_0=0;
	    
		timer_comb(timer_combo_0,step_combo,combo_duration);

  if( (key[KEY_LEFT]||tasto_sinistro) && step_combo==0 ){
			
		 step_combo=1;
		// timer_combo=0;
	     init_combo_timer=true;
	
	}


	
	else    if( (key[KEY_RIGHT]||tasto_destro)  && step_combo==1 ){
			                
			step_combo=2;
	
	}	
	
		else    if( !(key[KEY_RIGHT]||tasto_destro)  && step_combo==2 ){
			                
			step_combo=3;
	
	}	
textprintf_ex(double_buffering, font,0,0 , makecol(25, 225, 155),-1, "timer combo %d", timer_combo_0);
}



