/*
Problema "cada_linha"
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Qual a ordem da matriz? ");
	int n = 0;
	scanf("%d",&n);
	int i=0;
	int j=0;
	int novo[n];
	int vet[n][n];
	int maior = 0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Elemento [%d,%d]: ",i,j);
			scanf("%d",&vet[i][j]);
		}
	}
	
	
	
	for(i=0;i<n;i++){
		maior = vet[i][0];
		for(j=0;j<n;j++){
			if(vet[i][j]>maior){
				maior = vet[i][j];
			}
		}
		novo[i] = maior;
	}
	
	printf("MAIOR ELEMENTO DE CADA LINHA: \n");
	
	for(i=0;i<n;i++){
		printf("%d\n",novo[i]);
	}

    return 0;
}
