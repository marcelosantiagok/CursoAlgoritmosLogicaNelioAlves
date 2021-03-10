/*
Problema "experiencias" (adaptado de URI 1094)
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n, c,r,s,total,qtd;
	double percent;
	char tipo;
	total=0;
	qtd=0;
	c =0;
	r=0;
	s=0;
	
	cout << "Quantos casos de teste serao digitados? ";
	cin >> n;
	
	for(int i=0;i<n;i++){
		cout << "Quantidade de cobaias: ";
		cin >> qtd;
		total = total + qtd;
		cout << "Tipo de cobaia: ";
		cin >> tipo;
		if((tipo == 'C')||(tipo == 'c')){
			c = c + qtd;
		}else if((tipo == 'R')||(tipo=='r')){
			r = r + qtd;
		}else if((tipo == 'S')||(tipo == 's')){
			s = s + qtd;
		}
	}
	
	cout << fixed << setprecision(2);
	cout << "RELATORIO FINAL: " << endl;
	cout << "Total: "<< total << " cobaias" << endl;
	cout << "Total de coelhos: " << c <<endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	
	percent = double(c * 100.00) / total;
	cout << "Percentual de coelhos: " << percent << endl;
	
	percent = double(r * 100.00) / total;
	cout << "Percentual de ratos: " << percent << endl;
	
	percent = double(s * 100.00)/ total;
	cout << "Percentual de sapos: " << percent << endl;
	

    return 0;
}
