#define limite_destro_schremo 400 // 400 FULL SCHREEN 1000 durante la prova
#define limite_sinistro_schremo 115
#define corsa  limite_destro_schremo+150
#define passo_onda 60
#define intervallo_tempo 10
#define larghezza_schermo 640  //640 se fullscreen 1200se prova
#define altezza_schermo 400    //480 se fullscreen  e non
#define distanza_minima 30
#define altezza_Ryu 175
#define altezza_Ken 145 

#define  sinistra joy[0].stick[0].axis[0].d1
#define  destra   joy[0].stick[0].axis[0].d2
#define  su       joy[0].stick[0].axis[1].d1
#define  giu      joy[0].stick[0].axis[1].d2

#define  tasto_triangolo  joy[0].button[0].b
#define  tasto_tondo      joy[0].button[1].b
#define  tasto_x          joy[0].button[2].b
#define  tasto_quadrato   joy[0].button[3].b
#define  R1               joy[0].button[5].b
//
volatile int counter;
volatile int ticks;
volatile int framerate;
volatile int resting, rested;
 
 void timer1(void)
{
counter++;
framerate = ticks;
ticks=0;
}
END_OF_FUNCTION(timer1)

 void rest1(void)
{
resting++;
}	


bool animazione_effetto_speciale1=false;
bool animazione_effetto_speciale2=false;
bool animazione_effetto_speciale3=false;
bool animazione_effetto_speciale4=false;
bool difesa_on=false;
bool timer_on=false;
int tempo=0;
int i,j;
int scherm=0;
int turn=0;
int contatore_frames_onda=6;
int tipo_onda_viaggiante;
int velocit;
int caricamento=0;
int flusso_sfondo=0;
time_t t;
int caso;
int caso2;
int contator=0;
int contator2=0;

