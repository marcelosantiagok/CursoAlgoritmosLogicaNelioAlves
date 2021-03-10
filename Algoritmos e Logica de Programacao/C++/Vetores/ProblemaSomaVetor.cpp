/*
Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Quantos numeros voce vai digitar? ";
	int n = 0;
	cin >> n;
	int i=0;
	double soma,media;
	soma =0.0;
	media =0.0;
	double vet[n];
	for(i=0;i<n;i++){
		cout << "Digite um numero: ";
		cin >> vet[i];
		soma = soma + vet[i];
	}

	cout << fixed << setprecision(1);
	
	cout << "VALORES = ";
	for(i=0;i<n;i++){
		cout << vet[i] << " ";
	}
	
	cout << fixed << setprecision(2);
	
	cout << endl << "SOMA = " << soma << endl;
	
	media = soma / n;
	
	cout << "MEDIA = " << media;


    return 0;
}
