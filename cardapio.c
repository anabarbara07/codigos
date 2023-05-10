#include<stdio.h>

main(){

int q,p,pf;

printf("100-cachorro quente\n101-bauru simples\n102-bauru com ovo\n103-hamburguer\n104-cheeseburguer\n105-refrigerante");

printf("\n\ninsira o codigo do produto: ");
scanf("%d",&p);

printf("insira a quantidade: ");
scanf("%d",&q);

switch(p) {

case 100:
    pf=1.7*q;
    printf("o preco e %d",pf);
    break;

case 101:
    pf=2.3*q;
    printf("o preco e %d",pf);
    break;

case 102:
    pf=2.6*q;
    printf("o preco e %d",pf);
    break;

case 103:
    pf=2.4*q;
    printf("o preco e %d",pf);
    break;

case 104:
    pf=2.5*q;
    printf("o preco e %d",pf);
    break;

case 105:
    pf=1*q;
    printf("o preco e %d",pf);
    break;
}
}
