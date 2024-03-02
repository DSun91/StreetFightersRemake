// maccanica ryu


//valori variabile set immagini ryu e mossa_ryu

#define animazione_base 0   // iamge[0][i]
#define tasto_destra_Ryu 1  // iamge[1][i]
#define tasto_sinistra_Ryu 2  // iamge[2][i]
#define calcio_frontale 3  // iamge[3][i]
#define calcio_giro 4  // iamge[4][i]
#define salto_in_alto_ryu 5  // iamge[5][i]
#define onda_normale 6  // iamge[6][i]
#define pugno 7 //i=1 a 5  // iamge[7][i]
#define frames_onda_normale 7// i=6 ad 8   iamge[7][i]
#define onda_super 8  // iamge[8][i]
#define frames_onda_super 9  // iamge[9][i]
#define ryu_incassa_gira 10  // iamge[10][i]
#define ryu_incassa_in_pancia 11  // iamge[11][i]

/*altre variabili
tipo_onda_viaggiante => serve per indicare quale tipo di frames caricare nel stream e si ricollega direttamente al file visualizza.h

*/

// variabili globali ryu
int x_Ryu=20,y_Ryu=320;
int x_onda_Ryu;
int step_calcio_frontale=0;
int step_super_onda=0;
int flusso_frames_Ryu=0;
int set_immagini_Ryu;
int mossa_Ryu=0;
int lancio_onda_tipo;
int contatore_frames_Ryu=0; // controlla il flusso frames durante le mosse
bool animazione_in_corso_Ryu; 
bool permesso_muovimento_laterale=true;
bool animazione_onda_in_corso=false;



void  controlRyu(){      
                    
      //
      if(mossa_Ryu==pugno) {
                   difesa_on=false;
                   velocit=35;
                   set_immagini_Ryu =pugno;
                   contatore_frames_Ryu+=1;
                   flusso_frames_Ryu=contatore_frames_Ryu;
                   
                   if(contatore_frames_Ryu>4){//pugno 5frames
                                    contatore_frames_Ryu=0;
                                    animazione_in_corso_Ryu=false;
                                    mossa_Ryu=animazione_base;
                                    permesso_muovimento_laterale=true;
                                    }
                     }//
                     
      //
      if(mossa_Ryu==salto_in_alto_ryu) {
                   difesa_on=false;
                   velocit=45;
                   set_immagini_Ryu = salto_in_alto_ryu;
                   contatore_frames_Ryu+=1;
                   flusso_frames_Ryu=contatore_frames_Ryu;
                   if(contatore_frames_Ryu>0 && contatore_frames_Ryu<5)
                   {y_Ryu-=20;}
                    if(contatore_frames_Ryu>4 && contatore_frames_Ryu<8)
                   {y_Ryu-=10;}
                   if(contatore_frames_Ryu>=8)
                   {y_Ryu+=21;}
                   if(contatore_frames_Ryu>11){//pugno 5frames
                                    contatore_frames_Ryu=0;
                                    animazione_in_corso_Ryu=false;
                                    mossa_Ryu=animazione_base;
                                    permesso_muovimento_laterale=true;
                                    }
                     }//
         
       //
      else if(mossa_Ryu==calcio_giro) {
                   difesa_on=false;
                   velocit=35;
                   set_immagini_Ryu = calcio_giro;
                
                   contatore_frames_Ryu+=1;
                   flusso_frames_Ryu=contatore_frames_Ryu;
                   if(contatore_frames_Ryu>12){//calcio 13frames
                                    contatore_frames_Ryu=0;
                                    animazione_in_corso_Ryu=false;
                                    mossa_Ryu=animazione_base;
                                    permesso_muovimento_laterale=true;
                                    
                                    }
                     }//
                     
    else if(mossa_Ryu==calcio_frontale) {
                   difesa_on=false;
                   velocit=30;
                   x_Ryu+=7;
                   
                   set_immagini_Ryu = calcio_frontale;
                   contatore_frames_Ryu+=1;
                   flusso_frames_Ryu=contatore_frames_Ryu;
                   if(contatore_frames_Ryu==9){/*rest(100);*/}
                   if(contatore_frames_Ryu>15){//calcio frontale 13frames
                                    contatore_frames_Ryu=0;
                                     animazione_in_corso_Ryu=false;
                                     mossa_Ryu=animazione_base;
                                     step_calcio_frontale=0; 
                                     
                                    }
                     }//

   else if(mossa_Ryu==onda_normale) {
                    
                  
                      difesa_on=false;
                      set_immagini_Ryu = onda_normale;
                      contatore_frames_Ryu+=1;
                      flusso_frames_Ryu=contatore_frames_Ryu;
                      
                   
                   if(contatore_frames_Ryu==10){
                            /* rest(200);*///inizia la palla
                             animazione_onda_in_corso=true;
                             lancio_onda_tipo=onda_normale;
                             tipo_onda_viaggiante=frames_onda_normale;
                             x_onda_Ryu=x_Ryu+150;  
                                  }
                   if(contatore_frames_Ryu>14){//atac 15frames
                                    contatore_frames_Ryu=0;
                                    animazione_in_corso_Ryu=false;
                                    mossa_Ryu=animazione_base;
                                    permesso_muovimento_laterale=true;
                                    }
                     }//
 
  else if(mossa_Ryu==onda_super) {
                       difesa_on=false;
                      set_immagini_Ryu = onda_super;
                      contatore_frames_Ryu+=1;
                      flusso_frames_Ryu=contatore_frames_Ryu;
                      
                      if(contatore_frames_Ryu>=3){velocit=30;}
                      if(contatore_frames_Ryu==3){
                                                  y_Ryu=altezza_Ryu-95;
                                                  x_Ryu=x_Ryu-120;
                                                }//poichè le dimensioni frames sono strane devo ricentrarle
                      if(contatore_frames_Ryu==33){
                                                   y_Ryu=altezza_Ryu;
                                                   x_Ryu=x_Ryu+90;
                                                   }// rialzo immagine
                      
                      if(contatore_frames_Ryu==38){// inizia palla
                                                   /*rest(100);*/
                                                    animazione_onda_in_corso=true;
                                                   lancio_onda_tipo=onda_super;
                                                   tipo_onda_viaggiante=frames_onda_super;
                                                   x_onda_Ryu=x_Ryu;  
                                                  }
                       if(contatore_frames_Ryu>41){
                                                   contatore_frames_Ryu=0;
                                                   animazione_in_corso_Ryu=false;
                                                   mossa_Ryu=animazione_base;
                                                   y_Ryu=altezza_Ryu;
                                                   permesso_muovimento_laterale=true;
                                                   step_super_onda=0;
                                               }
                                    }//
 
 
 

 
          
                     
                                       
}//fine attach


void mosseRyu(){   
            
                                        
           if( animazione_in_corso_Ryu==false && (R1||key[KEY_A]) && animazione_onda_in_corso==false && step_super_onda!=3 ){                  //special
                                              
                                              animazione_in_corso_Ryu=true;
                                              mossa_Ryu=onda_normale;
                                              permesso_muovimento_laterale=false;
                                              play_sample(c,255,128,1000,false);
                                              
       	                                     
                                               
                                      }
            
             if(animazione_in_corso_Ryu==false && (tasto_triangolo||key[KEY_W])){                              //calcio giro
            
                                                 animazione_in_corso_Ryu=true;
                                                 mossa_Ryu=calcio_giro;
                                                 permesso_muovimento_laterale=false;
                                             
                                                play_sample(a,255,128,1000,false);
                                                
                                                }
            
            //onda super
      
              if((sinistra||key[KEY_LEFT])&& step_super_onda==0){
                                                          step_super_onda=1;
                                                          timer_on=true;// inizia il cronometraggio
                                                          }
                  
              if((giu||key[KEY_DOWN]) && step_super_onda==1){
                                                         step_super_onda=2;
                                                             }
                  
              if((destra||key[KEY_RIGHT]) && step_super_onda==2){
                                                                                    step_super_onda=3;
                                                                                    }
              if(    step_super_onda==3 
                  && (R1||key[KEY_A])
                  && animazione_in_corso_Ryu==false 
                  && animazione_onda_in_corso==false 
                  && tempo<intervallo_tempo )
                                             {  
                                                
                                                animazione_in_corso_Ryu=true;
                                                mossa_Ryu=onda_super;
                                                permesso_muovimento_laterale=false;
                                                play_sample(d,255,128,1000,false);
                                             }  //    
               
               
               
               
               
               
               
                   if( animazione_in_corso_Ryu==false && (tasto_x||key[KEY_S]) ){                              //pugno
                                                 animazione_in_corso_Ryu=true;
                                                  permesso_muovimento_laterale=false;
                                                  mossa_Ryu=pugno;
                                                  play_sample(e,250,128,1000,false);
                                                                         }   
                   
                   
                   
                   
                   if( animazione_in_corso_Ryu==false && (su||key[KEY_UP]) ){                              //salto
                                                  animazione_in_corso_Ryu=true;
                                                  permesso_muovimento_laterale=false;
                                                  mossa_Ryu=salto_in_alto_ryu;
                                                  play_sample(e,250,128,1000,false);
                                                                           }       
                 
                 
                 // calcio frontale
                  if((destra||key[KEY_RIGHT]) && step_calcio_frontale==0){
                                                                   step_calcio_frontale=1;
                                                                   timer_on=true;
                                                                   }
                  
                  if((!destra && key[KEY_RIGHT]==0) && step_calcio_frontale==1){
                                                                   step_calcio_frontale=2;
                                                                    }
                  
                  if((destra||key[KEY_RIGHT]) &&step_calcio_frontale==2){
                                                                  step_calcio_frontale=3;
                                                                  }
                  if(    step_calcio_frontale==3 
                      && (tasto_tondo||key[KEY_D])
                      && animazione_in_corso_Ryu==false
                      && tempo<intervallo_tempo )
                                                {  
                                                   animazione_in_corso_Ryu=true;
                                                   mossa_Ryu=calcio_frontale;
                                                   play_sample(b,250,128,1000,false);
                                                
                                                }      
                                                    
            
            
            
            
            
            
            
            
            if((destra||key[KEY_RIGHT]) && permesso_muovimento_laterale==true){//destra
                                                                      difesa_on=false;
                                                                      if(flusso_frames_Ryu>10)flusso_frames_Ryu=0; 
                                                                      set_immagini_Ryu=tasto_destra_Ryu;
                                                                      x_Ryu+=9;
                                                                      velocit=40;     
                                                                            }

                 
                                                        
                                                        
              
              
              if((sinistra||key[KEY_LEFT]) &&  permesso_muovimento_laterale==true){//sinistra
                                                         difesa_on=true;
                                                        if(flusso_frames_Ryu>10)flusso_frames_Ryu=0;          
                                                        set_immagini_Ryu=tasto_sinistra_Ryu;
                                                        x_Ryu-=9; 
                                                        velocit=40;
                                                          }  
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
              }
                             
                                                          
                                                         
                                                            
                                                          
                                                                                                                              

void animaz_base_Ryu() {                                                    // animazione di base e continuo per entrambi gli atleti      
               if(!sinistra && key[KEY_LEFT]==0 && !destra && key[KEY_RIGHT]==0 && animazione_in_corso_Ryu==false)
                                                                     { 
                                                                      difesa_on=false;
                                                                      set_immagini_Ryu = animazione_base;
                                                                      velocit=40;
                                                                      mossa_Ryu=animazione_base;
                                                                      if(flusso_frames_Ryu>7){flusso_frames_Ryu=0;}
              
                                                                       }
             
             }
                                          
            
 

    
                 



                 
            


 
   
                                                                   
                                                                   
                                                               
     
  
   

               

