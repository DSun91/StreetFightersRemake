static int orr_scroll=0;

void camera_scroll(){
	
	if(Player_one.pos_x>larghezza_schermo-190)
		{
			Player_one.pos_x=larghezza_schermo-190;	 
			
	                                               if(orr_scroll<(background[0]->w)-larghezza_schermo-10)
	                                                  {
	
		                                                orr_scroll+=9;	
		                                                Player_two.pos_x-=9;
													   }
		}
	
		if(Player_one.pos_x<-110)
		{
			Player_one.pos_x=-110;	 
			
	                                               if(orr_scroll>0)
	                                                  {
	
		                                                orr_scroll-=9;	
		                                                Player_two.pos_x+=9;
													   }
		}
		
		if(Player_two.pos_x>larghezza_schermo-230)
		{
			Player_two.pos_x=larghezza_schermo-230;	 
			
	                                               if(orr_scroll<(background[0]->w)-larghezza_schermo-10)
	                                                  {
	
		                                                orr_scroll+=9;	
		                                                Player_one.pos_x-=9;
													   }
		}
	
		if(Player_two.pos_x<-140)
		{
			Player_two.pos_x=-140;	 
			
	                                               if(orr_scroll>0)
	                                                  {
	
		                                                orr_scroll-=9;	
		                                                Player_one.pos_x+=9;
													   }
		}
	 
	
	
	
}

	 
	 
