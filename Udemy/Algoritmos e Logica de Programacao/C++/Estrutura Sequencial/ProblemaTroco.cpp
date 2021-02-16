/*
Problema "troco"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double preco, dinheiro, troco;
	int qtd;
	
	cout << "Preço unitário do produto: ";
	cin >> preco;
	cout << "Quantidade comprada: ";
	cin >> qtd;
	cout << "Dinheiro recebido: ";
	cin >> dinheiro;
	cout << fixed << setprecision(2);
	troco = dinheiro - (preco * qtd);
	cout << "TROCO = " << troco;

    return 0;
}
