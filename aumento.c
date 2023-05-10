/*lista switch numero 2*/


#include<stdio.h>

main(){

int pv,pn,a;

printf("PRECO ANTIGO ->\n1 - ate 50R$\n2 - entre 50R$ e 100R$\n3 - acima de 100R$");
printf("\n\ndigite: ");
scanf("%d",&a);
printf("\n\n qual o preco? ");
scanf("%d",&pv);


switch(a){

case 1:
  pn=(pv*1.05);
  break;

case 2:
  pn=(pv*1.1);
  break;

case 3:
  pn=(pv*1.15);
  break;
}

if (pn<=80)
  printf("\n o preco novo e %d e e barato", pn);

else if ((pn>80)&&(pn<=120))
  printf("\n o preco novo e %d e e normal", pn);

else if ((pn>120)&&(pn<=200))
  printf("\n o preco novo e %d e e caro", pn);

else if (pn>200)
  printf("\n o preco novo e %d e e muito caro");


}
