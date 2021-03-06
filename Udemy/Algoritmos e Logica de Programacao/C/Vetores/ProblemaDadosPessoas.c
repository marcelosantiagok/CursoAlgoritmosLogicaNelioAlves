/*
Problema "dados_pessoas"
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Quantas pessoas serao digitadas? ");
	int n = 0;
	int i=0;
	double altura[n];
	char genero[n];
	double maior = 0.0;
	double menor = 0.0;
	double somaMulheres = 0.0;
	double media = 0.0;
	int contMulheres = 0;
	int contHomens = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Altura da %da pessoa: ",i+1);
		scanf("%lf",&altura[i]);
		if(altura[i]>maior){
			maior = altura[i];
		}
		
		
		
		printf("Genero da %da pessoa: ",i+1);
		scanf(" %c",&genero[i]);
		if((genero[i]=='F')||(genero[i]=='f')){
			somaMulheres = somaMulheres + altura[i];
			contMulheres = contMulheres + 1;
		}else if((genero[i]=='M')||(genero[i]=='m')){
			contHomens = contHomens + 1;
		}
	}
	
	menor = altura[0];
	
	for(i=0;i<n;i++){
		if(altura[i]<menor){
			menor = altura[i];
		}
	}
	
	media = somaMulheres / contMulheres;
	printf("Menor altura = %.2lf\n",menor);
	printf("Maior altura = %.2lf\n",maior);
	printf("Media das alturas das mulheres = %.2lf\n",media);
	printf("Numero de homens = %d",contHomens);
	

    return 0;
}
