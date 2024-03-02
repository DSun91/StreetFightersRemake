
int  combo_pugni(){
  static int   timer_combo=0;
  static int   step_combo=0;
  static int   combo_duration=10;
  static bool  init_combo_timer=false;
  timer_comb(timer_combo,step_combo,combo_duration,init_combo_timer);


if(Player_one.pos_x<Player_two.pos_x+25)
{

  if( (key[KEY_LEFT]||tasto_sinistro) && step_combo==0 )
  {
			
		 step_combo=1;
         init_combo_timer=true;
	
  }


else    if( (key[KEY_RIGHT]||tasto_destro)  && step_combo==1 )

    {
			                
			step_combo=2;
	
	}	
}

else
{

  if( (key[KEY_RIGHT]||tasto_destro) && step_combo==0 )
  {
			
		 step_combo=1;
         init_combo_timer=true;
	
  }


else    if( (key[KEY_LEFT]||tasto_sinistro)  && step_combo==1 )

    {
			                
			step_combo=2;
	
	}	
}
return step_combo;

}



