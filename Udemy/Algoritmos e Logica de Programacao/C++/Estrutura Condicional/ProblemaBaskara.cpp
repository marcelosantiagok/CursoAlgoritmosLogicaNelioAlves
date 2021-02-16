/*
Problema "baskara"
Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
*/


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	
	double a, b, c, x1, x2, delta;
	cout << "Coeficiente a: ";
	cin >> a;
	cout << "Coeficiente b: ";
	cin >> b;
	cout << "Coeficiente c: ";
	cin >> c;
	
	cout << fixed << setprecision(4);
	delta = pow(b,2) - 4 * a * c;
	x1 = (-b + sqrt(delta))/ (2 * a);
	x2 = (-b - sqrt(delta))/ (2 * a);
	
	if((delta > 0) && (a > 0)){
	
	cout << "X1 = " << x1 << endl;
	cout << "X2 = " << x2 << endl;
	
	}else{
		cout << "Esta equacao nao possui raizes reais";
	}
	
    return 0;
}
