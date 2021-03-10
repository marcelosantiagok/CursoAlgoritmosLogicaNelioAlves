/*
Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n,i,j ,qtd;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int elemento[n][n];

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "Elemento " << i << ","<< j << "]: ";
			cin >> elemento[i][j];
			if(elemento[i][j]<0){
				qtd = qtd+1;
			}
		}
	}
	
	cout << "DIAGONAL PRINCIPAL: " << endl;
	for(i=0;i<n;i++){
		printf("%d ",elemento[i][i]);
	}
	cout << endl;
	cout << "QUANTIDADE DE NEGATIVOS = " << qtd;

    return 0;
}
