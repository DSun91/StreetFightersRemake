volatile int ticks_player_one=0;
volatile int ticks_combo_player_one=0;
volatile int ticks_player_two=0;
volatile int ticks_combo_player_two=0;
volatile int ticks_background=0;
volatile int collision_ticks=0;
volatile int collision_ticks_2=0;
volatile int *current_timer_player_one;
volatile int *current_timer_player_two;


void timer_player_one(void)
{
    ticks_player_one++;
    
}
END_OF_FUNCTION(timer_player_one)

void collision_timer(void)
{
   collision_ticks++;
    
}
END_OF_FUNCTION(collision_timer)

void collision_timer_2(void)
{
   collision_ticks_2++;
    
}
END_OF_FUNCTION(collision_timer_2)


void timer_player_one_combo(void)
{
    ticks_combo_player_one++;
    
}
END_OF_FUNCTION(timer_player_one_combo)

void timer_player_two(void)
{
    ticks_player_two++;
}
END_OF_FUNCTION(timer_player_two)



void timer_player_two_combo(void)
{
    ticks_combo_player_two++;
    
}
END_OF_FUNCTION(timer_player_two_combo)


void timer_background(void)
{
    ticks_background++;
}
END_OF_FUNCTION(timer_background)



void install_gameplay_timers(int base_animation, int combo_animation,int background_animation){
	                          
							// Player_one  
							  LOCK_VARIABLE(ticks_player_one);
						      LOCK_VARIABLE(ticks_combo_player_one);
                              LOCK_FUNCTION(timer_player_one);
							  LOCK_FUNCTION(timer_player_one_combo);
							
							install_int_ex(timer_player_one,BPS_TO_TIMER(base_animation));
							install_int_ex(timer_player_one_combo,BPS_TO_TIMER(combo_animation));
							
							// Player_two  
							  LOCK_VARIABLE(ticks_player_two);
						      LOCK_VARIABLE(ticks_combo_player_two);
                              LOCK_FUNCTION(timer_player_two);
							  LOCK_FUNCTION(timer_player_two_combo);
						                   
                            install_int_ex(timer_player_two,BPS_TO_TIMER(base_animation));
							install_int_ex(timer_player_two_combo,BPS_TO_TIMER(combo_animation));
							
							 // background
							  LOCK_VARIABLE(ticks_background);
                              LOCK_FUNCTION(timer_background);
							  
							install_int_ex(timer_background,BPS_TO_TIMER(background_animation));
							  
							 // collision
							  LOCK_VARIABLE(collision_ticks);
                              LOCK_FUNCTION(collision_timer);
							  
							install_int_ex(collision_timer,BPS_TO_TIMER(8));
							
							
							 LOCK_VARIABLE(collision_ticks_2);
                            LOCK_FUNCTION(collision_timer_2);
							  
							install_int_ex(collision_timer_2,BPS_TO_TIMER(8));
							
							
							  current_timer_player_one=&ticks_player_one;
							  current_timer_player_two=&ticks_player_two;
}

void background_loop(){
		while(ticks_background>0)	{
			anim_background();
			ticks_background--;
		}	
}



void controllo_timers_two(){
	
	if(current_timer_player_two==&ticks_player_two){ 
	ticks_player_two--;
	}
	
	else if(current_timer_player_two==&ticks_combo_player_two){ 
      ticks_combo_player_two--;
    
    
	}
		else if(current_timer_player_two==&collision_ticks_2){ 
      collision_ticks_2--;
    
    
	}
}
