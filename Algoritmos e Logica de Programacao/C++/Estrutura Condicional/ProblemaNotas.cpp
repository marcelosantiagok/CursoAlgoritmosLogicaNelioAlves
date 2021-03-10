/*
Problema "notas"
Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Digite a primeira nota: ";
	double nota1, nota2;
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	cout << fixed << setprecision(1);
	if((nota1+nota2) > 60.00){
		cout << "NOTA FINAL = " << nota1+nota2 << endl;
	}else{
		cout << "NOTA FINAL = " << nota1+nota2 << endl;
		cout << "REPROVADO";
	}

    return 0;
}
