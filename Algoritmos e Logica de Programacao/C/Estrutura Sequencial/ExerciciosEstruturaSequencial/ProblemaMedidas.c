/*Problema "medidas" Fazer um programa para ler tr�s medidas A, B e C.
Em seguida, calcular e mostrar (imprimir os dados com quatro casas decimais):
a) a �rea do quadrado que tem lado A
b) a �rea do tri�ngulo ret�ngulo que base A e altura B
c) a �rea do trap�zio que tem bases A e B, e altura C*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    double a, b, c, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%lf",&a);
    printf("Digite a medida B: ");
    scanf("%lf",&b);
    printf("Digite a medida C: ");
    scanf("%lf",&c);

    quadrado = a * a;
    triangulo = (a * b) / 2;
    trapezio = ((a + b) * c) / 2;
    printf("AREA DO QUADRADO = %.4lf\n",quadrado);
    printf("AREA DO TRIANGULO = %.4lf\n",triangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n",trapezio);

    return 0;
}
