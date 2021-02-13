/*Problema "glicose"
Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.*/


#include<stdio.h>
#include<stdlib.h>

int main(){

    double medida;

    printf("Digite a medida da glicose: ");
    scanf("%lf",&medida);

    if(medida <101){
        printf("Classificacao: normal");
    }else if(medida < 141){
        printf("Classificacao: elevado");
    }else{
        printf("diabetes");
    }


    return 0;
}
