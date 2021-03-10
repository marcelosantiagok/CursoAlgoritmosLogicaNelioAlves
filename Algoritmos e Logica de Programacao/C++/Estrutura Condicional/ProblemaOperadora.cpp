/*
Problema "operadora"
Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int minutos;
	double valor = 50.00;
	
	cout << "Digite a quantidade de minutos: ";
	cin >> minutos;
	
	if(minutos > 100){
		valor = valor + ((minutos - 100) * 2);
	}
	cout << fixed << setprecision(2);
	cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}
