/*
Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int m=0, n =0, i=0, j=0;
	double soma = 0.0;
	cout << "Qual a quantidade de linhas da matriz? ";
	cin >> m;
	cout << "Qual a quantidade de colunas da matriz? ";
	cin >>n;
	
	double vet[m][n], vetorG[m];
	
	for(i=0;i<m;i++){
		cout <<"Digite os elementos da " << (i+1) << "a. linha: " << endl;
		for(j=0;j<n;j++){
			cin >> vet[i][j];
		}
	}
	
	for(i=0;i<m;i++){
		soma = 0;
		for(j=0;j<n;j++){
			soma = soma + vet[i][j];
		}
		vetorG[i] = soma;
	}
	
	 cout << "VETOR GERADO: " << endl;
	
	cout << fixed << setprecision(2);
	
	for(i=0;i<m;i++){
		cout << vetorG[i] << endl;
	}
	

    return 0;
}
