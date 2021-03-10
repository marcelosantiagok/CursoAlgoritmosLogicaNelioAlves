/*
Problema "maior_posicao"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Quanto numeros voce vai digitar? ");
	int n =0;
	scanf("%d",&n);
	int i=0;
	double numero[10];
	double maior = 0.0;
	int posicao = 0.0;
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%lf",&numero[i]);
		if(numero[i]>maior){
			maior = numero[i];
			posicao = i;
		}
	}
	
	printf("MAIOR VALOR = %.1f\n",maior);
	printf("POSICAO DO MAIOR VALOR = %d",posicao);

    return 0;
}
