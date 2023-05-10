#include<stdio.h>

main(){

int ano;

printf("digite um ano que teve copa do mundo entre 1982 a 2014: ");
scanf("%d",&ano);

switch(ano){

case 1982:
  printf("Local: Espanha   Campeao: Italia ");

case 1986:
  printf("Local: Mexico   Campeao: Argentina ");

case 1990:
  printf("Local: Italia   Campeao: Alemanha ");

case 1994:
  printf("Local: EUA   Campeao: Brasil ");

case 1998:
  printf("Local: França   Campeao: França ");

case 2002:
  printf("Local: Coreia e Japao   Campeao: Brasil");

case 2006:
  printf("Local: Alemanha   Campeao: Italia");

case 2010:
  printf("Local: Africa do Sul   Campeao: Espanha");

case 2014:
  printf("Local: Brasil   Campeao: Alemanha");

}
}
