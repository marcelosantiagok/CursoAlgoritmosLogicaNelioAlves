/*
Problema "aumento" (adaptado de URI 1048)
Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.

Salário atual Aumento
Até R$ 1000.00 20%
Acima de R$ 1000.00 até R$ 3000.00 15%
Acima de R$ 3000.00 até R$ 8000.00 10%
Acima de R$ 8000.00 5%
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double salario, novo, aumento;
	int porcentagem;
	cout << "Digite o salario da pessoa: ";
	cin >> salario;
	if(salario < 1001.00){
		porcentagem = 20;
	}else if(salario < 3001.00){
		porcentagem = 15;
	}else if(salario < 8001.00){
		porcentagem = 10;
	}else{
		porcentagem = 5;
	}
	aumento = salario * porcentagem / 100;
	novo = salario + aumento;
	
	cout << fixed << setprecision(2);
	cout << "Novo salario = R$ " << novo << endl;
	cout << "Aumento = R$ " << aumento << endl;
	cout << "Porcentagem = " << porcentagem <<"%";

    return 0;
}
