/*
Problema "par_impar" (adaptado de URI 1074)
Leia um valor inteiro N. Este valor ser� a quantidade de n�meros inteiros que ser�o lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido � PAR ou IMPAR, e tamb�m
se � POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa dever� imprimir
apenas NULO.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){

	int n,i,num;

	printf("Quantos numeros voce vai digitar? ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num == 0){
			printf("NULO\n");
		}else if(num % 2 == 0){
			if(num > 0){
				printf("PAR POSITIVO\n");
			}else{
				printf("PAR NEGATIVO\n");
			}
		}else if(num %2 != 0){
			if(num > 0){
				printf("IMPAR POSITIVO\n");
			}else{
				printf("IMPAR NEGATIVO\n");
			}
		}
	}

    return 0;
}
