/*Problema "pagamento" Fazer um programa para ler o nome de um(a) funcionário(a),
o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a).
Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa,
conforme exemplo.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[50];
    int horaTrabalhada;
    double valorHora, calc;

    printf("Nome: ");
    scanf(" %[^\n]s",nome);
    printf("Valor por hora: ");
    scanf("%lf",&valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d",&horaTrabalhada);

    calc = (double)horaTrabalhada * valorHora;

    printf("O pagamento para %s deve ser %.2lf",nome,calc);


    return 0;
}
