/*
Problema "media_pares "
Fazer um programa para ler um vetor de N n�meros inteiros. Em seguida, mostrar na tela a m�dia
aritm�tica somente dos n�meros pares lidos, com uma casa decimal. Se nenhum n�mero par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Quantos elementos vai ter o vetor? ";
	int n =0;
	cin >> n;
	int i =0;
	int vet[n];
	int contPar =0;
	double somaPar = 0.0;
	double media = 0.0;
	for(i=0;i<n;i++){
		cout << "Digite um numero: ";
		cin >> vet[i];
		if(vet[i]%2==0){
			somaPar = somaPar + vet[i];
			contPar = contPar + 1;
		}		
	}
	
	media = (double)somaPar / contPar;
	
	cout << fixed << setprecision(1);
	
	if(contPar == 0){
		cout << "NENHUM NUMERO PAR";
	}else{
		cout << "MEDIA DOS PARES = " << media;
	}
	

    return 0;
}
