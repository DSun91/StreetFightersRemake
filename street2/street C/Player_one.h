void visualizza();
void loading_effect();
void load_multimedia_1();
void load_multimedia_2();

#define larghezza_schermo 640
#define altezza_schermo   480
BITMAP* double_buffering = create_bitmap(larghezza_schermo,altezza_schermo);;

typedef struct {
	

	int current_move;
	
	int frames_counter;
	
	int pos_x;

    int pos_y;	

	void (*load_moves)();
	

    BITMAP* moves[10][50];
	
/*	void mosse();
	
	void controllo_mosse();*/
	

	
}Player;

Player Player_one={0,0,200,200,load_multimedia_1};

Player Player_two={0,0,100,100,load_multimedia_2};







