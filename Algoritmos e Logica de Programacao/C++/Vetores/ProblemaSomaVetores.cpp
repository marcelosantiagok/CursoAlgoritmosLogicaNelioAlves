/*
Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Quantos valores vai ter cada vetor? ";
	int n =0;
	cin >> n;
	int i =0;
	int a[n];
	int b[n];
	int c[n];
	cout << "Digite os valores do vetor A: " << endl;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	cout << "Digite os valores do vetor B: " << endl;
	for(i=0;i<n;i++){
		cin >> b[i];
	}
	
	for(i=0;i<n;i++){
		c[i] = a[i] + b[i];
	}
	
	cout << "VETOR RESULTANTE: " << endl;
	
	for(i=0;i<n;i++){
		c[i] = a[i] + b[i];
	}
	
	for(i=0;i<n;i++){
		cout << c[i] << endl;
	}
	
    return 0;
}
