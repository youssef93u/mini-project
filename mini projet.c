#include <stdio.h>

int main() {
    int i;
float t1,t2,t3,t4,t5,T,M;
printf("entre les notes t1,t2,t3,t4,t5 :");
scanf("%f %f %f %f %f",&t1,&t2,&t3,&t4,&t5);
T=t1+t2+t3+t4+t5;
printf("T=%.2f\n",T);
M=T/5;
printf("M=%.2f\n",M);

if(M>=90) {
    printf("excellent\n");
}
else if(M>=80 && M<=89) {
    printf("tres bien\n");
}
else if(M>=70 && M<=79) {
    printf("bien\n");
}
else if(M>=60 && M<=69) {
    printf("passable\n");
}
else if(M<60) {
    printf("Echec\n");
}
if (M>=50)
{
    printf("réussi\n");
}else if(M<50)
   {
    printf("échoué\n");
   }


return 0;
}
