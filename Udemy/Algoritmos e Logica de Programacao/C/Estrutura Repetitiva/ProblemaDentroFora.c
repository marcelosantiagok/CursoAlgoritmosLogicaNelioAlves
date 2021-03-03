/*
Problema "dentro_fora" (adaptado de URI 1072)
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	int n,x,i, dentro, fora;
	printf("Quantos numeros voce vai digitar? \n");
	scanf("%d",&n);
	dentro =0;
	fora =0;
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d",&x);
		if((x>9)&&(x<21)){
			dentro = dentro +1;
		}else{
			fora = fora + 1;
		}
		
	}
	
	printf("%d DENTRO\n",dentro);
	printf("%d FORA\n",fora);
    return 0;
}
