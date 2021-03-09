/*
Problema "acima_diagonal"
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	cout << "Qual a ordem da matriz? ";
	int n = 0;
	cin >> n;
	int i=0;
	int j=0;
	int soma =0;
	int vet[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "Elemento [" << i << "," << j << "]: ";
			cin >> vet[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i!=j)&&(j>i)){
				soma = soma + vet[i][j];
			}
		}
	}
	
	cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma;
    return 0;
}
