/*
Problema "tempo_de_jogo" (adaptado de URI 1046)
Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo, sabendo que o mesmo
pode come�ar em um dia e terminar em outro, tendo uma dura��o m�nima de 1 hora e m�xima de 24
horas.
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int horaInicial, horaFinal, hora;
	
	cout << "Hora inicial: ";
	cin >> horaInicial;
	cout << "Hora final: ";
	cin >> horaFinal;
	
	hora = 24;
	
	if(horaInicial > horaFinal){
		hora = (hora - horaInicial) + horaFinal;
	}else if(horaFinal > horaInicial){
		hora = horaFinal - horaInicial;
	}
	
	cout << "O JOGO DUROU " << hora << " HORA(S)";
	
	
	
    return 0;
}
