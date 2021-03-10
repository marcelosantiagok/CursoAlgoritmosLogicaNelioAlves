/*
Problema "validacao_de_nota" (adaptado de URI 1117)
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
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
