/*
Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){

	int i, n, fat;
	
	fat = 1;

	printf("Digite o valor de N: ");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		fat = fat * i;
	}
	printf("FATORIAL = %d",fat);

	
	

    return 0;
}
