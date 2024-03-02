

BITMAP* double_buffering;
BITMAP* background[100];
BITMAP *barra;
void loading_effect(int loading, const char* stringa);
bool background_loaded;
int back_g_setoff[10];
int num_frames_background;



void create_background(BITMAP* backg[],const char* filename,int num_frames,const char* extension){
	                       
						   static int larghezza_sfondo, altezza_sfondo;
						   
						   num_frames_background=num_frames;
	                      
						  
						   load_frames(backg,filename,num_frames,extension,back_g_setoff[0],back_g_setoff[1],true);
	
	                        altezza_sfondo = backg[0]->h;
	                        larghezza_sfondo  = backg[0]->w;
	
                           
						  
	                       
						   double_buffering = create_bitmap(larghezza_sfondo,altezza_schermo);
						   
						   background_loaded=true;
}

void create_double_buffering_bitmap(int larghezza_scherm,int altezza_scherm)
{
	 double_buffering = create_bitmap(larghezza_scherm,altezza_scherm);
}






static int frames_stream=0;
void anim_background(){

	frames_stream++;
    if(frames_stream==num_frames_background) frames_stream=0;
}





void clear_background(BITMAP* bk_ground[]){
	for(int i=0;i<num_frames_background;i++){
		destroy_bitmap(bk_ground[i]);
	}
}
