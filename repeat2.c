#include<stdio.h>

main(){
int age,cont=0,num,soma=0;
float m;

printf("digite uma idade: ");
scanf("%d",&age);

while(age!=0){

  cont=cont+1;
  soma=soma+age;
printf("digite uma idade: ");
scanf("%d",&age);
}
m=soma/cont;
printf("\na media das idades e %f",m);
}

