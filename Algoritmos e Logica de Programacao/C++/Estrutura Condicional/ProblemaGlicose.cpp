/*
Problema "glicose"
Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.
Normal Até 100 mg/dl
Elevado Maior que 100 até 140 mg/dl
Diabetes Maior de 140 mg/dl
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double glicose;

	cout << "Digite a medida da glicose: ";
	cin >> glicose;
	
	if(glicose < 101){
		cout << "Classificacao: normal";
	}else if(glicose < 141){
		cout << "Classificacao: elevado";
	}else{
		cout << "Classificacao: diabetes";
	}

    return 0;
}
