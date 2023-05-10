/*lista switch numero 3*/

#include<stdio.h>

main (){

float saldo,valor,saldof;
int tipo;

printf("digite o saldo da conta: ");
scanf("%f",&saldo);

printf("insira o valor da transacao: ");
scanf("%f",&valor);

printf("1 - deposito\n2 - retirada\n\nqual tipo? ");
scanf("%d",&tipo);

switch(tipo){

case 1:
  saldof=saldo+valor;
  printf("\no saldo final da conta sera de %f\n",saldof);
  break;

case 2:
  saldof=saldo-valor;
  printf("\no saldo final da conta sera de %f\n",saldof);
  break;

}

}
