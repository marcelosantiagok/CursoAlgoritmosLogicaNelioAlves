/*
Problema "pagamento"
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa, conforme exemplo.
*/



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	string nome;
	double valorPorHora, horas;
	
	cout << "Nome: ";
	getline(cin, nome);
	cout << "Valor por hora: ";
	cin >> valorPorHora;
	cout << "Horas trbalhadas: ";
	cin >> horas;
	cout << fixed << setprecision(2);
	cout << "O pagamento para " << nome << " deve ser " << valorPorHora*horas;

    return 0;
}
