/*
Problema "multiplos" (adaptado de URI 1044)
Fazer um programa para ler dois n�meros inteiros, e dizer se um n�mero � m�ltiplo do outro. Os
n�meros podem ser digitados em qualquer ordem.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int a, b;
	cout << "Digite dois numeros inteiros: " << endl;
	cin >> a;
	cin >> b;
	
	if((a % b == 0)||(b % a == 0)){
		cout << "Sao multiplos ";
	}else{
		cout << "Nao sao multiplos ";
	}
    return 0;
}
