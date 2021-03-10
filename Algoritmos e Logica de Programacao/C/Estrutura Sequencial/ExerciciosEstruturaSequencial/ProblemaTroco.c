/*Problema "troco" Fazer um programa para calcular o troco no processo de pagamento
de um produto de uma mercearia. O programa deve ler o preço unitário do produto,
a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente).
Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. */

#include<stdio.h>
#include<stdlib.h>

int main(){

        double preco, dinheiro, calc, troco;
        int qtd;


        printf("Preço unitário do produto: ");
        scanf("%lf",&preco);

        printf("Quantidade comprada: ");
        scanf("%d",&qtd);

        printf("Dinheiro recebido: ");
        scanf("%lf",&dinheiro);

        calc = preco * qtd;

        if(dinheiro>=calc){
            troco = dinheiro - calc;
            printf("TROCO = %.2lf",troco);
        }else{
            troco = calc - dinheiro;
            printf("FALTOU = %.2lf",troco);
        }


    return 0;
}
