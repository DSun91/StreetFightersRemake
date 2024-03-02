BITMAP* images[14][46];
BITMAP* buffer_doppio_buffering;
BITMAP* sfondo[50];
BITMAP* image[14][40];
BITMAP* ombra;
char *filename;
char testo[60];
BITMAP *wall_paper;
BITMAP *faccina;
BITMAP *faccia_Ryu;
BITMAP* effetti_speciali[10][40];
int spo=120;




void caric(){// base
              for(i=1;i<9;++i){  
                               sprintf (testo, "immryu\\%d.bmp",i);
                               filename=testo;
                               images[0][i]= load_bitmap(filename, NULL);
                              caricamento+=1; 
                               textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading..",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70));}
    
   // campo
   ombra=load_png("m.png",NULL);
   for(i=1;i<49;++i){  
                               sprintf (testo, "sfondi\\background (%d).bmp",i);
                               filename=testo;
                               sfondo[i]= load_bitmap(filename, NULL);
                               caricamento+=1; 
                               textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading..",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70));
                               }
   
  // sfondo[10]=load_bitmap("parte da sostituire.bmp",NULL);
    
    faccina=load_bitmap("ken\\ken_.bmp",NULL);
    faccia_Ryu=load_bitmap("immryu\\faccia_ryu.bmp",NULL);
    //avanti
 
 for(i=1;i<12;i++){  
                    sprintf (testo, "immryu\\av%d.bmp",i);
                    filename=testo;
                    images[1][i]= load_bitmap(filename, NULL);
                   caricamento+=1;  
                   textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); }
 


           //onda normale
           for(i=1;i<16;i++){  
                    sprintf (testo, "immryu\\at%d.bmp",i);
                    filename=testo;
                    images[6][i]= load_bitmap(filename, NULL);
                    caricamento+=1; 
                               textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70));}           
                    
 //indietro
  for(i=1;i<12;i++){  
                             sprintf (testo, "immryu\\in%d.bmp",i);
                             filename=testo;
                             images[2][i]= load_bitmap(filename, NULL);
                                                                                        caricamento+=1; 
                                textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70));      } 
  //calcio front
   for(i=1;i<17;i++){  
                    sprintf (testo, "immryu\\cal%db.bmp",i);
                    filename=testo;
                    images[3][i]= load_bitmap(filename, NULL);
                   caricamento+=1; 
                                textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); }

    
    //pugno
  for(i=1;i<6;i++){  
                    sprintf (testo, "immryu\\pu%d.bmp",i);
                    filename=testo;
                    images[7][i]= load_bitmap(filename, NULL);
                    caricamento+=1; 
                                textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); } 
    
//calcio giro
  for(i=1;i<14;i++){  
                    sprintf (testo, "immryu\\cal%da.bmp",i);
                    filename=testo;
                    images[4][i]= load_bitmap(filename, NULL);
                    caricamento+=1; 
                                textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); } 
    //palla
    for(i=6;i<9;i++){  
                    sprintf (testo, "immryu\\sfera%d.bmp",i);
                    filename=testo;
                    images[7][i]= load_bitmap(filename, NULL);
                    caricamento+=1; 
                               textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); } 
   
         // super attac
         
    for(i=1;i<43;i++){  
                    sprintf (testo, "immryu\\k%d.bmp",i);
                    filename=testo;
                    images[8][i]= load_bitmap(filename, NULL);
                   caricamento+=1; 
                                textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                               rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70));  } 
    
    
    //palla2
    for(i=6;i<9;i++){  
                    sprintf (testo, "immryu\\sferas%d.bmp",i);
                    filename=testo;
                    images[9][i]= load_bitmap(filename, NULL);
                   caricamento+=1; 
                                textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70));  } 
   
   
   for(i=1;i<13;i++){  
                    sprintf (testo, "immryu\\salto_normale%d.bmp",i);
                    filename=testo;
                    images[5][i]= load_bitmap(filename, NULL);
                   caricamento+=1; 
                                textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70));  } 
  
   //ryu incassa
              for(i=1;i<19;i++){  
                    sprintf (testo, "immryu\\riy_subisce_e_si_gira (%d).bmp",i);
                    filename=testo;
                    images[10][i]= load_bmp(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
                for(i=1;i<22;i++){  
                    sprintf (testo, "immryu\\ryu_calcio_in_panc (%d).bmp",i);
                    filename=testo;
                    images[11][i]= load_bmp(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
  
  
  
   //effetto
/*   for(i=1;i<9;i++){  
                    sprintf (testo, "immryu\\%dc.bmp",i);
                    filename=testo;
                    images[10][i]= load_bitmap(filename, NULL);
                    } 
    */
    
    
    
    //ken base
    for(i=1;i<10;i++){  
                    sprintf (testo, "ken\\%d.png",i);
                    filename=testo;
                    image[0][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
   
    
        //ken avanti
    for(i=1;i<12;i++){  
                    sprintf (testo, "ken\\a%d.bmp",i);
                    filename=testo;
                    caricamento+=1; 
                    image[1][i]= load_bitmap(filename, NULL);
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
    
    
    //ken indietro
     for(i=1;i<12;i++){  
                    sprintf (testo, "ken\\i%d.bmp",i);
                    filename=testo;
                    image[2][i]= load_bitmap(filename, NULL);
                     caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    }
   //ken cade forte
      for(i=1;i<26;i++){  
                    sprintf (testo, "ken\\m%d.png",i);
                    filename=testo;
                    image[3][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
    //ken subisceun pugnetto
     for(i=1;i<5;i++){  
                    sprintf (testo, "ken\\ken_subisce_pugno_leggero%d.bmp",i);
                    filename=testo;
                    image[4][i]= load_bitmap(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
     //ken calcio giro
      for(i=1;i<12;i++){  
                    sprintf (testo, "ken\\ken_cal2 (%d).png",i);
                    filename=testo;
                    image[5][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
        for(i=1;i<8;i++){  
                    sprintf (testo, "ken\\ken_cal1 (%d).png",i);
                    filename=testo;
                    image[6][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
         for(i=1;i<15;i++){  
                    sprintf (testo, "ken\\ken_pugno_in_alto (%d).png",i);
                    filename=testo;
                    image[7][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
         
            for(i=1;i<6;i++){  
                    sprintf (testo, "ken\\ken_pugnetto (%d).png",i);
                    filename=testo;
                    image[8][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
                    
              for(i=1;i<19;i++){  
                    sprintf (testo, "ken\\ken_pugno_pesante (%d).png",i);
                    filename=testo;
                    image[9][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
                    
                 //effetti
          for(i=1;i<14;i++){  
                    sprintf (testo, "effetti speciali\\ken_fire_sparks (%d).png",i);
                    filename=testo;
                    effetti_speciali[0][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
              for(i=1;i<11;i++){  
                    sprintf (testo, "effetti speciali\\effetto (%d).png",i);
                    filename=testo;
                    effetti_speciali[1][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
               for(i=1;i<11;i++){  
                    sprintf (testo, "effetti speciali\\effetto_pugno (%d).png",i);
                    filename=testo;
                    effetti_speciali[2][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
                for(i=1;i<11;i++){  
                    sprintf (testo, "effetti speciali\\pugnetto (%d).png",i);
                    filename=testo;
                    effetti_speciali[3][i]= load_png(filename, NULL);
                    caricamento+=1; 
                     textprintf_ex(screen, font,200,400 , makecol(25, 225, 155),-1, "loading...",caricamento);
                                 rectfill(screen,spo,410,spo+caricamento,420,makecol(70,70,70)); 
                    } 
             
            
}
