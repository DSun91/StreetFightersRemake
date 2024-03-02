void Player_two_moves(int& x1, int& y1){
	
	poll_joystick();
	
	if(  (key[KEY_U]) ){
			x1+=9;
	}
	
	if( (key[KEY_V])){
			x1-=9;
	}
	
	
	
	}
	


void Player_two_loop(){
	while(*current_timer_player_two>0){
							    	
							    	Player_two.movimenti(Player_two.pos_x,Player_two.pos_y);
									Player_two_moves_frames_manage();
							        controllo_timers_two();
							       
								}
	
} 
