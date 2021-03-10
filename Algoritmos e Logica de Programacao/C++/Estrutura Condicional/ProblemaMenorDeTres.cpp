/*
Problema "menor_de_tres"
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int a,b,c, menor;
	
	cout << "Primeiro valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	cout << "Terceiro valor: ";
	cin >> c;
	
	menor = 0;
	
	if((a < b)&&(a < c)){
		menor = a;
	}else if((b < a)&&(b < c)){
		menor = b;
	}else{
		menor = c;
	}
	
	cout << "MENOR = " << menor;
	
	
    return 0;
}
