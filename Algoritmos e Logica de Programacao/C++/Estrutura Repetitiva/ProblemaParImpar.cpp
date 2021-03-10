/*
Problema "par_impar" (adaptado de URI 1074)
Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n,numero;

	cout << "Quantos numeros voce vai digitar? ";
	cin >> n;
	
	for(int i=0;i<n;i++){
		cout << "Digite um numero: ";
		cin >> numero;
		if(numero==0){
			cout << "NULO" << endl;
		}else if(numero > 0){
			if(numero%2==0){
				cout << "PAR POSITIVO" <<endl;
			}else{
				cout << "IMPAR POSITIVO" <<endl;
			}
		}else{
			if(numero%2==0){
				cout << "PAR NEGATIVO" <<endl;
			}else{
				cout << "IMPAR NEGATIVO" <<endl;
			}
		}
	}

    return 0;
}
