int vita_ken=200;
int vita_ryu=0;
bool animazione_Ryu_calcio_pancia=false;
bool animazione_caduta_Ken=false;
bool animazione_pugno_in_faccia=false;
bool animazione_caduta_Ryu=false;
int rosso=0;
int flusso_effetto1=0;
int flusso_effetto2=0;
int flusso_effetto3=0;
int flusso_effetto4=0;
int flusso_effetto0=0;
#define nessuna 0 


/* animazioni ryu usate
animazione_base 0   
tasto_destra_Ryu 1  
tasto_sinistra_Ryu 2  
calcio_frontale 3  
calcio_giro 4  
salto_in_alto_ryu 5  
onda_normale 6  
pugno 7 //i=1 a 5  
frames_onda_normale 7  // i=6 ad 8  
onda_super 8   
frames_onda_super 9   
ryu_incassa_gira 10   
ryu_incassa_in_pancia 11  
/*


/* variabili esterne usate
bool animazione_in_corso_ken;
int x_Ryu=20,y_Ryu=290;
int x_onda_Ryu;
int set_immagini_Ryu;
bool animazione_onda_in_corso;
*/
void contrcoll(){
                    
    // animazione caduta ken
     if(animazione_caduta_Ken==true){ 
                          
						                             
                          animazione_in_corso_ken=true;
                          velocit=30;                        
                          mossa_Ken=22;
                          vita_ken-=1;
                          rosso+=2;// aumenta il rosso della barra barra
                          
                      
                          set_immagini_Ken=3;
                          contatore_frames_Ken+=1;
                          flusso_frames_ken=contatore_frames_Ken;
                                  
                          x_Ken+=11;// sposto ken
                                 
                  
                   // if(contatore_frames_Ken==2){rest(100);}
                   if(contatore_frames_Ken>1 && contatore_frames_Ken<6){
                                                                         y_Ken-=5;
                                                                         }
                  
                   if(contatore_frames_Ken>6 && contatore_frames_Ken<11){
                                                                          y_Ken+=5;
                                                                          }
                                                                          
                  if(contatore_frames_Ken>10){  if(y_Ken<altezza_Ken){
                                                   contatore_frames_Ken=10;
                                                          y_Ken+=13; }
                  }
                  
                   if(contatore_frames_Ken>23){// fine frames caduta
                                             
                                    contatore_frames_Ken=0;
                                    animazione_caduta_Ken=false;
                                    animazione_in_corso_ken=false;
                                    }
                     }
                     // fine caduta ken
                     
        
        
        
        //pugno in faccia a ken
        if(animazione_pugno_in_faccia==true){ 
                                              animazione_in_corso_ken=true;
                                              mossa_Ken=nessuna;// interrompo ciò che ken sta facendo
                                              x_Ken+=5;// sposto ken
                                              vita_ken-=1;
                    // controllo animazione podda
                     set_immagini_Ken=4;
                     contatore_frames_Ken+=1;
                     flusso_frames_ken=contatore_frames_Ken;
                     
                    
                  /*   if(contatore_frames_Ken==2){
                                                 rest(100); }*/
                     if(contatore_frames_Ken>2){
                     contatore_frames_Ken=0;
                     animazione_pugno_in_faccia=false;
                     animazione_in_corso_ken=false;   
                     }
                                               }
                     // fine pugno in faccia a ken
                     
     
     
    
     // animazione calcio giro in faccia a ryu                
if(animazione_caduta_Ryu==true){
                                
                                  permesso_muovimento_laterale=true;// cosi posso sempre riattivare la difesa ossia difesa_on=true
                                  animazione_in_corso_Ryu=true;
                                  mossa_Ryu=20;// per interrompere qualsiasi azione di ryu
                                  vita_ryu+=1;
                                   
                               
                     
                     
                     set_immagini_Ryu=10;
                     contatore_frames_Ryu+=1;
                     flusso_frames_Ryu=contatore_frames_Ryu;
                     
                     if(contatore_frames_Ryu>3){x_Ryu-=5;}
                    
                    velocit=30;
                     if(contatore_frames_Ryu>10){
                                                 contatore_frames_Ryu=0;
                                                 animazione_caduta_Ryu=false;
                                                 animazione_in_corso_Ryu=false;
                                               // animazione_in_corso_Ryu=false;
                                                 }
                                               }//


 if(animazione_Ryu_calcio_pancia==true){ 
                                   
                                 permesso_muovimento_laterale=true;// cosi posso sempre riattivare la difesa ossia difesa_on=true
                                  mossa_Ryu=20;
                                  vita_ryu+=1;
                               // controllo movimenti corretti camera  da fare                 
           
                     
                    // permesso_muovimento_laterale=false;
                     set_immagini_Ryu=11;
                     contatore_frames_Ryu+=1;
                     flusso_frames_Ryu=contatore_frames_Ryu;
                     
                     if(contatore_frames_Ryu<17){x_Ryu-=5;
                                                 }
                    
                    velocit=20;
                     if(contatore_frames_Ryu>19){
                     contatore_frames_Ryu=0;
                     animazione_in_corso_Ryu=false;
                     animazione_Ryu_calcio_pancia=false;
                     }
                                               }
                     
}



void collisione(){
    
      
      
      // mantenimento distanza minima
     if((x_Ken-x_Ryu)<20){ x_Ryu=x_Ken-20;}
     if((x_Ken-x_Ryu)<distanza_minima) {x_Ryu-=9;
      x_Ken+=9;
      }//
      
      
      
      // inizializzazione animazione caduta ken per calcio frontale
if (       mossa_Ryu==calcio_frontale 
       &&  (x_Ken-x_Ryu) <50 
       &&  difesa_on==false
       &&  (contatore_frames_Ryu>=6 && contatore_frames_Ryu<=9) )
                                                                           {
																		   turn=1;// mostro in primo piano il calcio di ryu
                                                                            animazione_caduta_Ken=true;
                                                                            contatore_frames_Ken=0;
                                                                            animazione_sfiammata==false;
                                                                            animazione_effetto_speciale2=true;
                                                                           
                                                                             }
   
//
     
    // collisione ken con l' onda
    if(    x_onda_Ryu>x_Ken+20 
        && animazione_onda_in_corso==true
         && difesa_on==false
        ){
                                 lancio_onda_tipo=nessuna;// perchè se no la funzione muovimento_onde da problemi
                                 x_onda_Ryu=0;// perchè se no è come se l'onda continuasse a viaggiare all'infinito
                                 animazione_onda_in_corso=false;
                                 animazione_caduta_Ken=true;
                                 contatore_frames_onda=6;// non necessario ma per non lasciarlo random fra 6,7,8
                                 contatore_frames_Ken=0;
                                 animazione_effetto_speciale1=true;
                                 animazione_in_corso_ken=true;
                                 
                                 }//
//inizializzazione pugno a ken
if (     mossa_Ryu==pugno 
     && (x_Ken-x_Ryu) <50 
     && difesa_on==false
     && (contatore_frames_Ryu>=2)
     && animazione_caduta_Ken==false
      )
                                         {flusso_effetto2=0;
                                         animazione_pugno_in_faccia=true;
                                         contatore_frames_Ken=0;// azzero cio che kenno fa
                                         animazione_sfiammata=false;
                                         }//
                                         
     
    // inizializzazione   calcio giro su Ryu                                                                                                            
if (     mossa_Ken==6 
      && (x_Ken-x_Ryu) <50 
      && difesa_on==false  
      && contatore_frames_Ken>=2 
      && contatore_frames_Ken<=4
	  && y_Ryu>=altezza_Ryu-50)
                                  {
                                   contatore_frames_Ryu=0;// perchè se lo premo mentre sta buscando in altro modo il
                                                          //il conteggio frames torna sempre 
                                   turn=0;// cioè metto in primo piano il calcio di ken
                                   animazione_caduta_Ryu=true;
                                   animazione_Ryu_calcio_pancia=false;// questo non diventrerebbe false una volta inizializzato finche non 
                                   animazione_effetto_speciale4=true;                                // si completa la sequenza dei frames
                                   stop_sample(c);}                                  

// inizializzazione calcio in pancia a ryu
else if (     mossa_Ken==5 
      && (x_Ken-x_Ryu) <50 
      && difesa_on==false  
      && contatore_frames_Ken>=2 
      && contatore_frames_Ken<=4
	  && y_Ryu>=altezza_Ryu-50)
                                  {
                                   contatore_frames_Ryu=0;// perchè se lo premo mentre sta buscando in altro modo il
                                                          //il conteggio frames torna sempre
                                   turn=0;// cioè metto in primo piano il calcio di ken
                                   animazione_Ryu_calcio_pancia=true;
                                   animazione_caduta_Ryu=false;
                                   animazione_effetto_speciale3=true;
                                   }


if(animazione_sfiammata==false){
	
	flusso_effetto0=0;
}

}



