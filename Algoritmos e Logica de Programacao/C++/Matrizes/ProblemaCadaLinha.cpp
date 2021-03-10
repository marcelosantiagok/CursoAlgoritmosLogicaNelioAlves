/*
Problema "cada_linha"
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates.
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
	int novo[n];
	int vet[n][n];
	int maior = 0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "Elemento ["<< i << "," << j << "]: ";
			cin >> vet[i][j];
		}
	}
	
	
	
	for(i=0;i<n;i++){
		maior = vet[i][0];
		for(j=0;j<n;j++){
			if(vet[i][j]>maior){
				maior = vet[i][j];
			}
		}
		novo[i] = maior;
	}
	
	cout << "MAIOR ELEMENTO DE CADA LINHA: " << endl;
	
	for(i=0;i<n;i++){
		cout << novo[i] << endl;
	}
	
	
    return 0;
}
