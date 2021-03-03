/*
Problema "tabuada"
Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n;

	cout << "Deseja a tabuada para qual valor? ";
	cin >> n;
	
	for(int i=1;i<=10;i++){
		cout << n << " x " << i << " = " << n*i << endl;
	}
	

    return 0;
}
