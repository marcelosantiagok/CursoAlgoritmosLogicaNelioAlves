/*
Problema "matriz_geral"
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Qual a ordem da matriz? ");
	int n =0;
	scanf("%d",&n);
	double mat[n][n];
	int i=0;
	int j=0;
	double soma = 0.0;
	int escolha =0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Elemento [%d,%d]: ",i,j);
			scanf("%lf",&mat[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(mat[i][j]>0.0){
				soma = soma + mat[i][j];
			}
		}
	}
	
	printf("SOMA DOS POSITIVOS %.1lf\n",soma);
	
	printf("Escolha uma linha: ");
	scanf("%d",&escolha);
		
	printf("LINHA ESCOLHIDA: ");

    for (i=0; i<n; i++) {
        printf("%.1lf ", mat[escolha][i]);
    }
    
    printf("\nEscolha uma coluna: ");
	scanf("%d",&escolha);
	
	printf("COLUNA ESCOLHIDA: ");
    
    for (i=0; i<n; i++) {
        printf("%.1lf ", mat[i][escolha]);
    }
    
    printf("\n\nDIAGONAL PRINCIPAL: ");

    for (i=0; i<n; i++) {
        printf("%.1lf ", mat[i][i]);
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (mat[i][j] < 0) {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }
    
    printf("\nMATRIZ ALTERADA:\n");

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%.1lf ", mat[i][j]);
        }
		printf("\n");
    }

	
	

    return 0;
}
