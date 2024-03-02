void avvicina(){
     
        if((x_Ken-x_Ryu)>50){
                             key[KEY_U]=0;
                             key[KEY_L]=0;
                             key[KEY_J]=2;
                           }
     
     }
     

void allontana(){
     
                          key[KEY_U]=0;
                           key[KEY_L]=2;
                          key[KEY_J]=0;
                          
     
     }


void attacca1(){
      if((x_Ken-x_Ryu)<50){
                             key[KEY_U]=2;
                             key[KEY_I]=0;
                             key[KEY_M]=0;
                             key[KEY_O]=0;
                               key[KEY_K]=0;
                           }
    
     }

void attacca2(){
      if((x_Ken-x_Ryu)<50){
                             key[KEY_I]=2;
                             key[KEY_U]=0;
                             key[KEY_M]=0;
                              key[KEY_O]=0;
                                key[KEY_K]=0;
                           }
    
     }

void attacca3(){
      if((x_Ken-x_Ryu)<50){contator+=1;
                             key[KEY_I]=0;
                             key[KEY_U]=0;
                             key[KEY_M]=2;
                             key[KEY_O]=0;
                               key[KEY_K]=0;
                           }
    
     }
     
void attacca4(){
      if((x_Ken-x_Ryu)<50 && animazione_in_corso_ken==false){
                             key[KEY_I]=0;
                             key[KEY_U]=0;
                             key[KEY_M]=0;
                             key[KEY_O]=2;
                               key[KEY_K]=0;
                           }
    
     }
void attacca5(){
      if((x_Ken-x_Ryu)<50){
                             key[KEY_I]=0;
                             key[KEY_U]=0;
                             key[KEY_M]=0;
                             key[KEY_O]=0;
                             key[KEY_K]=2;
                           }
    
     }


void intelligenza(){
  contator2++;   
  contator++;
 
  
    if(contator>80){ srand(time(0));
    contator=0;}
                       
                  
  if (contator2>20)  { caso= (rand() % 2);
                        contator2=0;}
     
     
    if (caso==0){allontana();
   if((x_Ken-x_Ryu)<50){ key[KEY_L]=2;}
   
                             key[KEY_U]=0;
                             key[KEY_I]=0;
                             key[KEY_M]=0;
                             key[KEY_O]=0;
                             key[KEY_K]=0;}
    
    
    else if(caso==1){avvicina();
                     
                     
                      if((x_Ken-x_Ryu)<50){
                     caso2=rand()%5;
    
                     if (caso2==0){attacca1();}
                              else if(caso2==1){attacca2();}
                              else if(caso2==2){attacca3();}
                              else if(caso2==3){attacca4();}
                               else if(caso2==4){attacca5();}
}
    
    }
     
  
     
    if((x_Ken-x_Ryu)>50){
                             key[KEY_U]=0;
                             key[KEY_I]=0;
                             key[KEY_M]=0;
                             key[KEY_O]=0;
                             key[KEY_K]=0;
                           }
     
     
     
     
     }
