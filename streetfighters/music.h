
//MIDI *sound;
SAMPLE *a,*b,*c,*d,*e,*sound;


void musica(){
install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, "A");
set_volume(255,100);
sound=load_wav("musica\\lo.wav");
c=load_wav("musica\\had.wav");
a=load_wav("musica\\cal.wav");
b=load_wav("musica\\cal2.wav");
d=load_wav("musica\\shinku.wav");
e=load_wav("musica\\pu3.wav");

play_sample(sound,255,128,1000,false);
 
}
