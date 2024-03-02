//  mosse ken

int flusso_frames_ken=0;
int set_immagini_Ken;
int contatore_frames_Ken=0;
int mossa_Ken;
bool animazione_in_corso_ken=false;
bool animazione_sfiammata=false;
int x_Ken=300, y_Ken=290;



void  controlKen(){
      
      if(mossa_Ken==5) {
                   difesa_on=false;
                   velocit=40;
                   set_immagini_Ken = 5;
                   contatore_frames_Ken+=1;
                   flusso_frames_ken=contatore_frames_Ken;
                   
                   
                  if(contatore_frames_Ken<5)
                    {x_Ken-=15;}
                   /* if(contatore_frames_Ken==5)
                    {rest(100);}*/
                   if(contatore_frames_Ken>10){//pugno 5frames
                                   
                                     mossa_Ken=0;
                                    contatore_frames_Ken=0;
                                    animazione_in_corso_ken=false;
                                    }
                     }
    else if(mossa_Ken==6) {
                   difesa_on=false;
                   velocit=40;
                   set_immagini_Ken = 6;
                   contatore_frames_Ken+=1;
                   flusso_frames_ken=contatore_frames_Ken;
                   
                   x_Ken-=7;
                  if( contatore_frames_Ken<=2){y_Ken-=11;}
                  if( contatore_frames_Ken>2){y_Ken+=1;}
                 /* if(contatore_frames_Ken==2)
                    {
                                             rest(100);}*/
                   if(contatore_frames_Ken>6){//pugno 5frames
                                   
                                   
                                   
                                    mossa_Ken=0;
                                    contatore_frames_Ken=0;
                                    animazione_in_corso_ken=false;
                                    }
                     }



//mossa sfiammata
 else if(mossa_Ken==7) {
                  
                  
                  difesa_on=false;
                   velocit=40;
                   set_immagini_Ken = 7;
                   contatore_frames_Ken+=1;
                   flusso_frames_ken=contatore_frames_Ken;
                   
                  
                  
                  
                 /* if(contatore_frames_Ken==4)
                    {rest(100);}*/
                    if(contatore_frames_Ken>=6 &&  contatore_frames_Ken<=7)
                     
                    {y_Ken-=40;}
                     if(contatore_frames_Ken>11){y_Ken+=27;}
                   if(contatore_frames_Ken>13){
                                   
                                 
                                    mossa_Ken=0;
                                    contatore_frames_Ken=0;
                                    animazione_in_corso_ken=false;
                                    }
                     }                        
                     //
                     
//mossa pugno
else if(mossa_Ken==8) {
                   difesa_on=false;
                   velocit=35;
                   set_immagini_Ken = 8;
                   contatore_frames_Ken+=1;
                   flusso_frames_ken=contatore_frames_Ken;
                   
                
                   if(contatore_frames_Ken>4){
                                   
                                   mossa_Ken=0;
                                    contatore_frames_Ken=0;
                                    animazione_in_corso_ken=false;
                                    }
                     }
                     
    // mossa pugno pesante
    else  if(mossa_Ken==9) {
                   difesa_on=false;
                   velocit=35;
                   set_immagini_Ken = 9;
                   contatore_frames_Ken+=1;
                   flusso_frames_ken=contatore_frames_Ken;
                   
                 if(contatore_frames_Ken>8 && contatore_frames_Ken<15){
                                                                       x_Ken-=15;
                                                                       }
                /*  if(contatore_frames_Ken==15){
                                               rest(80);
                                              }*/
                 /*  if(contatore_frames_Ken==9){
                                               rest(80);
                                               }*/
                   if(contatore_frames_Ken>17){
                                   
                                    contatore_frames_Ken=0;
                                    animazione_in_corso_ken=false;
                                    mossa_Ken=0;
                                    
                                       
                                    
                                    }
                     }
                               
                     
                     
                     }









void mosseken(){
     //calcio ibraimovic
     if(   key[KEY_I]!=0 &&  animazione_in_corso_ken==false){                  //special
                                              
                                              
                                              animazione_in_corso_ken=true;
                                              mossa_Ken=5;
                                              }
     
     // calcio giro
    else if( key[KEY_U]!=0 &&  animazione_in_corso_ken==false){                  //special
                                              
                                              
                                              animazione_in_corso_ken=true;
                                              mossa_Ken=6;
                                                           }
     //pugnetta
     else   if( key[KEY_K]!=0 &&  animazione_in_corso_ken==false){                  //special
                                              
                                              
                                              animazione_in_corso_ken=true;
                                              mossa_Ken=8;
                                                           }
        //pugnettona
      else   if(key[KEY_M]!=0 &&  animazione_in_corso_ken==false){                  //special
                                              
                                              
                                              animazione_in_corso_ken=true;
                                              mossa_Ken=9;
                                                           }
          //sfiamma la sbonga                                                 
      else   if( key[KEY_O]!=0 &&  animazione_in_corso_ken==false){                  //special
                                              
                                              animazione_sfiammata=true;
                                              animazione_in_corso_ken=true;
                                              mossa_Ken=7;
                                              }
           
           
           ////sinistra
             if(key[KEY_J]!=0 && animazione_in_corso_ken==false){
                  difesa_on=false;
                                                                 if(flusso_frames_ken>10) {flusso_frames_ken=0;}
                                                                                            set_immagini_Ken=1;
                                                                                            x_Ken-=9;
                                                                                            velocit=40;     
                                   }//
             
              ////destra 11frames
             if(key[KEY_L]!=0  && animazione_in_corso_ken==false){
                                                                     difesa_on=true;
                                 if(flusso_frames_ken>10) flusso_frames_ken=1;          
                                                           set_immagini_Ken=2;
                                                           x_Ken+=9;
                                                           velocit=40;     
                                   }//
            
           
           }//fine mooseken




// animazione base
 void  animaz_base_Ken(){
       
       
        
        if(key[KEY_J]==0 && key[KEY_L]==0 && animazione_in_corso_ken==false){ 
             
             mossa_Ken=0;
             set_immagini_Ken=0;
             velocit=40; 
             if(flusso_frames_ken>7){flusso_frames_ken=0;}
               }
}
