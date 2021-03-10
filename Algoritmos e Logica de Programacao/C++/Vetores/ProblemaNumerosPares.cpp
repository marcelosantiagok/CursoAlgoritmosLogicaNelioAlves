/*
Problema "numeros_pares"
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	cout << "Quantos numeros voce vai digitar? ";
	int n =0;
	cin >> n;
	int i =0;
	int cont=0;
	int vet[n];
	for(i=0;i<n;i++){
		cout << "Digite um numero: ";
		cin >> vet[i];
	}
	cout << "NUMEROS PARES: " << endl;
	for(i=0;i<n;i++){
		if(vet[i]%2==0){
			cout << vet[i] << " ";
			cont = cont+1;
		}
	}
	
	cout << endl << "QUANTIDADE DE PARES = " << cont;
	

    return 0;
}
