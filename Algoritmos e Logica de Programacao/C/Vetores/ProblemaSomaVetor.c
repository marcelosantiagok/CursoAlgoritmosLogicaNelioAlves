/*
Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
*/
#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Quantos numeros voce vai digitar? ");
	int n = 0, cont =0;
	scanf("%d",&n);
	double numero[10],soma,media;
	soma = 0.0;
	media = 0.0;
	int i =0;
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%lf",&numero[i]);
		soma = soma + numero[i];
		cont = cont+1;
	}
	printf("VALORES = ");
	for(i=0;i<n;i++){
		printf("%.1lf  ",numero[i]);
	}
	printf("\n");
	printf("SOMA = %.2lf\n",soma);
	media = soma / cont;
	printf("MEDIA = %.2lf\n",media);
	
	
	

    return 0;
}
