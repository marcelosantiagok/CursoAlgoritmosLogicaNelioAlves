/*
Problema "divisao" (adaptado de URI 1116)
Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n;
	double numerador, denominador,divisao;
	
	cout << "Quantos casos voce vai digitar? ";
	cin >> n;
	
	cout << fixed << setprecision(2);
	for(int i=0;i<n;i++){
		cout << "Entre com o numerador: ";
		cin >> numerador;
		cout << "Entre com o denominador: ";
		cin >> denominador;
		if(numerador >= 0){
			divisao = numerador / denominador;
			cout << "DIVISAO = " << divisao <<endl;
		}else{
			cout << "DIVISAO IMPOSSIVEL" << endl;
		}
	}

    return 0;
}
