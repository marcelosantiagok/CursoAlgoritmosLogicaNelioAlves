/*
Problema "dardo"
No arremesso de dardo, o atleta tem tr�s chances para lan�ar o dardo � maior dist�ncia que conseguir.
Voc� deve criar um programa para, dadas as medidas das tr�s tentativas de lan�amento, informar qual
foi a maior.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double a, b, c, maior;

	cout << "Digite as tres distancias: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if((a > b) && (a > c)){
		maior = a;
	}else if((b > a) && (b > c)){
		maior = b;
	}else{
		maior = c;
	}
	cout << fixed << setprecision(2);
	
	cout << "MAIOR DISTANCIA = " << maior;
	

    return 0;
}
