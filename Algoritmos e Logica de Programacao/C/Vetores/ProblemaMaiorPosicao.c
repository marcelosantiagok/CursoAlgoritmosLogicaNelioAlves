/*
Problema "maior_posicao"
Fa�a um programa que leia N n�meros reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior n�mero do vetor (supor n�o haver empates). Mostrar tamb�m a posi��o do maior elemento,
considerando a primeira posi��o como 0 (zero).
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
