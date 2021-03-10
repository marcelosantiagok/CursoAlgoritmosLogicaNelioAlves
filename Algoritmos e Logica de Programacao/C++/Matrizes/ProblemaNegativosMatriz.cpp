/*
Problema "negativos_matriz"
Ler dois n�meros M e N (m�ximo = 10), e depois ler uma matriz MxN de n�meros inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os n�meros negativos da matriz.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Qual a quantidade de linhas da matriz? ";
	int m = 0;
	cin >> m;
	cout << "Qual a quantidade de colunas da matriz? ";
	int n=0;
	cin >> n;
	int i =0;
	int j=0;
	int vet[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		cout << "Elemento ["<< i << ","<< j <<"]: ";
		cin >> vet[i][j];
		}
	}
	
	cout << "VALORES NEGATIVOS: " << endl;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(vet[i][j]<0){
				cout << vet[i][j] << endl;
			}
		}
	}

    return 0;
}
