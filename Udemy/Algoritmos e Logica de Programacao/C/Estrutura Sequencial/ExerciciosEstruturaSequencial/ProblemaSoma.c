/*Problema "soma" Fazer um programa para ler dois valores inteiros X e Y,
e depois mostrar na tela o valor da soma destes números.*/

#include<stdio.h>
#include<stdlib.h>

int main (){

    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d",&x);


    printf("Digite o valor de Y: ");
    scanf("%d",&y);

    printf("SOMA = %d",x+y);

    return 0;
}
