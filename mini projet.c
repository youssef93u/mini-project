#include <stdio.h>

int main() {
    int i;
float T,M;
float notes[5];
float note_haute,note_basse;
for(i=0;i<5;i++){
    printf(" notes[%d] :",i);
    scanf("%f",&notes[i]);
}
T=0;
for(i=0;i<5;i++){
    T = T + notes[i];
}
printf(" total des notes %.2f:\n",T);
M = T/5;
 printf(" la moyenne %.2f:\n",M);
 note_haute = notes[0];
 for(i=0;i<5;i++){
     if(note_haute<notes[i])
  note_haute = notes[i];  
}
  printf("la note_haute %f :\n",note_haute);
   note_basse = notes[0];
 for(i=0;i<5;i++){
     if(note_basse>notes[i])
  note_basse = notes[i];  
}
  printf("la note_basse %f :\n",note_basse);
if(T>=90) {
    printf("excellent\n");
}
else if(T>=80 && T<=89) {
    printf("tres bien\n");
}
else if(T>=70 && T<=79) {
    printf("bien \n");
}
else if(T>=60 && T<=69) {
    printf("passable \n");
}
else if(T<60) {
    printf("Echec \n");
}

if(M>=50){
    printf("l étudiant a réussi \n");
}else{
    printf("l étudiant a échoué\n");
}



return 0;
}
