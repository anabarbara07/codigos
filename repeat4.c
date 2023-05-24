#include<stdio.h>

main(){

char nome;
float shop,bonus;
int cont=0;

while(cont<=15)

     {printf("\n\nentre com a inicial do nome: ");
     scanf("\n%c",&nome);
     printf("entre com o valor total de compras no ano: ");
     scanf("%f",&shop);


     if(shop<1000)

     bonus=shop*0.1;

     else if

     (bonus=shop*0.15);

     printf("o bonus sera de %f",bonus);

     cont=cont+1;

     }




}
