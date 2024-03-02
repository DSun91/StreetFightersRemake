
void loading_effect(int loading, const char* stringa){
	
	int x_cord=200;

	textprintf_ex( screen, font_1 ,50,320 , makecol(255, 225,0),-1,stringa,loading);
    rectfill( screen,x_cord,325,x_cord+loading,345,makecol(170,0,0));
    }


	

void load_frames(BITMAP* moves_frames[],const char* filename, int num_frames, const char* extension,int& set_off_initial,int& set_off_final,bool azzera){
	
	static int set_off=0;
	char stringa[50];
	char file_name[50];
    static int continue_loadind=0;
	
	
	
	if(azzera==true){
		
	
	set_off=0;
	}


	set_off_initial=set_off;
	
	strcpy(stringa,filename);
	
if(strcmp(extension,".bmp")==0)
                               {
  
                                  strcat(stringa," (%d).bmp");
   for(int i=0;i<num_frames;i++)
   
   {
   	sprintf(file_name,stringa,i+1);
   	moves_frames[set_off]=load_bmp(file_name, NULL);
	set_off++;
	continue_loadind++;
    loading_effect(continue_loadind,"Loading...");
  
   }
                                }
                                
else if(strcmp(extension,".png")==0)
                               {
  
                                  strcat(stringa," (%d).png");
   
   for(int i=0;i<num_frames;i++)
   
   {
   	sprintf(file_name,stringa,i+1);
   	moves_frames[set_off]=load_png(file_name, NULL);
	set_off++;
	continue_loadind++;
    loading_effect(continue_loadind,"Loading...");
  
   }
                                }

  
   
   set_off_final=set_off;
   set_off++;
   
}

