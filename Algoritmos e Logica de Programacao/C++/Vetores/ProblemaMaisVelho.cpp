/*
Problema "mais_velho"
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Quantas pessoas voce vai digitar? ";
	int n=0;
	int i=0;
	cin >> n;
	int idade[n];
	string nome[n];
	int maior = 0;
	int posicao = 0;
	for(i=0;i<n;i++){
		cout << "Dados da "<<i+1 << "a pessoa: " << endl;
		cout << "Nome: ";
		cin >> nome[i];
		cout << "Idade: ";
		cin >> idade[i];
		if(idade[i]>maior){
			maior = idade[i];
			posicao = i;
		}
	}
	
	cout << "PESSOA MAIS VELHA: " << nome[posicao];
	
	

    return 0;
}
