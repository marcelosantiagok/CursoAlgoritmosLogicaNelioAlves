/*
Problema "comerciante"
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "Serao digitados dados de quantos produtos? ";
	int n=0;
	cin >> n;
	int i=0;
	string nome[n];
	double pcompra[n];
	double pvenda[n];
	double somaCompra = 0.0;
	double somaVenda =0.0;
	double lucroTotal =0.0;
	int luc10 =0;
	int luc20 =0;
	int luc21 =0;
	double calc =0.0;
	for(i=0;i<n;i++){
		cout << "Produto "<<i+1<<": "<<endl;
		cout << "Nome: ";
		cin >> nome[i];
		cout << "Preco de compra: ";
		cin >> pcompra[i];
		somaCompra = somaCompra + pcompra[i];
		cout << "Preco de venda: ";
		cin >> pvenda[i];
		somaVenda = somaVenda + pvenda[i];
		calc = (pvenda[i] * 100 / pcompra[i])-100;
		if(calc<10){
			luc10++;
		}else if(calc<21){
			luc20++;
		}else{
			luc21++;
		}
	}
	
	lucroTotal = somaVenda - somaCompra;
	cout << fixed << setprecision(2);
	
	cout << "RELATORIO: " << endl;
	cout << "Lucro abaixo de 10%: "<<luc10 <<endl;
	cout << "Lucro entre 10% e 20%: "<<luc20 <<endl;
	cout << "Lucro acima de 20%: " <<luc21 <<endl;
	cout << "Valor total de compra: " << somaCompra << endl;
	cout << "Valor total de venda: " << somaVenda << endl;
	cout << "Lucro total: " << lucroTotal;

    return 0;
}
