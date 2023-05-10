/*lista switch numero 1*/

#include<stdio.h>

main(){

int v;

printf("1-maior que 60 e menor que 80km/hkm/h\n2-maior que 80km/h\n3-menor ou igual a 60km/h\n\nqual a velocidade do veiculo? ");
scanf("%d",&v);

switch (v){

case 2:
    printf("a multa sera de 360 reais");
    break;

case 1:
    printf("a multa sera de 180 reais");
    break;

case 3:
    printf("nao tem multa");
    break;

}
}
