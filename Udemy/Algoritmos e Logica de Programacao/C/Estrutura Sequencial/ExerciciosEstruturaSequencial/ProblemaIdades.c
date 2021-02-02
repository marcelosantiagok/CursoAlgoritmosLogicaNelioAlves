/*Problema "idades"Fazer um programa para ler o nome e idade de duas pessoas.
Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas,
com uma casa decimal, conforme exemplo. */

#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome1[50];
    char nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    scanf(" %[^\n]s",nome1);
    printf("Idade: ");
    scanf("%d",&idade1);

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    scanf(" %[^\n]s",nome2);
    printf("Idade: ");
    scanf("%d",&idade2);

    media = (double)(idade1 + idade2) / 2;

    printf("A idade média de %s e %s é de %.1lf anos",nome1, nome2, media);



    return 0;
}
