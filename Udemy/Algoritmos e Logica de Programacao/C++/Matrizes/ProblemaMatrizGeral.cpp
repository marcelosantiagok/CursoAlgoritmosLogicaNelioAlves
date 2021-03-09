/*
Problema "matriz_geral"
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
*/


#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	
	cout << "Qual a ordem da matriz? ";
	int n =0;
	cin >> n;
	double mat[n][n];
	int i=0;
	int j=0;
	double soma = 0.0;
	int escolha =0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "Elemento [" << i << "," << j << "]: ";
			cin >> mat[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(mat[i][j]>0.0){
				soma = soma + mat[i][j];
			}
		}
	}
	cout << fixed << setprecision(1);
	cout << "SOMA DOS POSITIVOS " << soma << endl;
	
	printf("Escolha uma linha: ");
	cin >> escolha;	
	printf("LINHA ESCOLHIDA: ");

    for (i=0; i<n; i++) {
        cout << mat[escolha][i] << " ";
    }
    cout << endl;
    cout << "Escolha uma coluna: ";
	cin >> escolha;
	
	cout << "COLUNA ESCOLHIDA: ";
    
    for (i=0; i<n; i++) {
        cout << mat[i][escolha] << " ";
    }
    
    cout << endl << "DIAGONAL PRINCIPAL: ";

    for (i=0; i<n; i++) {
        cout << mat[i][i] << " ";
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (mat[i][j] < 0) {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }
    cout << endl << "MATRIZ ALTERADA: " << endl;


    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << mat[i][j] << " ";
        }
		cout << endl;
    }

    return 0;
}
