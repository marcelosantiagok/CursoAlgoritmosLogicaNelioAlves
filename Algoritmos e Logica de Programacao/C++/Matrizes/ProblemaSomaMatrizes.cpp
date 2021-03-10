/*
Problema "soma_matrizes"
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Quantas linhas vai ter cada matriz? ";
	int m = 0;
	cin >> m;
	cout << "Quantas colunas vai ter cada matriz? ";
	int n=0;
	cin >> n;
	int i=0;
	int j=0;
	int matA[m][n];
	int matB[m][n];
	int matC[m][n];
	cout << "Digite os valores da matriz A: " << endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout << "Elemento [" << i << "," << j << "]: ";
			cin >> matA[i][j];
		}
	}
	
	cout << "Digite os valores da matriz B: " << endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout << "Elemento ["<< i << ","<< j << "]: ";
			cin >> matB[i][j];
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			matC[i][j] = matA[i][j] + matB[i][j];
			cout << matC[i][j] << " ";
		}
		cout << endl;
	}

    return 0;
}
