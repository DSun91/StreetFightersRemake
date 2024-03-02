//muovimenti camera

/*

*/



void separa(){
     
      
      
 #define al 9
 #define bl 9
 
  //muovimenti camera 
                                            
  if(x_Ken>=limite_destro_schremo){
                                  x_Ken=limite_destro_schremo-1;
                                  scherm+=11;
                                  x_Ryu-=al;
                                  }
  
  if(scherm>corsa)                 {
                                    scherm=corsa;
                                    x_Ryu+=al; 
                                    }
if( mossa_Ryu!=onda_super){  //perchè problemi di dimensione frames                                              
  if(x_Ryu<=(-limite_sinistro_schremo)){
                                       scherm-=11;
                                       x_Ryu=(-limite_sinistro_schremo)+1;
                                       x_Ken+=bl;
                                       } 
}
 
  //perchè problemi di dimensione frames                                              
  if(x_Ken>=(limite_destro_schremo)&&flusso_frames_Ryu<43 && mossa_Ryu==onda_super){
                                       
                                       
                                        x_Ryu-=bl;
                                       
                                       } 

 
 
 
       
                                         
  if(scherm<0)                 {
                                scherm=0;
                                x_Ken-=bl; 
                                } 
                                                                                       

      // portare all' altezza iniziale i personaggi
     if(  (    (key[KEY_LEFT]!=0 || key[KEY_RIGHT]!=0) 
            &&  permesso_muovimento_laterale==true ) 
      &&  (  (key[KEY_L]!=0 || key[KEY_J]!=0)  
            && animazione_in_corso_ken==false)  )
                                                  {
                                                  y_Ryu=altezza_Ryu;
                                                  y_Ken=altezza_Ken;
                                                  }
      //
      else if(  permesso_muovimento_laterale==true && animazione_in_corso_ken==false)
                                                                                     {
                                                                                         y_Ryu=altezza_Ryu;
                                                                                         y_Ken=altezza_Ken; 
                                                                                     }
      // effetto piccolo saltello durante calcio giro di ken
      if(mossa_Ken==6){y_Ken=altezza_Ken;}
      
      
    
      }

