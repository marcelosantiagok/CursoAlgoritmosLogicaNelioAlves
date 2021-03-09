/*
Problema "negativos_matriz"
Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Qual a quantidade de linhas da matriz? ");
	int m = 0;
	scanf("%d",&m);
	printf("Qual a quantidade de colunas da matriz? ");
	int n=0;
	scanf("%d",&n);
	int i =0;
	int j=0;
	int vet[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("Elemento [%d,%d]: ",i,j);
		scanf("%d",&vet[i][j]);
		}
	}
	
	printf("VALORES NEGATIVOS: \n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(vet[i][j]<0){
				printf("%d\n",vet[i][j]);
			}
		}
	}
	
	

    return 0;
}
