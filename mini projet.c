#include <stdio.h>

int main() {
    int i;
float t1,t2,t3,t4,t5,T,M;
float notes[5]={t1,t2,t3,t4,t5},note_haute,note_basse;
printf("entre les notes t1,t2,t3,t4,t5 :");
scanf("%f %f %f %f %f",&t1,&t2,&t3,&t4,&t5);
T=t1+t2+t3+t4+t5;
printf("T=%.2f\n",T);
M=T/5;
printf("M=%.2f\n",M);

 
if(T>=90) {
    printf("excellent");
}
else if(T>=80 && T<=89) {
    printf("tres bien");
}
else if(T>=70 && T<=79) {
    printf("bien");
}
else if(T>=60 && T<=69) {
    printf("passable");
}
else if(T<60) {
    printf("Echec");
}



return 0;
}
