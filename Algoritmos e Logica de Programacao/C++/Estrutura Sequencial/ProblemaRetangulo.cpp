/*
Problema "retangulo"
Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	double base, altura, area, perimetro, diagonal;
	cout << "Base do retangulo: ";
	cin >> base;
	cout << "Altura do retangulo: ";
	cin >> altura;
	area = base * altura;
	cout << fixed << setprecision(4);
	cout << "AREA = " << area << endl;
	perimetro = 2 * (base + altura);
	cout << "PERIMETRO = " << perimetro << endl;
	diagonal = sqrt(pow(base,2) + pow(altura,2));
	cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}
