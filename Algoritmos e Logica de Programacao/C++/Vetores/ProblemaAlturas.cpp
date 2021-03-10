/*
Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n= 0;
	cout << "Quantas pessoas serao digitadas? ";
	cin >> n;
	int i =0;
	int idade[50];
	double altura[50];
	string nome[n];
	double alturaMedia = 0.0;
	double menor = 0.0;
	int contMenor =0;
	double somaAltura = 0.0;
	for(i=0;i<n;i++){
		cout << "Dados da " << i+1 << "a pessoa: " << endl;
		cout << "Nome: ";
		cin >> nome[i];
		cout << "Idade: ";
		cin >> idade[i];
		cout << "Altura: ";
		cin >> altura[i];
	
	}
	
	
	for(i=0;i<n;i++){
		if(idade[i]<16){
			contMenor = contMenor +1;
		}
		somaAltura = somaAltura + altura[i];
	}
	
	alturaMedia = somaAltura / n;
	
	menor = double(contMenor * 100.00)/ n;
	
	cout << fixed << setprecision(2);
	
	cout << "Altura media: " << alturaMedia << endl;
	
	cout << fixed << setprecision(1);
	
	cout << "Pessoas com menos de 16 anos: " << menor<< "%" << endl;
	
	for(i=0;i<n;i++){
		if(idade[i]<16){
			cout << nome[i] << endl;
		}
	}

    return 0;
}
