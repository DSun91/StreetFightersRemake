
 int distance=0;

	
	

void check_collision(){
	
	
	
	distance=sqrt(  pow((Player_one.pos_x-Player_two.pos_x),2) + pow((Player_one.pos_y-Player_two.pos_y),2) );


// mantenimento distanza	
	if(distance<40 && Player_one.pos_x-Player_two.pos_x<0){
		Player_one.pos_x=Player_two.pos_x-40;
	
	}
	
	
	else if(distance<90 && Player_one.pos_x-Player_two.pos_x>0){
		
		Player_two.pos_x=Player_one.pos_x-90;
	}
	//
	
	
// cheat per scambio posizioni per vedere come funzionano le mosse	
	if(key[KEY_RIGHT] && key[KEY_U]) {
		Player_one.pos_x=400;
		Player_two.pos_x=0;
	}
//

    
	
	if(distance<70 && Player_one.current_move==3 && (Player_one.pos_x-Player_two.pos_x<0) && Player_one.initial_frame==89 && player_two_colpito==false){
		collision_ticks=0;
		collision_ticks_2=0;
		Player_two.current_move=1;// 1 per la serie m
		player_two_colpito=true;
		Player_two.initial_frame=set_offs_P_2[2];
		Player_two.final_frame=set_offs_P_2[3];
		current_timer_player_one=&collision_ticks;
		current_timer_player_two=&collision_ticks_2;
		execute_special_effect(4,set_off_special_effects[0],set_off_special_effects[1]);
	}
	
    else 	if(distance<100 && Player_one.current_move==3 && Player_one.pos_x-Player_two.pos_x>0 &&Player_one.initial_frame==90 && player_two_colpito==false){
		Player_two.current_move=1;// 1 per la serie m
		player_two_colpito=true;
		Player_two.initial_frame=set_offs_P_2[2];
		Player_two.final_frame=set_offs_P_2[3];
	}
	
	 else 	if(distance<70 && Player_one.current_move==1 && Player_one.pos_x-Player_two.pos_x<0 && Player_one.initial_frame==set_offs_P_1[4]+1 && player_two_colpito==false){
		Player_two.current_move=2;// 1 per la serie m
		player_two_colpito=true;
		Player_two.initial_frame=set_offs_P_2[4];
		Player_two.final_frame=set_offs_P_2[5];
		execute_special_effect(1,set_off_special_effects[4],set_off_special_effects[5]);
	}
	
		 else 	if(distance<70 && Player_one.current_move==2 && Player_one.pos_x-Player_two.pos_x<0 && Player_one.initial_frame==set_offs_P_1[2]+5 && player_two_colpito==false){
		Player_two.current_move=2;// 1 per la serie m
		player_two_colpito=true;
		Player_two.initial_frame=set_offs_P_2[6];
		Player_two.final_frame=set_offs_P_2[7];
		execute_special_effect(2,set_off_special_effects[6],set_off_special_effects[7]);
	}
	
	if(distance<70 && Player_one.current_move==5 && Player_one.pos_x-Player_two.pos_x<0 && Player_one.initial_frame==set_offs_P_1[16]+7 && player_two_colpito==false){
		Player_two.current_move=2;// 1 per la serie m
		player_two_colpito=true;
		Player_two.initial_frame=set_offs_P_2[8];
		Player_two.final_frame=set_offs_P_2[9];
		execute_special_effect(3,set_off_special_effects[8],set_off_special_effects[9]);
	}
	
	
	}
