
int	  step_combo_1=0;



void combo_pugni_1(){

     int combo_duration=20;
     static int timer_combo_1;
     timer_comb(timer_combo_1,step_combo_1,combo_duration);

if(  (key[KEY_DOWN]||tasto_giu) && step_combo_1==0){
		 step_combo_1=1;
		 //timer_combo=0;
	     init_combo_timer=true;
	}
	
	else  if( (key[KEY_RIGHT]||tasto_destro)  && step_combo_1==1 ){
			step_combo_1=2;
	
	}
	
	else    if( (key[KEY_DOWN]||tasto_giu)  && step_combo_1==2 ){
			step_combo_1=3;
	
	}
	
	else    if( (key[KEY_RIGHT]||tasto_destro) && step_combo_1==3 ){
			step_combo_1=4;
	
	}	
	
		textprintf_ex(double_buffering, font,00,75 , makecol(25, 225, 155),-1, "timer_combo_1 %d", timer_combo_1);	
 
}
