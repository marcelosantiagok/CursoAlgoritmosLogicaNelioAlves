/*
Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
*/
#include<stdio.h>
#include<stdlib.h>
int main (){
	
	
	int m=0, n =0, i=0, j=0;
	double soma = 0.0;
	printf("Qual a quantidade de linhas da matriz? ");
	scanf("%d",&m);
	printf("Qual a quantidade de colunas da matriz? ");
	scanf("%d",&n);
	
	double vet[m][n], vetorG[m];
	
	for(i=0;i<m;i++){
		printf("Digite os elementos da %d a. linha: \n",i+1);
		for(j=0;j<n;j++){
			scanf("%lf",&vet[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		soma = 0;
		for(j=0;j<n;j++){
			soma = soma + vet[i][j];
		}
		vetorG[i] = soma;
	}
	
	 printf("VETOR GERADO:\n");
	
	for(i=0;i<m;i++){
		printf("%.1lf\n",vetorG[i]);
	}
	

    return 0;
}
