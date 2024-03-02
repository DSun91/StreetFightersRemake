#include <allegro.h>
#include<alpng.h>
#include<stdlib.h>
#include<stdio.h>
void load_frames(BITMAP* moves_frames[],const char* filename, int num_frames, const char* extension);
BITMAP* sprites_ryu[2][30];
BITMAP* sprites_ken[2][30];
BITMAP* sfondo;
BITMAP* double_buffer;
bool collision_done=false;
BITMAP* effetti[40];
bool effetto_speciale=false;

int move_ken=0,x_ken=100,y_ken=110;
 int counter_ken=0;
 bool finishe=true;
int num_fram_ken=16;
int num_fram_ryu=23; 
int num_effetto=18;

void load_players(){
	
	    load_frames(effetti,"ken//ken_c_2//e", 18, ".png");
	
		load_frames(sprites_ryu[1],"ryu//combo_2//combo_punch", num_fram_ryu, ".png");
		
		load_frames(sprites_ken[1],"ken//ken_c_2//a", num_fram_ken, ".png");
	
	
	load_frames(sprites_ryu[0],"ryu//base", 10, ".png");
	

	
	load_frames(sprites_ken[0],"ken//ken_base", 10, ".png");
	

	
	sfondo=load_bitmap("ryu03.bmp",NULL);
	
	double_buffer=create_bitmap(sfondo->w,sfondo->h);
}
 static int ef=0;
 int move_ryu=0,x_ryu=82,y_ryu=140;
 int counter_ryu=0;
 bool finished=true;
 bool ryu_action_in_course=false;
 int move_done_ken=0;
void animation_p1(int current_move)
{
	
	
    int limit;
   
	if(current_move==1)
	{
		limit=num_fram_ryu;
	
	 } 
    else limit=10;
	
	
	counter_ryu++;
	
	if(counter_ryu==limit) 
	
	{
	counter_ryu=0;
	move_ryu=0;
	current_move=0;
	finished=true;
	move_done_ken=0;

	}
	
	
	draw_sprite(double_buffer,sfondo,0,0);

	
	draw_sprite_h_flip(double_buffer,sprites_ryu[current_move][counter_ryu],x_ryu,y_ryu);
	

	
}




void control_p1()
{

	
	if(key[KEY_A] && finished==true )
	{
		move_ryu=1;
		counter_ryu=0;
		finished=false;
	
	}
	else	if(key[KEY_RIGHT])
	{
		x_ryu+=9;
	}

	else	if(key[KEY_LEFT])
	{
		x_ryu-=9;
	}
	animation_p1(move_ryu);
	
}
int x_effeto,y_effetto;


void animation_p2(int current_move)
{
	
	
    int limit;
    
	if(current_move==1)
	{
		limit=num_fram_ken;
	    if(counter_ken>8 && counter_ken<13){
	                   y_ken-=7;
	                      x_ken+=5;	
		} 
		if(counter_ken>13 ){
	                   y_ken+=7;
	                      x_ken+=8;	
		} 
	
	 } 
    else limit=10;
	
	
	draw_sprite(double_buffer,sprites_ken[current_move][counter_ken],x_ken,y_ken);
	
	
    textprintf_ex(screen, font,0,0 , makecol(255, 225,0),-1, "counter_ryu %d", counter_ryu);
	textprintf_ex(screen, font,0,10 , makecol(255, 225,0),-1, "move_done_ken %d", move_done_ken);
	textprintf_ex(screen, font,0,20 , makecol(255, 225,0),-1, "counter_ken %d", counter_ken);
	textprintf_ex(screen, font,0,30 , makecol(255, 225,0),-1, "counter_ken %d", x_ken-x_ryu);
	textprintf_ex(screen, font,0,40 , makecol(255, 225,0),-1, "move_ryu %d", move_ryu);
	counter_ken++;
	if(counter_ken==limit) 
	
	{
	counter_ken=0;
     	y_ken=110;
	move_ken=0;
	finishe=true;
	collision_done=true;


if(counter_ryu>counter_ken && collision_done==false)	
	move_done_ken++;
	}


// effetti speciali
		if(effetto_speciale==true)
	
	{
	
	x_effeto=x_ken-70;
	y_effetto=y_ken-140;

if(ef>7){
    	x_effeto=x_ken-90;
	y_effetto=y_ken-170;
}
	draw_sprite(double_buffer,effetti[ef],x_effeto,y_effetto);
		ef++;
		if(ef==num_effetto) 
		{
			ef=0;
			effetto_speciale=false;
		}
	
		
	}
	draw_sprite(screen,double_buffer,0,0);
}






void control_p2()
{

	
	if(key[KEY_L] && finishe==true)
	{
		move_ken=1;
		counter_ken=0;
		finishe=false;
	}
	else	if(key[KEY_J])
	{
		x_ken+=9;
		
	}

	else	if(key[KEY_H])
	{
		x_ken-=9;
		move_done_ken=0;
	}
	animation_p2(move_ken);
	
}





void collision()
{
	
	if(x_ken-x_ryu < 100 && move_ryu==1 && counter_ryu==5 && collision_done==true && move_done_ken==0)
	{
		
		move_ken=1;
		counter_ken=0;
		collision_done=false;
		effetto_speciale=true;
	}
	
	
	
	
	
	
	
}


























void load_frames(BITMAP* moves_frames[],const char* filename, int num_frames, const char* extension){
	

	char stringa[50];
	char file_name[50];
  
	



	
	strcpy(stringa,filename);
	
if(strcmp(extension,".bmp")==0)
                               {
  
                                  strcat(stringa," (%d).bmp");
   for(int i=0;i<num_frames;i++)
   
   {
   	sprintf(file_name,stringa,i+1);
   	moves_frames[i]=load_bmp(file_name, NULL);
}
                                }
                                
else if(strcmp(extension,".png")==0)
                               {
  
                                  strcat(stringa," (%d).png");
   
   for(int i=0;i<num_frames;i++)
   
   {
   	sprintf(file_name,stringa,i+1);
   	moves_frames[i]=load_png(file_name, NULL);
	
  
   }
                                }

  
}


