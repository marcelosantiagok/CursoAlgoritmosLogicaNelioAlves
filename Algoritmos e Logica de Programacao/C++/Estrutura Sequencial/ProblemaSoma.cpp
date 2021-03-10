/*Problema "soma"
Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int x, y, soma;
	cout << "Digite o valor de X: ";
	cin >> x;
	cout << "Digite o valor de Y: ";
	cin >> y;
	soma = x + y;
	cout << "SOMA = " << soma;

    return 0;
}
