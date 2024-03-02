
int set_offs_P_2[20];



void load_frames_Player_two(){
		                       load_frames(Player_two.moves,"ken/ken_base",10,".png",set_offs_P_2[0],set_offs_P_2[1],true);
							   load_frames(Player_two.moves,"ken/m",25,".png",set_offs_P_2[2],set_offs_P_2[3],false);
							   
							   
							   
							   
							   //mosse subite
							   load_frames(Player_two.moves,"ken//ken_c_1//b",23,".png",set_offs_P_2[4],set_offs_P_2[5],false);
							   load_frames(Player_two.moves,"ken//ken_c_2//a",16, ".png",set_offs_P_2[6],set_offs_P_2[7],false);	  
                               load_frames(Player_two.moves,"ken//s_calc_gir//ca", 10, ".png",set_offs_P_2[8],set_offs_P_2[9],false);
                              
							  
							  
							  	Player_two.pos_x=(Player_two.moves[0]->w)/2;
	                            Player_two.pos_y=(Player_two.moves[0]->h)/2;




}
							
void free_multimedia_2() {

	char filename[50];
	
	for(int i=0;i<74;i++)
	
	{  
    
	                           
                              destroy_bitmap( Player_two.moves[i] ); 
                              
    
	}
							
							}
