/*
Problema "abaixo_da_media"
Fazer um programa para ler um n�mero inteiro N e depois um vetor de N n�meros reais. Em seguida,
mostrar na tela a m�dia aritm�tica de todos elementos com tr�s casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da m�dia, com uma casa decimal cada.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Quantos elementos vai ter o vetor? ");
	int n=0;
	int i=0;
	scanf("%d",&n);
	double vet[n];
	double soma = 0.0;
	double media =0.0;
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%lf",&vet[i]);
		soma = soma + vet[i];
	}
	
	media = soma / n;
	
	printf("MEDIA DO VETOR = %.3lf\n",media);
	
	printf("ELEMENTOS ABAIXO DA MEDIA: \n");
	
	for(i=0;i<n;i++){
		if(vet[i]<media){
			printf("%.1lf\n",vet[i]);
		}
	}

    return 0;
}
