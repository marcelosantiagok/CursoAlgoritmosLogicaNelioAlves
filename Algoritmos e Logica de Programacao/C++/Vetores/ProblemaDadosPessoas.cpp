/*
Problema "dados_pessoas"
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Quantas pessoas serao digitadas? ";
	int n=0;
	int i=0;
	cin >> n;
	double altura[n];
	char genero[n];
	double menor = 0.0, maior = 0.0;
	double mediaMulher = 0.0;
	double somaMulher = 0.0;
	int contMulher = 0;
	int contHomem = 0;
	for(i=0;i<n;i++){
		cout << "Altura da " << i+1<< "a pessoa: ";
		cin >> altura[i];
		cout << "Genero da "<< i+1 << "a pessoa: ";
		cin >> genero[i];
		if((genero[i] == 'F')||(genero[i] =='f')){
			somaMulher = somaMulher + altura[i];
			contMulher = contMulher+1;
		}else if((genero[i] == 'M')||(genero[i] =='m')){
			contHomem = contHomem + 1;
		}
	}
	
	menor = altura[0];
	maior = altura[0];
	
	for(i=0;i<n;i++){
		if(altura[i]>maior){
			maior = altura[i];
		}
		
		if(altura[i]<menor){
			menor = altura[i];
		}
				
	}
	
	mediaMulher = (double)somaMulher / contMulher;
	
	cout << fixed << setprecision(2);
	
	cout << "Menor altura = " << menor << endl;
	cout << "Maior altura = " << maior <<endl;
	cout << "Media das alturas das mulheres = " << mediaMulher << endl;
	cout << "Numero de homens = " << contHomem;

    return 0;
}
