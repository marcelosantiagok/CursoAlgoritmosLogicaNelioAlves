/*
Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
deduzir a fórmula de Celsius para Fahrenheit):
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	char sel;
	double C, F;

	cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
	cin >> sel;
	cout << fixed << setprecision(2);
	if((sel == 'F')||(sel == 'f')){
		cout << "Digite a temperatura em Fahrenheit: ";
		cin >> F;
		C = 5.0 / 9.0 * (F - 32.0);
		cout << "Temperatura equivalente em Celsius: " << C;
	}else if((sel == 'C')||(sel == 'c')){
		cout << "Digite a temperatura em Celsius: ";
		cin >> C;
		F = 9.0 * C / 5.0 + 32.0;
		cout << "Temperatura equivalente em Fahrenheit: " << F;
	}

    return 0;
}
