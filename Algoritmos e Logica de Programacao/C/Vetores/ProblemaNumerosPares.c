/*
Problema "numeros_pares"
Fa�a um programa que leia N n�meros inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os n�meros pares, e tamb�m a quantidade de n�meros pares.
*/
#include<stdio.h>
#include<stdlib.h>
int main (){

	printf("Quantos numeros voce vai digitar? ");
	int n =0;
	scanf("%d",&n);
	int i=0;
	int cont = 0;
	int numero[10];
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d",&numero[i]);
	}
	
	printf("NUMEROS PARES: \n");
	
	for(i=0;i<n;i++){
		if(numero[i]%2==0){
			printf("%d ",numero[i]);
			cont = cont+1;
		}
	}
	
	
	printf("\nQUANTIDADE DE PARES = %d",cont);

    return 0;
}
