/*
Problema "abaixo_da_media"
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Quantos elementos vai ter o vetor? ";
	int n =0;
	cin >> n;
	int i =0;
	double vet[n];
	double media = 0.0;
	double soma = 0.0;
	for(i=0;i<n;i++){
		cout << "Digite um numero: ";
		cin >> vet[i];
		soma = soma + vet[i];
	}
	
	media = soma / n;
	cout << fixed << setprecision(3);
	
	cout << "MEDIA DO VETOR = " << media << endl;
	
	cout << "ELEMENTOS ABAIXO DA MEDIA: " << endl;
	
	cout << fixed << setprecision(1);
	
	for(i=0;i<n;i++){
		if(vet[i]<media){
			cout << vet[i] << endl;
		}
	}
	


    return 0;
}
