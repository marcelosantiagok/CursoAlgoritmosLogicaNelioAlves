/*
Problema "media_ponderada" (adaptado de URI 1079)
Leia um valor inteiro N, que representa o n�mero de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais voc� dever� calcular e mostrar a m�dia ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a m�dia ponderada � a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){

	int num,i;
	double a,b,c,media;

	printf("Quantos casos voce vai digitar? \n");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		printf("Digite tres numeros \n");
		scanf("%lf",&a);
		scanf("%lf",&b);
		scanf("%lf",&c);
		media = ((a * 2) + (b * 3) + (c * 5) )/ 10;
		printf("MEDIA = %.1f\n",media);
		
	}
	
	

    return 0;
}
