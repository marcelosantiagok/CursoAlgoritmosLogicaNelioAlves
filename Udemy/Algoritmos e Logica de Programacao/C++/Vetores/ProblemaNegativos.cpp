/*
Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	cout << "Quantos numeros voce vai digitar? ";
	int n =0;
	cin >> n;
	int i=0;
	int vet[n];
	for(i=0;i<n;i++){
		cout << "Digite um numero: ";
		cin >> vet[i];
	}
	
	cout << "NUMEROS NEGATIVOS: " << endl;
	
	for(i=0;i<n;i++){
		if(vet[i]<0){
				cout << vet[i] << endl;
		}
	
	}

    return 0;
}
