/*
Problema "validacao_de_nota" (adaptado de URI 1117)
Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. Calcule e imprima a
m�dia semestral. Fa�a com que o algoritmo s� aceite notas v�lidas (uma nota v�lida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	double x, y, media;
	
	printf("Digite a primeira nota: ");
	scanf("%lf",&x);
	while((x<0.0)||(x>10.0)){
		printf("Valor invalido! Tente novamente: ");
		scanf("%lf",&x);	
	}
	
	printf("Digite a segunda nota: ");
	scanf("%lf",&y);
	while((y<0.0)||(y>10.0)){
		printf("Valor invalido! Tente novamente: ");
		scanf("%lf",&y);	
	}
	
	media = (x + y) / 2.0;
	printf("MEDIA = %.2f",media);

	

    return 0;
}
