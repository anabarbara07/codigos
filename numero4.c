/*Os funcion�rios de uma empresa receberam um aumento de sal�rio: t�cnicos: 50%, gerentes: 30% e
demais: 20%. Escrever um programa que receba como entrada o sal�rio atual e o cargo do funcion�rio, e
apresente o novo sal�rio ap�s o aumento. Utilize o comando caso para desenvolver esse algoritmo.*/

#include<stdio.h>

main(){

float sa,sn;
int c;

printf("insira o salario atual: ");
scanf("%f",&sa);

printf("\n1 - tecnico\n2 - gerente\n3 - demais cargos\n\ndigite o cargo: ");
scanf("%d",&c);

switch (c){

case 1:
  sn=sa*1.5;
  printf("\no salario apos o aumento sera de %f",sn);
  break;

case 2:
  sn=sa*1.3;
  printf("\no salario apos o aumento sera de %f",sn);
  break;

case 3:
  sn=sa*1.2;
  printf("\no salario apos o aumento sera de %f",sn);
  break;

}

}
