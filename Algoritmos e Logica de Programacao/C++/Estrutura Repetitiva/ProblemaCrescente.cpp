/*
Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int x,y;
	
	cout << "Digite dois numeros: " << endl;
	cin >> x;
	cin >> y;
	while(x!=y){
		if(x>y){
			cout << "DECRESCENTE!" << endl;
		}else{
			cout << "CRESCENTE!" << endl;
		}
			cout << "Digite outros dois numeros: " << endl;
			cin >> x;
			cin >> y;
	}

    return 0;
}
