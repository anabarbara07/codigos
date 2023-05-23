#include<stdio.h>

main(){
int num,cont=0,cont2=0;

while(cont<10){

printf("digite um numero: ");
scanf("%d",&num);

if((num>30)&&(num<90))
   cont2=cont2+1;

   cont=cont+1;

}
  printf("\n a quantidade de numeros entre 30 e 90 e %d",cont2);
}
