/*Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de
uma mercearia. O programa deve ler o preço unitário do produto,
a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente.
Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.
Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo.*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int qtd;
    double preco, dinheiro, troco, compra;

    printf("Preço unitário do produto: ");
    scanf("%lf",&preco);
    printf("Quantidade comprada: ");
    scanf("%d",&qtd);
    printf("Dinheirro recebido: ");
    scanf("%lf",&dinheiro);

    compra = preco * qtd;

    if(compra < dinheiro){
        troco = dinheiro - compra;
        printf("TROCO = %.2lf",troco);
    }else{
        troco = compra - dinheiro;
        printf("DINHEIRO INSUFICIENTE FALTAM %.2lf",troco,"REAIS");
    }

    return 0;
}
