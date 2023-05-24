#include<stdio.h>

main(){
int num,maior=0;

  do {
    printf("digite um numero ou 0 para sair: ");
scanf("%d",&num);

if(num>maior)
  maior=num;
}

  while(num!=0);
printf("\no maior numero e: %d ",maior);


}
