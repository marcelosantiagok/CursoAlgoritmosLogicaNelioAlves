/*
Problema "par_impar" (adaptado de URI 1074)
Leia um valor inteiro N. Este valor ser� a quantidade de n�meros inteiros que ser�o lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido � PAR ou IMPAR, e tamb�m
se � POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa dever� imprimir
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
