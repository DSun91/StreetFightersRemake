
 bool player_two_colpito=false;
void resetta2(int& frame_iniziale, int& frame_finale){
	frame_iniziale =0;
	frame_finale =10;
	player_two_colpito=false;	
	}


void Player_two_check_collision(){
	
	
	
}


void Player_two_moves_frames_manage(){


	Player_two.initial_frame++;
	
	if(Player_two.current_move==1 && (Player_one.pos_x-Player_two.pos_x<0) && player_two_colpito==true){
		
		Player_two.pos_x+=22;
		
	}
	else if(Player_two.current_move==1 && (Player_one.pos_x-Player_two.pos_x>0) && player_two_colpito==true){
		
		Player_two.pos_x-=12;
		
	}
	//collision section
	if(Player_two.initial_frame>=13  && current_timer_player_two==&collision_ticks_2)
	{
		    ticks_player_two=0;
			current_timer_player_two=&ticks_player_two;
	}
	
	
	
	if(Player_two.initial_frame==Player_two.final_frame-1) resetta2(Player_two.initial_frame,Player_two.final_frame);		

}


