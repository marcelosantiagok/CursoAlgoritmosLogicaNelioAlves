/*
Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
int n;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

	int a[n], b[n], c[n];
	int i=0;
	
	printf("Digite os valores do vetor A: \n");
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Digite os valores do vetor B: \n");
	
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		c[i] = a[i]+b[i];
	}
	
	printf("VETOR RESULTANTE: \n");
	
	for(i=0;i<n;i++){
		printf("%d\n",c[i]);
	}
	
    return 0;
}
