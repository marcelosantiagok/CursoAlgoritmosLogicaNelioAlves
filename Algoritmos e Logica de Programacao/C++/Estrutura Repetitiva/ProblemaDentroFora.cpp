/*
Problema "dentro_fora" (adaptado de URI 1072)
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int n,dentro,fora, numero;

	cout << "Quantos numeros voce vai digitar? ";
	cin >> n;
	dentro =0;
	fora=0;
	numero=0;
	
	for(int i=0;i<n;i++){
		cout << "Digite um numero: ";
		cin >> numero;
		if((numero>9)&&(numero<21)){
			dentro++;
		}else{
			fora++;
		}
	}
	
	cout << dentro << " DENTRO" << endl;
	cout << fora << " FORA" << endl;
	

    return 0;
}
