#define base_anim   10 
#define combo_punch 22 
#define combo_punch_1 23

int set_offs_P_1[30];
					   

void load_frames_Player_one(){
	
	
	
	
	font_1=load_font("font1.pcx",NULL,NULL);
	font_2=load_font("font2.pcx",NULL,NULL);
	
	
	load_frames(Player_one.moves,"ryu/base",10,".png",set_offs_P_1[0],set_offs_P_1[1],true);
     
    load_frames(Player_one.moves,"ryu/combo_2/combo_punch",23,".png",set_offs_P_1[2],set_offs_P_1[3],false);
    
    load_frames(Player_one.moves,"ryu/combo_1/pugni",22,".png",set_offs_P_1[4],set_offs_P_1[5],false);
    
    load_frames(Player_one.moves,"ryu/muovimento_destra/destra",12,".png",set_offs_P_1[6],set_offs_P_1[7],false);
    
    load_frames(Player_one.moves,"ryu/muovimento_sinistra/sinistra",11,".png",set_offs_P_1[8],set_offs_P_1[9],false);
    
    load_frames(Player_one.moves,"ryu/direct_kick/direct_kick",16,".png",set_offs_P_1[10],set_offs_P_1[11],false);
    
    load_frames(Player_one.moves,"ryu/cruch/cruch",4,".png",set_offs_P_1[12],set_offs_P_1[13],false);
    
    load_frames(Player_one.moves,"ryu/gomitata/elbo",11,".png",set_offs_P_1[14],set_offs_P_1[15],false);
    
    load_frames(Player_one.moves,"ryu/calcio_giro/calc_gir",14,".png",set_offs_P_1[16],set_offs_P_1[17],false);
    
    load_frames(Player_one.moves,"ryu/calcio_frontale/calc_frontal",13,".png",set_offs_P_1[18],set_offs_P_1[19],false);
    
	load_frames(Player_one.moves,"ryu/salto_alto/salto",14,".png",set_offs_P_1[20],set_offs_P_1[21],false);
	
	
	
	Player_one.pos_x=((Player_one.moves[0]->w)/2);
	Player_one.pos_y=((Player_one.moves[0]->h)/2)+60;
}







void free_multimedia_1(){
	
	   for(int i=0;i<150;i++)
	
	{  
    
	                           
                               destroy_bitmap( Player_one.moves[i] );
                             
    
	}			
	
                         }






							   
							   
							   

