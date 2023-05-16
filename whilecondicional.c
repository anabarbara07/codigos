#include<stdio.h>

char r;
float a,b,p;

main(){
r='s';
while((r=='s')||(r=='S')||(r=='sim')||(r=='SIM')){

printf("\nEntre com A: ");
scanf("%f",&a);
printf("\nEntre com B: ");
scanf("%f",&b);

p=a-b;
printf("\nO valor de P e %f",p);
printf("\n\nDeseja continuar? S ou N? ");
scanf("\n%c",&r);

}
}
