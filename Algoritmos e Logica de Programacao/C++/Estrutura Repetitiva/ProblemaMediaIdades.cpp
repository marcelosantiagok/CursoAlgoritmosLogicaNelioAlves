/*
Problema "media_idades"
Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa. Calcular
e imprimir a idade m�dia deste grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	

	int cont,idades;
	double soma,media;
	cout << "Digite as idades: " << endl;
	cin >> idades;
	cont = 0;

	cout << fixed << setprecision(2);
	
	if(idades < 0){
		cout << "IMPOSSIVEL CALCULAR";
	}else{
		
		while(idades>=0){
		soma = soma + idades;
		cont = cont + 1;
		cin >> idades;
		}
		media = soma / cont;
		cout << "MEDIA = " <<media;

	}
	
		
	

	

	
	

    return 0;
}
