/*
Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/
#include<stdio.h>
#include<stdlib.h>
int main (){

	int n =0,i=0;
	int vet[10];
	int numero = 0;
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d",&vet[i]);
	}
	
	printf("NUMEROS NEGATIVOS: \n");
	
	for(i=0;i<n;i++){
		if(vet[i]<0){
			printf("%d\n",vet[i]);
		}
	}
	
    return 0;
}
