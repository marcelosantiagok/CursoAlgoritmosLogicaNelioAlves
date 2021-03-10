/*
Problema "soma_matrizes"
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
*/
#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Quantas linhas vai ter cada matriz? ");
	int m = 0;
	scanf("%d",&m);
	printf("Quantas colunas vai ter cada matriz? ");
	int n=0;
	scanf("%d",&n);
	int i=0;
	int j=0;
	int matA[m][n];
	int matB[m][n];
	int matC[m][n];
	printf("Digite os valores da matriz A: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Elemento [%d,%d]: ",i,j);
			scanf("%d",&matA[i][j]);
		}
	}
	
	printf("Digite os valores da matriz B: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Elemento [%d,%d]: ",i,j);
			scanf("%d",&matB[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			matC[i][j] = matA[i][j] + matB[i][j];
			printf("%d ",matC[i][j]);
		}
		printf("\n");
	}
	
	
	
	
    return 0;
}
