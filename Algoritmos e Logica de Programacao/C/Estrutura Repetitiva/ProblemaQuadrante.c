/*Problema "quadrante" (adaptado de URI 1115)
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4).
O algoritmo ser� encerrado quando pelo menos uma de duas coordenadas for NULA
(nesta situa��o sem escrever mensagem alguma).*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, y;

    printf("Digite os valores das coordenadas X e Y: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    while(( x != 0) && ( y != 0)){
        if((x > 0)&&(y > 0)){
            printf("QUADRANTE Q1\n");
        }else if((x < 0)&&(y > 0)){
            printf("QUADRANTE Q2\n");
        }else if((x < 0) && (y < 0)){
            printf("QUADRANTE Q3\n");
        }else if((x > 0)&&( y < 0)){
            printf("QUADRANTE Q4\n");
        }
    printf("Digite os valores das coordenadas X e Y: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    }
    return 0;
}
