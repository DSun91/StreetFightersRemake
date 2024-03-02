// animazioni onde

/*ricordo i valori di define
onda normale 6
onda super 8
*/


//controllo numerico onda viaggiante
void muovimento_onde(){
     
     
 if(lancio_onda_tipo==onda_normale){    
                 
                  if(key[KEY_R]!=0){x_onda_Ryu=0;
                                    lancio_onda_tipo=0;}   
                   contatore_frames_onda+=1;
                      x_onda_Ryu+=passo_onda;
                      
                          if(contatore_frames_onda>8){
                                 contatore_frames_onda=6;
                                 }//
            
              }
  if(lancio_onda_tipo==onda_super){     
                      animazione_onda_in_corso=true;
                      contatore_frames_onda+=1;
                      x_onda_Ryu+=passo_onda;
                      
                     
                          if(contatore_frames_onda>8){
                                contatore_frames_onda=6;
                                 }//
            
              }
// per scongiurare cose strane se c'e un bug
if(x_onda_Ryu>800){x_onda_Ryu=0;
animazione_onda_in_corso=false;
lancio_onda_tipo=22;}



}
