/*
Problema "mais_velho"
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.
*/

#include<stdio.h>
#include<stdlib.h>

int main (){

	printf("Quantas pessoas voce vai digitar? ");
	int n=0;
	char nome[n][50];
	scanf("%d",&n);
	int i=0;
	int maior =0;
	int idade[n];
	for(i=0;i<n;i++){
		printf("Dados da %da pessoa: \n",i+1);
		printf("Nome: ");
		scanf("%s", &nome[i][0]);
		printf("Idade: ");
		scanf("%d",&idade[i]);
	}

	for(i=0;i<n;i++){
		if(idade[i]>maior){
			maior = idade[i];
		}
	}
	
	for(i=0;i<n;i++){
		if(maior==idade[i]){
		printf("PESSOA MAIS VELHA = %s",nome[i]);	
		}
	}
	
	
	

    return 0;
}
