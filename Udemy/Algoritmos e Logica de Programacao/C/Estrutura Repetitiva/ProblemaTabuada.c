/*
Problema "tabuada"
Ler um n�mero inteiro N, da� mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	int numero, i;
	i = 0;
	numero = 0;
	printf("Deseja a tabuada para qual valor? ");
	scanf("%d",&numero);
	
	for(i=1;i<11;i++){
		printf("%d x %d = %d\n",numero,i, numero*i);
	}

    return 0;
}
