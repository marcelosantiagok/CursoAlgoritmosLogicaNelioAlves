/*
Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
*/

#include <stdio.h>
#include<stdlib.h>

int main(){

	int a,b;

	printf("Digite dois numeros: \n");
	scanf("%d",&a);
	scanf("%d",&b);

    while(a != b){
    if( a > b)
    {
    	printf("DECRESCENTE!\n");
    }else
    {
    	printf("CRESCENTE!\n");
    }

    printf("Digite outros dois numeros: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	}


	return 0;
}
