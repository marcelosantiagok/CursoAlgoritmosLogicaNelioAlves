/*
Problema "multiplos" (adaptado de URI 1044)
Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os 
números podem ser digitados em qualquer ordem.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int x,y;
	
	printf("Digite dois numeros inteiros: ");
	scanf("%d",&x);
	scanf("%d",&y);
	
	if((x % y == 0)||(y % x == 0))
	{
		printf("Sao muliplos");
	}else
	{
		printf("Nao sao muliplos");
	}
	
	return 0;
}
