#include<stdio.h>
#include<math.h>

main(){

float a,b,h,b2,r,d,d2;
int m;

printf("             *Areas*");
printf("\nMenu:\n(1) Triangulo\n");
printf("(2) Trapezio\n");
printf("(3) Circulo\n");
printf("(4) Losango\n");
printf("\n    Opcao: ");
scanf("%d",&m);

switch(m){

case 1:
  printf("\ndigite a altura: ");
  scanf("%f",&h);

  printf("digite a base: ");
  scanf("%f",&b);

  a=b*(h/2);
  printf("\nresultado = %f",a);
  break;

case 2:
    printf("\ndigite a base 1: ");
    scanf("%f",&b);

    printf("digite a base 2: ");
    scanf("%f",&b2);

    printf("digite a altura: ");
    scanf("%f",&h);

    a=(b+b2)*(h/2);
    printf("\nresultado = %f",a);
    break;

case 3:
    printf("\ndigite o raio: ");
    scanf("%f",&r);

    a=3.14*(r*r);
    printf("\nresultado = %f",a);
    break;

case 4:
    printf("\ndigite a diagonal 1: ");
    scanf("%f",&d);

    printf("digite a diagonal 2: ");
    scanf("%f",&d2);

    a=(d*d2)/2;
    printf("\nresultado = %f",a);
    break;





}






}
