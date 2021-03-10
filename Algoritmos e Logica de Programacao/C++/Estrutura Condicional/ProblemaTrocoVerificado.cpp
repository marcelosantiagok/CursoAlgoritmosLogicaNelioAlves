/*
Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double preco, dinheiro,troco;
	int qtd;

	cout << "Preço unitário do produto: ";
	cin >> preco;
	cout << "Quantidade comprada: ";
	cin >> qtd;
	cout << "Dinheiro recebido: ";
	cin >> dinheiro;
	
	cout << fixed << setprecision(2);
	if((preco * qtd) < dinheiro){
		troco = dinheiro - (preco * qtd);
		cout << "TROCO = " << troco;
	}else{
		troco = (preco * qtd) - dinheiro;
		cout << "DINHEIRO INSUFICIENTE. FALTAM " << troco << " REAIS";
	}
	

    return 0;
}
