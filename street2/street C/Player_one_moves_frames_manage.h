void resetta(int& frame_iniziale, int& frame_finale){
	frame_iniziale =0;
	frame_finale =10;	
		
	
	if(moving_right==true){
		 if(Player_one.pos_x>(Player_two.pos_x+25)){
		 
		 frame_iniziale = set_offs_P_1[8];
	     frame_finale = set_offs_P_1[9];
		 
		 
		 } 
		 else if(Player_one.pos_x<(Player_two.pos_x+25)){
		 
		 frame_iniziale =set_offs_P_1[6]+1;
	     frame_finale = set_offs_P_1[7];
		 
		 
		 } 
		
	}
		
	if(moving_left==true){
		   
		    if(Player_one.pos_x>(Player_two.pos_x+25)){
		 
		 frame_iniziale =set_offs_P_1[6]+1;
	     frame_finale = set_offs_P_1[7];
		 
		 
		 } 
else if(Player_one.pos_x<(Player_two.pos_x+25)){
		 
		 frame_iniziale =set_offs_P_1[8];
	     frame_finale = set_offs_P_1[9];
		 
		 
		 } 
		 }
		 
if(cruch==true){
		   
		    
		 
		 frame_iniziale =set_offs_P_1[12];
	     frame_finale = set_offs_P_1[13];
		 
			}
	

}
void control_combo_end(){
	 
	  if(Player_one.initial_frame==Player_one.final_frame)
	  {ticks_player_one=0; //timer animazione di base azzerato se no nel while counter>0 counter-- mi ripete + volte l'animazione
	   current_timer_player_one=&ticks_player_one;
	   Player_one.action=false; // una volta che l'azione è finita questa è messa a false così posso farne un'altra 
	   Player_one.current_move=0; // ritorno all' animazione di base
	   cruch=false;
	  }
	   
}




void Player_one_moves_frames_manage()
{
	Player_one.initial_frame++;


    if (moving_right==false 
	&& moving_left==false 
	&& Player_one.action==false 
	&& Player_one.initial_frame!=set_offs_P_1[0] 
	&& Player_one.final_frame!=set_offs_P_1[1] 
	&& Player_one.final_frame!=set_offs_P_1[13]
	&& Player_one.final_frame!=set_offs_P_1[21]
	){// necessario per togliere movimento quando non premo destra o sinista
    	resetta(Player_one.initial_frame,Player_one.final_frame);
	}



if(Player_one.current_move==1) {
	  
	  
	                             if(Player_one.initial_frame>=48 && Player_one.initial_frame<54 && Player_one.pos_x<Player_two.pos_x) Player_one.pos_x+=9;
	                             else if(Player_one.initial_frame>=48 && Player_one.initial_frame<54) Player_one.pos_x-=9;
	                              
								  
								  control_combo_end();// alla fine di questa è sempre che Player_one.initial_frame==Player_one.final_frame
	                                                  //quindi entra nella chiamata sotto e resetta a iniziale 0 e finale 10
	                            }
	                            


else if(Player_one.current_move==2) {
	  
	  
	                             if(Player_one.initial_frame>12 && Player_one.initial_frame<17 && Player_one.pos_x<Player_two.pos_x) Player_one.pos_x+=11;
	                             else if(Player_one.initial_frame>12 && Player_one.initial_frame<17) Player_one.pos_x-=11;
	                              
								  
								  control_combo_end();// alla fine di questa è sempre che Player_one.initial_frame==Player_one.final_frame
	                                                  //quindi entra nella chiamata sotto e resetta a iniziale 0 e finale 10
	                            }
	                            
else if(Player_one.current_move==3) {
	  
	  
	                             if(Player_one.initial_frame>84 && Player_one.initial_frame<92 && Player_one.pos_x<Player_two.pos_x) Player_one.pos_x+=13;
	                             else if(Player_one.initial_frame>84 && Player_one.initial_frame<92) Player_one.pos_x-=13;
	
if( Player_one.initial_frame==90  &&  current_timer_player_one==&collision_ticks) {
	  
	  ticks_player_one=0;
	  collision_ticks=0;
	  
	  
	  current_timer_player_one=&ticks_player_one;
	  							
	                                  }
								  
								  control_combo_end();// alla fine di questa è sempre che Player_one.initial_frame==Player_one.final_frame
	                                                  //quindi entra nella chiamata sotto e resetta a iniziale 0 e finale 10
	                            }

else if(Player_one.current_move==4) {
	  
	  
								  control_combo_end();// alla fine di questa è sempre che Player_one.initial_frame==Player_one.final_frame
	                                                  //quindi entra nella chiamata sotto e resetta a iniziale 0 e finale 10
	                                  }
	                                  
else if(Player_one.current_move==5) {
	  
	  
								  control_combo_end();// alla fine di questa è sempre che Player_one.initial_frame==Player_one.final_frame
	                                                  //quindi entra nella chiamata sotto e resetta a iniziale 0 e finale 10
	                                  }
	                                  
else if(Player_one.current_move==6) {
	  
	  
								  control_combo_end();// alla fine di questa è sempre che Player_one.initial_frame==Player_one.final_frame
	                                                  //quindi entra nella chiamata sotto e resetta a iniziale 0 e finale 10
	                                  }

   		
// sezione gestione collisioni




if(Player_one.initial_frame==Player_one.final_frame) resetta(Player_one.initial_frame,Player_one.final_frame);





}
