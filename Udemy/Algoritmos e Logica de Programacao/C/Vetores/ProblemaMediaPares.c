/*
Problema "media_pares "
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"
*/

#include<stdio.h>
#include<stdlib.h>
int main (){

	printf("Quantos elementos vai ter o vetor? ");
	int n=0;
	scanf("%d",&n);
	int i=0;
	int contPar = 0;
	double somaPar = 0.0;
	double media =0.0;
	int vet[n];
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d",&vet[i]);
		if(vet[i]%2==0){
			somaPar = somaPar + vet[i];
			contPar = contPar + 1;
		}
	}

	media = somaPar/contPar;
	
	if(media>1){
		printf("MEDIA DOS PARES = %.1lf",media);
	}else{
		printf("NENHUM NUMERO PAR");
	}
	

    return 0;
}
