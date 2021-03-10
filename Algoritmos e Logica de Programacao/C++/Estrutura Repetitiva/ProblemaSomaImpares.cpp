/*
Problema "soma_impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int x,y, troca, soma;
	
	cout << "Digite dois numeros: " << endl;
	cin >> x;
	cin >> y;
	
	if(x > y){
		troca = x;
		x = y;
		y = troca;
	}
	for(int i=x+1;i<y;i++){
		if(i%2!=0){
			soma = soma + i;
		}
	}
	
	cout << "SOMA DOS IMPARES = " << soma;

    return 0;
}
