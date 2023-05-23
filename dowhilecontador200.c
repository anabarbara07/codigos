#include<stdio.h>

main(){

int cont=100,soma=0;

do{

  if(cont%2==0);
    soma=soma+cont;
    cont=cont+1;

}while(cont<=200);
 printf("\n A soma dos numeros pares de 100 ate 200 e %d",soma);

}
