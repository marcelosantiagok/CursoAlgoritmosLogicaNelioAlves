/*Problema "consumo" Fazer um programa para ler a distância total (em km)
percorrida por um carro, bem como o total de combustível gasto por este carro
ao percorrer tal distância. Seu programa deve mostrar o consumo médio do carro,
com três casas decimais.*/

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
