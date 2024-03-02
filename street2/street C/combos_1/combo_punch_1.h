

int combo_pugni_1(){
     static int step_combo=0;
	 static int timer_combo;
     static int combo_duration=30; // durata combo
     static bool  init_combo_timer=false;
    
	 timer_comb(timer_combo,step_combo,combo_duration,init_combo_timer);
if(Player_one.pos_x<Player_two.pos_x+25)
{
	
	
  if( (key[KEY_RIGHT]||tasto_destro) && (key[KEY_DOWN]||tasto_giu) && step_combo==0 ){
		
	    step_combo=1;
		 init_combo_timer=true;
	}
	
}

else 
{
	
	
  if( (key[KEY_LEFT]||tasto_sinistro) && (key[KEY_DOWN]||tasto_giu) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
	
}
	return step_combo;
 
}


int combo_direct_kick(){
     static int step_combo=0;
	 static int timer_combo;
     static int combo_duration=10; // durata combo
     static bool  init_combo_timer=false;
    
	 timer_comb(timer_combo,step_combo,combo_duration,init_combo_timer);

if(Player_one.pos_x<Player_two.pos_x+25)
{
	
	
  if( (key[KEY_RIGHT]||tasto_destro) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
	
	if( !(key[KEY_RIGHT]||tasto_destro) && step_combo==1 ){
			
	        step_combo=2;
		   
	}
	
	if( (key[KEY_RIGHT]||tasto_destro) && step_combo==2 ){
			
	        step_combo=3;
		  
	}
}

else 
{
	
	
  if( (key[KEY_LEFT]||tasto_sinistro) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
	
	if( !(key[KEY_LEFT]||tasto_sinistro) && step_combo==1 ){
			
	        step_combo=2;
		   
	}
	
	if( (key[KEY_LEFT]||tasto_sinistro) && step_combo==2 ){
			
	        step_combo=3;
		  
	}
}
	return step_combo;
 
}


int gomitata(){
     static int step_combo=0;
	 static int timer_combo;
     static int combo_duration=8; // durata combo
     static bool  init_combo_timer=false;
    
	 timer_comb(timer_combo,step_combo,combo_duration,init_combo_timer);

if(Player_one.pos_x<Player_two.pos_x+25)
{
	
	
  if( (key[KEY_RIGHT]||tasto_destro) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
	
	if( !(key[KEY_RIGHT]||tasto_destro) && step_combo==1 ){
			
	        step_combo=2;
		   
	}
	
	if( (key[KEY_RIGHT]||tasto_destro) && step_combo==2 ){
			
	        step_combo=3;
		  
	}
}

else 
{
	
	
  if( (key[KEY_LEFT]||tasto_sinistro) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
	
	if( !(key[KEY_LEFT]||tasto_sinistro) && step_combo==1 ){
			
	        step_combo=2;
		   
	}
	
	if( (key[KEY_LEFT]||tasto_sinistro) && step_combo==2 ){
			
	        step_combo=3;
		  
	}
}
	return step_combo;
 
}


int calc_giro(){
     static int step_combo=0;
	 static int timer_combo;
     static int combo_duration=8; // durata combo
     static bool  init_combo_timer=false;
    
	 timer_comb(timer_combo,step_combo,combo_duration,init_combo_timer);

if(Player_one.pos_x<Player_two.pos_x+25)
{
	
	
  if( (key[KEY_LEFT]||tasto_sinistro) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
	

}

else 
{
	
	
  if( (key[KEY_RIGHT]||tasto_destro) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
	
	
}
	return step_combo;
 
}





int calc_frontale(){
     static int step_combo=0;
	 static int timer_combo;
     static int combo_duration=8; // durata combo
     static bool  init_combo_timer=false;
    
	 timer_comb(timer_combo,step_combo,combo_duration,init_combo_timer);

if(Player_one.pos_x<Player_two.pos_x+25)
{
	
	
  if( (key[KEY_RIGHT]||tasto_destro) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
	

}

else 
{
	
	if( (key[KEY_LEFT]||tasto_sinistro) && step_combo==0 ){
			
	        step_combo=1;
		    init_combo_timer=true;
	}
  
	
	
}
	return step_combo;
 
}



