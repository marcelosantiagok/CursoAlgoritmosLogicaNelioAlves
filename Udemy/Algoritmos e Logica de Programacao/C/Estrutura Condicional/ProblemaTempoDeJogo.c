/*
Problema "tempo_de_jogo" (adaptado de URI 1046) 
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo 
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 
horas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int horaInicial, horaFinal, hora;

	printf("Hora inicial: ");
	scanf("%d",&horaInicial);
	printf("Hora final: ");
	scanf("%d",&horaFinal);
	
	hora = 24;
	
	if(horaInicial < horaFinal)
	{
		hora = horaFinal - horaInicial;
	}else
	{
		hora = (hora - horaInicial) + horaFinal;
	}
	
	printf("O JOGO DUROU %d HORA(S)",hora);
	
	return 0;
}
