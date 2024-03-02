//double buffering
int spostamento=120;
/*int flusso_effetto1=0;
int flusso_effetto2=0;
int flusso_effetto3=0;
int flusso_effetto4=0;
int flusso_effetto0=0;*/
void ambiente(){
                      
       // animazione sfondo          
       flusso_sfondo+=1;  
        if(mossa_Ryu==onda_super) 
        clear_to_color(buffer_doppio_buffering,makecol(110,0,0));
                                         
       else blit(sfondo[flusso_sfondo],buffer_doppio_buffering,scherm,0,0,13,buffer_doppio_buffering->w,buffer_doppio_buffering->h);
        if(flusso_sfondo>46){flusso_sfondo=0;} 
        //           
                   set_trans_blender(0, 0, 0, 80);
                    draw_trans_sprite(buffer_doppio_buffering,ombra,x_Ryu+105,y_Ryu+150);   
					
		     
              // disegno i personaggi sullo schermo        
              if(turn==0){   
                           
                       draw_sprite( buffer_doppio_buffering, image[set_immagini_Ken][flusso_frames_ken], x_Ken,y_Ken);//canale ken 
                       draw_sprite(buffer_doppio_buffering, images[set_immagini_Ryu][flusso_frames_Ryu], x_Ryu,y_Ryu);//canale Ryu
                                            }
                       
              if(turn==1){    
                       
                       draw_sprite(buffer_doppio_buffering,images[set_immagini_Ryu][flusso_frames_Ryu], x_Ryu,y_Ryu);//ryu in buff 
                       draw_sprite(buffer_doppio_buffering,image[set_immagini_Ken][flusso_frames_ken], x_Ken,y_Ken);//avv in buf 
                      
                                               }
               //
                
                // canale effetti speciali ken sfiammata ken     
               if(animazione_sfiammata==true){
                                                  flusso_effetto0+=1;
                                                  draw_sprite( buffer_doppio_buffering, effetti_speciali[0][flusso_effetto0], x_Ken,y_Ken);
                                                  if(flusso_effetto0>12){animazione_sfiammata=false;
                                                                           flusso_effetto0=0;}}
                  //         
                if(animazione_effetto_speciale1==true){                animazione_effetto_speciale2=false;
                                                                       animazione_effetto_speciale3=false;
                                                                       animazione_effetto_speciale4=false;
                                                                       flusso_effetto1+=1;
                                                  draw_sprite( buffer_doppio_buffering, effetti_speciali[1][flusso_effetto1], x_Ken-45,y_Ken-170);
                                                  if(flusso_effetto1>9){
                                                                       animazione_effetto_speciale1=false;
                                                                       
                                                                           flusso_effetto1=0;}}  
              if(animazione_effetto_speciale2==true){
                                                      animazione_effetto_speciale1=false;
                                                      animazione_effetto_speciale3=false;
                                                      animazione_effetto_speciale4=false;
                                                     flusso_effetto2+=1;
                                                  draw_sprite( buffer_doppio_buffering, effetti_speciali[2][flusso_effetto2], x_Ken-185,y_Ken-185);
                                                  if(flusso_effetto2>9){animazione_effetto_speciale2=false;
                                                                           flusso_effetto2=0;}} 
              if(animazione_effetto_speciale3==true){ 
                                                      animazione_effetto_speciale1=false;
                                                      animazione_effetto_speciale2=false;
                                                      animazione_effetto_speciale4=false;
                                                     
                                                     flusso_effetto3+=1;
                                                  draw_sprite( buffer_doppio_buffering, effetti_speciali[2][flusso_effetto3], x_Ryu-225,y_Ryu-185);
                                                  if(flusso_effetto3>9){animazione_effetto_speciale3=false;
                                                                           flusso_effetto3=0;}}   
               if(animazione_effetto_speciale4==true){
                                                      animazione_effetto_speciale1=false;
                                                      animazione_effetto_speciale2=false;
                                                      animazione_effetto_speciale3=false;
                                                      
                                                      flusso_effetto4+=1;
                                                  draw_sprite( buffer_doppio_buffering, effetti_speciali[2][flusso_effetto4], x_Ryu-235,y_Ryu-215);
                                                  if(flusso_effetto4>9){animazione_effetto_speciale4=false;
                                                                           flusso_effetto4=0;}}  
        
        // canali onde viaggianti
       
            if(lancio_onda_tipo==onda_normale || lancio_onda_tipo==onda_super){  
                                    draw_sprite( buffer_doppio_buffering, images[tipo_onda_viaggiante][contatore_frames_onda], x_onda_Ryu, y_Ryu);
                                    }
              
      // disego le pseudo barre vitali
                      	rectfill(buffer_doppio_buffering,0,40,640,190-spostamento,makecol(28,28,70));// barra sotto faccine
                        int colo=makecol(0,0,0);
						rectfill(buffer_doppio_buffering,46,136-spostamento+25,254,140-spostamento+25,colo);
                        rectfill(buffer_doppio_buffering,250,140-spostamento+25,254,164-spostamento+25,colo);
                        rectfill(buffer_doppio_buffering,254,164-spostamento+25,46,160-spostamento+25,colo);
                        rectfill(buffer_doppio_buffering,46,160-spostamento+25,50,136-spostamento+25,colo);
                        
						
						rectfill(buffer_doppio_buffering,356+10,156-spostamento+5,564+10,160-spostamento+5,colo);
                        rectfill(buffer_doppio_buffering,560+10,160-spostamento+5,564+10,184-spostamento+5,colo);
                        rectfill(buffer_doppio_buffering,564+10,184-spostamento+5,356+10,180-spostamento+5,colo);
                        rectfill(buffer_doppio_buffering,356+10,180-spostamento+5,360+10,156-spostamento+5,colo);
                        
					// barra ryu
						  rectfill(buffer_doppio_buffering,50+vita_ryu,45,250,65,makecol(0,255,0));
                        
                        
                        if(vita_ken>5){
                        rectfill(buffer_doppio_buffering,360+10,140-spostamento+25,360+vita_ken+10,160-spostamento+25,makecol(rosso+55,vita_ken+55,0));}
                        else{rectfill(buffer_doppio_buffering,360+10,140-spostamento+25,360+10,160-spostamento+25,makecol(0,0,0));
                        vita_ken=0;}
                      
                      if(vita_ryu<200){
                          rectfill(buffer_doppio_buffering,50+vita_ryu,45,250,65,makecol(0,255,0));}
                        else{ rectfill(buffer_doppio_buffering,50+vita_ryu,45,250,65,makecol(0,0,0));
                        vita_ryu=200;}
                      
                      
                      
                      
					  
					   draw_sprite( buffer_doppio_buffering, faccina, 580,125-spostamento+22);
                       draw_sprite( buffer_doppio_buffering, faccia_Ryu, 5,125-spostamento+25);

                         rectfill(buffer_doppio_buffering,0,349,buffer_doppio_buffering->w,480,makecol(70,0,20));
                       
//    visualizza tutte le variabili          
textprintf_ex(buffer_doppio_buffering, font, 40,360 , makecol(25, 225, 155),-1, "X_Ryu: %d", x_Ryu+115);

textprintf_ex(buffer_doppio_buffering, font, 270,170-spostamento , makecol(0, 225, 155),-1, "time: %d", counter);

textprintf_ex(buffer_doppio_buffering, font, 40,370 , makecol(25, 225, 155),-1, "Y_Ryu: %d",y_Ryu);
                     
textprintf_ex(buffer_doppio_buffering, font, 40,380 , makecol(25, 225, 155),-1, "Flusso_frames_Ryu: %d", flusso_frames_Ryu);
                     
textprintf_ex(buffer_doppio_buffering, font, 40,390 , makecol(25, 225, 155),-1, "Contatore_frames_Ryu: %d",contatore_frames_Ryu);

textprintf_ex(buffer_doppio_buffering, font, 40,400 , makecol(25, 225, 155),-1, "fasi_calcio_frontale: %d", step_calcio_frontale );

textprintf_ex(buffer_doppio_buffering, font, 40,410 , makecol(25, 225, 155),-1, "fasi_super_onda: %d", step_super_onda );

textprintf_ex(buffer_doppio_buffering, font, 40,430 , makecol(25, 225, 155),-1, "Contatore_frames_onda: %d", contatore_frames_onda-6);

textprintf_ex(buffer_doppio_buffering, font, 40,440 , makecol(25, 225, 155),-1, "frames_per_second: %dfps", framerate);         

textprintf_ex(buffer_doppio_buffering, font, 40,450 , makecol(25, 225, 155),-1, "contatore_frames_fiamma: %d", flusso_effetto0 );                     

textprintf_ex(buffer_doppio_buffering, font, 300,360 , makecol(25, 225, 155),-1, "X_Ken: %d", x_Ken);

textprintf_ex(buffer_doppio_buffering, font, 300,370 , makecol(25, 225, 155),-1, "Y_Ken: %d", y_Ken);
                     
textprintf_ex(buffer_doppio_buffering, font, 300,380 , makecol(25, 225, 155),-1, "Flusso_frames_Ken: %d", flusso_frames_ken);
                     
textprintf_ex(buffer_doppio_buffering, font, 300,390 , makecol(25, 225, 155),-1, "Contatore_frames_Ken: %d",contatore_frames_Ken);

textprintf_ex(buffer_doppio_buffering, font, 300,400 , makecol(25, 225, 155),-1, "timer_scadenza_mosse_speciali: %d",tempo);

textprintf_ex(buffer_doppio_buffering, font, 300,410 , makecol(25, 225, 155),-1, "scherm: %d",scherm);

textprintf_ex(buffer_doppio_buffering, font, 300,430 , makecol(25, 225, 155),-1, "random_avanti_indietro: %d",caso);

textprintf_ex(buffer_doppio_buffering, font, 300,440 , makecol(25, 225, 155),-1, "random_mossa_CP: %d",caso2);

textprintf_ex(buffer_doppio_buffering, font, 300,450 , makecol(25, 225, 155),-1, "timer_nuova_seed: %d",contator);
                    





                    
                    
                  
                    
                    
                    draw_sprite(screen,buffer_doppio_buffering,0,0);

                            
                               }
