void precedenze(int step_a,int final_a,int step_b,int final_b,int step_c,int final_c,int& step_combo,int& step_combo_1);
void execute_combo(int i_frame,int f_frame,int mossa_corrente);
void controllo_timers_one();
void check_collision();
bool aziona;
int speed_x=10;



void Player_one_moves(int& x1, int& y1){
	                                      
	static int combo_step[15];
	moving_right=false;
    moving_left=false;
	cruch=false;
	                                      
	poll_joystick();

 	if(Player_one.action==false)
	 {
 		                                  
	if(key[KEY_UP] )
	{
		                          /*
		                             Player_one.initial_frame=set_offs_P_1[20];// perchè il promo frame non viene visualizzato altrimenti che sotto 
		                             Player_one.final_frame=set_offs_P_1[21];*/
		                           
		
	}
	
	
	
	else if(  (key[KEY_RIGHT]||tasto_destro) ){
									  	                               
								
								moving_right=true;
								x1+=speed_x;
									                                 
									
								if(Player_one.pos_x<(Player_two.pos_x+25) && Player_one.final_frame!=set_offs_P_1[7])// questo viene eseguito solo una volta
									  {                                                         //infatti se Player_one.final_frame!=set_offs_P_1[7] allora Player_one.final_frame=set_offs_P_1[7] 
									                                                            // e quindi la volta successiva Player_one.final_frame!=set_offs_P_1[7] risulta falso e non si entra qui
									  
									  Player_one.initial_frame=set_offs_P_1[6]-1;// perchè il promo frame non viene visualizzato altrimenti che sotto 
		                              Player_one.final_frame=set_offs_P_1[7];	// viene subito incrementato
									 
	                                                                            }
																				
								else if( Player_one.pos_x>(Player_two.pos_x+25) && Player_one.final_frame!=set_offs_P_1[9])
									  {                                                     
									                                                         
									  Player_one.initial_frame=set_offs_P_1[8];// perchè il promo frame non viene visualizzato altrimenti che sotto 
		                              Player_one.final_frame=set_offs_P_1[9];	// viene subito incrementato
									 
	                                                                            }											
																				
									     }
	

else if( (key[KEY_LEFT]||tasto_sinistro)){
	                                  	                            
							moving_left=true;
							x1-=speed_x;
			                
							   if(Player_one.pos_x<(Player_two.pos_x+25) && Player_one.final_frame!=set_offs_P_1[9])// questo viene eseguito solo una volta
									  {                                                         //cosi perchè finchè non si entra in resetta  Player_one.final_frame!=set_offs_P_1[7]
									                                                            // risulta gia definito
									  Player_one.initial_frame=set_offs_P_1[8]-1;// perchè il primo frame non viene visualizzato altrimenti che sotto 
		                              Player_one.final_frame=set_offs_P_1[9];	// viene subito incrementato
									 
	                                                                            }
																				
								else if(Player_one.pos_x>(Player_two.pos_x+25) && Player_one.final_frame!=set_offs_P_1[7])// questo viene eseguito solo una volta
									  {                                                         //cosi perchè finchè non si entra in resetta  Player_one.final_frame!=set_offs_P_1[7]
									                                                            // risulta gia definito
									  Player_one.initial_frame=set_offs_P_1[6]-1;// perchè il promo frame non viene visualizzato altrimenti che sotto 
		                              Player_one.final_frame=set_offs_P_1[7];	// viene subito incrementato
									 
	                                                                            }
	                                    }
	                                    
 else	if((key[KEY_DOWN]||tasto_giu)){
		                                  
								cruch=true;
		                              if(Player_one.final_frame!=set_offs_P_1[13])// questo viene eseguito solo una volta
									  {                                                         //cosi perchè finchè non si entra in resetta  Player_one.final_frame!=set_offs_P_1[7]
									                                                            // risulta gia definito
									  Player_one.initial_frame=set_offs_P_1[12];// perchè il primo frame non viene visualizzato altrimenti che sotto 
		                              Player_one.final_frame=set_offs_P_1[13];	// viene subito incrementato
									 
	                                                                            }
																				
							
		
	                            }

   	
     }
 
 
 // sezione combos 
 combo_step[1]=combo_pugni_1();	//destra giu
 combo_step[0]=combo_pugni();// sinistra destra

 combo_step[2]=combo_direct_kick();	
 combo_step[3]=gomitata();
 combo_step[5]=calc_giro();
 combo_step[4]=calc_frontale();
 
 precedenze(combo_step[0],2,combo_step[1],1,combo_step[3],3,combo_step[0],combo_step[1]);	 	

    
	if( combo_step[0]==2 &&  (key[KEY_A]||tasto_quadrato)  && Player_one.action==false){       
	                                                                            
																			execute_combo(set_offs_P_1[4],set_offs_P_1[5],1);   
																				
																					}
	
   	else if(combo_step[1]==1 &&  (key[KEY_A]||tasto_quadrato)  && Player_one.action==false){     
	                                                                      
																			execute_combo(set_offs_P_1[2],set_offs_P_1[3],2);   
																			
																				   
																					   }
																					   
	else if(combo_step[2]==3 &&  (key[KEY_S]||tasto_triangolo)  && Player_one.action==false){     
	                                                                      
																			execute_combo(set_offs_P_1[10],set_offs_P_1[11],3);   
																		
																				   
																					   }
    else if(combo_step[3]==3 &&  (key[KEY_A]||tasto_quadrato)  && Player_one.action==false){     
	                                                                      
																			execute_combo(set_offs_P_1[14],set_offs_P_1[15],4);   
																			
																		/*	if(65>fabs(Player_two.pos_x-Player_one.pos_x)) 
																		    execute_special_effect(1,set_offs_P_1[2],6);*/		   
																					   }
    else if(combo_step[4]==1 &&  (key[KEY_S]||tasto_triangolo)  && Player_one.action==false){     
	                                                                      
																			execute_combo(set_offs_P_1[16],set_offs_P_1[17],5);   
																			
																		/*	if(65>fabs(Player_two.pos_x-Player_one.pos_x)) 
																		    execute_special_effect(1,set_offs_P_1[2],6);*/		   
																					   }
	 else if(combo_step[5]==1 &&  (key[KEY_S]||tasto_triangolo)  && Player_one.action==false){     
	                                                                      
																			execute_combo(set_offs_P_1[18],set_offs_P_1[19],6);   
																			
																		/*	if(65>fabs(Player_two.pos_x-Player_one.pos_x)) 
																		    execute_special_effect(1,set_offs_P_1[2],6);*/		   
																					   }
	
	
} 


void precedenze(int step_a,int final_a,int step_b,int final_b,int step_c,int final_c,int& step_combo,int& step_combo_1){
	
	if(step_a==final_a && step_b==final_b && step_c==final_c) {
	step_combo=0;
	step_combo_1=0;	
	}
	                                                          


}

void execute_combo(int i_frame,int f_frame,int mossa_corrente){	


                                               ticks_combo_player_one=0; // azzero il timer per non fare l' animzione + volte
                                               collision_ticks=0;
                                               Player_one.initial_frame=i_frame;
		                                       Player_one.final_frame=f_frame;
		                                       
											   current_timer_player_one=&ticks_combo_player_one; // punto verso la variabile del timer combo  per cambiare velocità
											   
											   Player_one.action=true;  // statust di azione in corso
											   moving_right=false;
	                                 	       moving_left=false;
		                                       Player_one.current_move=mossa_corrente;  // traccia mossa in corso
		}








void  Player_one_loop(){
	
	
	while(*current_timer_player_one>0)
							   {
							 
						        
		                       	Player_one.movimenti(Player_one.pos_x,Player_one.pos_y);
							    Player_one_moves_frames_manage();
							    update_effect();
							   
		                        controllo_timers_one();// in time_handler.h
				                  
		                       	 
							   }
}

void controllo_timers_one(){
	
	                        if(current_timer_player_one==&ticks_player_one)
							{ 
	                        ticks_player_one--;
	                        }
	
  	                        else if(current_timer_player_one==&ticks_combo_player_one)
							{ 
                            ticks_combo_player_one--;
	                        }
	                        else if(current_timer_player_one==&collision_ticks)
							{ 
                            collision_ticks--;
	                        }
}


