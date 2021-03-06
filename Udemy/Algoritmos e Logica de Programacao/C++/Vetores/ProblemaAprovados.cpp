/*
Problema "aprovados"
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Quantos alunos serao digitados? ";
	int n=0;
	cin >> n;
	int i =0;
	string nome[n];
	double nota1[n], nota2[n], media;
	for(i=0;i<n;i++){
		cout << "Digite nome, primeira e segunda nota do "<<i+1 << "o aluno:" <<endl;
		cin.ignore(INT_MAX, '\n');
        getline(cin,nome[i]);
		cin >> nota1[i];
		cin >> nota2[i];
		
	}
	
	cout << "Alunos aprovados: " << endl;
	for(i=0;i<n;i++){
		media = (nota1[i] + nota2[i]) / 2.0;
		if(media>=6.0){
			cout << nome[i] << endl;
		}
	}
	

    return 0;
}
