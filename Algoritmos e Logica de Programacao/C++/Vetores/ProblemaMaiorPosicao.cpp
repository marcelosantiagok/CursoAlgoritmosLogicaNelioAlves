/*
Problema "maior_posicao"
Fa�a um programa que leia N n�meros reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior n�mero do vetor (supor n�o haver empates). Mostrar tamb�m a posi��o do maior elemento,
considerando a primeira posi��o como 0 (zero).
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	cout << "Quanto numeros voce vai digitar? ";
	int n =0;
	cin >> n;
	int i =0;
	double vet[n];
	double maiorValor =0.0;
	int posicao = 0;
	for(i=0;i<n;i++){
		cout << "Digite um numero: ";
		cin >> vet[i];
		if(vet[i]>maiorValor){
			maiorValor = vet[i];
			posicao = i;
		}
	}

	cout << fixed << setprecision(1);
	cout << "MAIOR VALOR = " << maiorValor << endl;
	cout << "POSICAO DO MAIOR VALOR = " << posicao;

    return 0;
}
