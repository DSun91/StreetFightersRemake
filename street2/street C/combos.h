#define  tasto_sinistro joy[0].stick[0].axis[0].d1
#define  tasto_destro   joy[0].stick[0].axis[0].d2
#define  tasto_su       joy[0].stick[0].axis[1].d1
#define  tasto_giu      joy[0].stick[0].axis[1].d2

#define  tasto_triangolo  joy[0].button[0].b
#define  tasto_tondo      joy[0].button[1].b
#define  tasto_x          joy[0].button[2].b
#define  tasto_quadrato   joy[0].button[3].b
#define  R1               joy[0].button[5].b





 

void timer_comb(int& timer_com, int& step, int limite_scadenza_combo, bool& init_combo_t){
	 
	if(init_combo_t==true && (step>=1)) {
		
	                                           timer_com++;
	                                           
                                            }  
	
	if(timer_com>limite_scadenza_combo) {
	                                         
											 timer_com=0;
	                                         step=0;	
	                             
										  } 
										  
	if(Player_one.action==true) { // se la combo è in corso
		init_combo_t=false;
		step=0;
	}
}



#include "combos_1\\combo_punch_0.h"
#include "combos_1\\combo_punch_1.h"



