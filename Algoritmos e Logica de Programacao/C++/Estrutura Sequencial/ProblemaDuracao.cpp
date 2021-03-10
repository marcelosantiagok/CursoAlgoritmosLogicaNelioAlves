/*
Problema "duracao"
Fazer um programa para ler uma dura��o de tempo em segundos, da� imprimir na tela esta dura��o no
formato horas:minutos:segundos.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int duracao, horas, minutos, segundos, resto;

	cout << "Digite a duracao em segundos: ";
	cin >> duracao;	
	
	horas = duracao / 3600;
	resto = duracao % 3600;
	minutos = resto / 60;
	segundos = resto % 60;
	
	cout << horas << ":" << minutos << ":" << segundos;
	
    return 0;
}
