/*
Problema "menor_de_tres"
Fazer um programa para ler três números inteiros.
Em seguida, mostrar qual o menor dentre os três números lidos.
Em caso de empate, mostrar apenas uma vez.

*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c, menor;


    printf("Primeiro valor: ");
    scanf("%d",&a);

    printf("Segundo valor: ");
    scanf("%d",&b);

    printf("Terceiro valor: ");
    scanf("%d",&c);

    menor = a;

    if((menor < b)&&(menor < c)){
        menor = a;
    }else if((b < a)&&(b < c)){
        menor = b;
    }else{
        menor = c;
    }


    printf("MENOR = %d",menor);

    return 0;
}
