#include<stdio.h>

float n1,n2,m;
char nome;
int c;

main(){
 c=0;

do{
printf("\ndigite o nome do aluno: ");
scanf("\n%c",&nome);

printf("nota 1: ");
scanf("\n%f",&n1);

printf("nota 2: ");
scanf("\n%f",&n2);

m=(n1+n2)/2;
c=c+1;
printf("\na media e igual a %f",m);

}
while(c<5);{
}
}
