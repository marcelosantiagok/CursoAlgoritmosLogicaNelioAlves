/*Problema "consumo" Fazer um programa para ler a dist�ncia total (em km)
percorrida por um carro, bem como o total de combust�vel gasto por este carro
ao percorrer tal dist�ncia. Seu programa deve mostrar o consumo m�dio do carro,
com tr�s casas decimais.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    double distancia, combustivel, calc;

    printf("Distancia percorrida: ");
    scanf("%lf",&distancia);

    printf("Combustivel gasto: ");
    scanf("%lf",&combustivel);

    calc = distancia / combustivel;

    printf("Consumo medio = %.3lf",calc);

    return 0;
}
