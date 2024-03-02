#define walking 110
void Player_one_moves_frames_manage();
void Player_two_moves_frames_manage();
void Player_one_moves(int& x1,int& y1);
void Player_two_moves(int& x1,int& y1);
void Player_one_loop();
void Player_two_loop();
void resetta(int& frame_iniziale, int& frame_finale);
void load_frames(BITMAP* moves_frames[],const char* filename, int num_frames, const char* extension,int& set_off_initial,int& set_off_final,bool azzera);
bool moving_right=false;
bool moving_left=false;
bool cruch=false;
FONT *font_1,*font_2;

typedef struct {
	
	int initial_frame;

    int final_frame;
    
    bool action;

	int current_move;
	
	int pos_x;

    int pos_y;	

    void (*movimenti)(int& x,int& y);
    
    void (*loop)();
    
    BITMAP* moves[1000];
	

	

	
}Player;

Player Player_one={ 
                    0       // initial frame
                   ,10      // final frame
				   ,false  // action status
				   ,0      // current move
				   ,200      //posx
				   ,220     //posy
				   ,Player_one_moves
				   ,Player_one_loop
				   };

Player Player_two={
                    0       // initial frame
                   ,10         // final frame
				   ,false     // action status
				   ,0         // current move
				   ,200        //posx
				   ,170        //posy
				   ,Player_two_moves
				   ,Player_two_loop
				   };







