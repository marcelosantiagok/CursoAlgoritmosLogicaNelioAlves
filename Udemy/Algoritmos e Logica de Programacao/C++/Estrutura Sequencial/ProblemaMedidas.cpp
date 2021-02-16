/*
Problema "medidas"
Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C
*/


#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	
	double a, b, c, quadrado, triangulo, trapezio;
	
	cout << "Digite a medida A: ";
	cin >> a;
	cout << "Digite a medida B: ";
	cin >> b;
	cout << "Digite a medida C: ";
	cin >> c;
	quadrado = pow(a,2);
	triangulo = (a * b) / 2;
	trapezio = ((a + b) * c) / 2;
	cout << fixed << setprecision(4);
	cout << "AREA DO QUADRADO = " << quadrado << endl;
	cout << "AREA DO TRIANGULO = " << triangulo << endl;
	cout << "AREA DO TRAPEZIO = " << trapezio;

    return 0;
}
