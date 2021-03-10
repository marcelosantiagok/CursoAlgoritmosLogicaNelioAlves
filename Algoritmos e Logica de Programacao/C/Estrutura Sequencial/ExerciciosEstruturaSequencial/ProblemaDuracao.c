/*Problema "duracao" Fazer um programa para ler uma duração de tempo em segundos,
daí imprimir na tela esta duração no formato horas:minutos:segundos.*/


#include<stdio.h>
#include<stdlib.h>

int main(){

    int duracao, hora, minutos, segundos, resto;

    printf("Digite a duracao em segundos: ");
    scanf("%d",&duracao);

    hora = duracao / 3600;
    resto = duracao % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d",hora,minutos,segundos);


    return 0;
}
