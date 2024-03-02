bool enabled_special_effects;
int set_off_special_effects[100];// vettore set_offs
int flusso_frames_effect=0;
int special_initial_frame;
int special_final_frame;
void load_effects();
int effect_type;
int s=200;
int p=200;
int effect_finished_time=0;
bool show_effect=false;
bool start_effect=false;

typedef struct{
	
	int pos_x;
	
	int posy_y;
	
	void (*load_eff)();
	
	BITMAP* special_effects[250];
	
}special;

special effect={0,0,load_effects};


void load_effects(){
	
	load_frames(effect.special_effects,"effetti speciali/effetto",10,".png",set_off_special_effects[0],set_off_special_effects[1],true);//eff 1
	
	load_frames(effect.special_effects,"effetti speciali/effetto_pugno",10,".png",set_off_special_effects[2],set_off_special_effects[3],false);//eff 2
	
    load_frames(effect.special_effects,"ken//ken_c_1//a", 27, ".png",set_off_special_effects[4],set_off_special_effects[5],false);
    
	load_frames(effect.special_effects,"ken//ken_c_2//e", 18, ".png",set_off_special_effects[6],set_off_special_effects[7],false);
	
	load_frames(effect.special_effects,"ken//s_calc_gir//a", 10, ".png",set_off_special_effects[8],set_off_special_effects[9],false);
} 

 
 
 
 void execute_special_effect(int type,int start_frame,int final_frame)
 {
 
 effect_type=type;	

 enabled_special_effects=true;
 

	       flusso_frames_effect=start_frame;
 		    special_final_frame=final_frame;
 		           
 		           
 		
 		  
	 }
 	
   
 
 
 
 
 
 void update_effect()
 {
 	
 	
  
		                            

if(flusso_frames_effect!=special_final_frame && enabled_special_effects==true)
                       {
	 	                 show_effect=true;	
	                     flusso_frames_effect++;	     
                                                }
	
switch (effect_type)
	 {   
	       case 1: if(Player_one.pos_x<Player_two.pos_x+25)    // combo 1 sinistra+destra
		            {   effect.pos_x=Player_two.pos_x-180;
	   	                effect.posy_y=Player_two.pos_y-170;}
	   	                
	   	                
	   	           if(flusso_frames_effect>set_off_special_effects[4]+16)
	   	           {
	   	           	    effect.pos_x=Player_two.pos_x-70;
	   	                effect.posy_y=Player_two.pos_y-150;
					  }
	   	          break;
	   	    
			
			
			case 2: if(Player_one.pos_x<Player_two.pos_x+25) // combo 2 destra+giu
		            {   effect.pos_x=Player_two.pos_x-70;
	   	                effect.posy_y=Player_two.pos_y-120;}
	   	                
	   	                
	   	          if(flusso_frames_effect>set_off_special_effects[6]+7)
	   	           {
	   	           	    effect.pos_x=Player_two.pos_x-70;
	   	                effect.posy_y=Player_two.pos_y-150;
					  }
	   	          break;
	   	    
	   	    
	   	    
	   	    case 3: if(Player_one.pos_x<Player_two.pos_x+25) // calcio giro
		            {   effect.pos_x=Player_two.pos_x-180;
	   	                effect.posy_y=Player_two.pos_y-170;}
	   	                break;
	   	                
	   	    
	   	    
	   	    case 4: if(Player_one.pos_x<Player_two.pos_x+25) // calcio frontale
		            {   effect.pos_x=Player_two.pos_x-60;
	   	                effect.posy_y=Player_two.pos_y-150;}
	   	                break;
	               
	   	            
	   	              
    }      
	
	
	
	if(flusso_frames_effect==special_final_frame-1)
	
	{
	        
   flusso_frames_effect=0;
	enabled_special_effects=false;
    show_effect=false;
	
    }
	 
	 	
   
   
   
    }
 
 
 
 

 

 
 
 
