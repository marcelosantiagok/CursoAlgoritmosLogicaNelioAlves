/*
Problema "divisao" (adaptado de URI 1116)
Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
*/
#include<stdio.h>
#include<stdlib.h>
int main (){
	
	int i, num;
	double numerador, denominador, divisao;
	
	printf("Quantos casos voce vai digitar? ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Entre com o numerador: ");
		scanf("%lf",&numerador);
		printf("Entre com o denominador: ");
		scanf("%lf",&denominador);
		if(numerador >= 0){
			divisao = numerador / denominador;
			printf("DIVISAO = %.2f\n",divisao);
		}else{
			printf("DIVISAO IMPOSSIVEL \n");
		}
	}

    return 0;
}
