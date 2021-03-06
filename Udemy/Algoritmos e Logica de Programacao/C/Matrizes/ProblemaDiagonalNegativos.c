/*
Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
*/
#include<stdio.h>
#include<stdlib.h>
int main (){
	
int n,i,j ,qtd;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int elemento[n][n];

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Elemento [%d,%d]: ",i,j);
			scanf("%d",&elemento[i][j]);
			if(elemento[i][j]<0){
				qtd = qtd+1;
			}
		}
	}
	
	printf("DIAGONAL PRINCIPAL:\n");
	for(i=0;i<n;i++){
		printf("%d ",elemento[i][i]);
	}
	
	printf("\nQUANTIDADE DE NEGATIVOS = %d",qtd);

    return 0;
}
