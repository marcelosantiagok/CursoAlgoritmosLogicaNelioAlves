/*Problema "dardo"
No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância
que conseguir. Você deve criar um programa para, dadas as medidas das três tentativas
de lançamento, informar qual foi a maior.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    double a, b, c, maior;

    printf("Digite as tres distancias: ");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    maior = a;

    if((maior > b) && (maior > c)){
        maior = a;
    }else if((b > a) && (b > c)){
        maior = b;
    }else{
        maior = c;
    }

    printf("MAIOR DISTANCIA = %.2lf",maior);

    return 0;
}
