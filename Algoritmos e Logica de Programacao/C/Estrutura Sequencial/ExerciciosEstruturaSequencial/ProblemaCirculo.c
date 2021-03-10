/*Problema "circulo"Fazer um programa para ler o valor "r" do raio de um círculo,
e depois mostrar o valor da área do círculo com três casas decimais.
A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎=𝜋.𝑟ଶ.
Você pode usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação,
ou então, se preferir, use diretamente o valor 3.14159. */

#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#define _USE_MATH_DEFINES

# define M_PI           3.14159265358979323846  /* pi */

int main(){

    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf",&raio);

    area = M_PI * pow(raio,2);

    printf("AREA = %.3lf",area);

    return 0;
}
