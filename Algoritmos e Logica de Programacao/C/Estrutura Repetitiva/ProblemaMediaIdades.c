/*
Problema "media_idades"
Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa.
Calcular e imprimir a idade m�dia deste grupo de indiv�duos.
Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    double soma, media;
    int idade, cont;

    media = 0.0;
    soma = 0.0;
    idade = 0;
    cont = 0;

    printf("Digite as idades: \n");
    scanf("%d",&idade);
    while(idade >= 0){
        soma = soma + (double)idade;
        cont = cont + 1;
        scanf("%d",&idade);
    }

    media = soma / (double)cont;

    if(media > 0){
        printf("MEDIA = %.2lf",media);
    }else{
        printf("IMPOSSIVEL CALCULAR");
    }


    return 0;
}
