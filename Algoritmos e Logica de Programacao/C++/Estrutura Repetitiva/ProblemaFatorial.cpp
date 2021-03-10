/*
Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n, fat;
	fat = 1;
	
	cout << "Digite o valor de N: ";
	cin >> n;
	
	for(int i=n;i>0;i--){
		fat = fat * i;
	}
	
	cout << "FATORIAL = " << fat;

    return 0;
}
