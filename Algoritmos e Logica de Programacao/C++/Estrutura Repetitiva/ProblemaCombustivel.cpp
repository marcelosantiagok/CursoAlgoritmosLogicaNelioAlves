/*
Problema "combustivel" (adaptado de URI 1134)
Um posto de combust�veis deseja determinar qual de seus produtos tem a prefer�ncia de seus clientes.
Escreva um algoritmo para ler o tipo de combust�vel abastecido (codificado da seguinte forma:
1.�lcool 2.Gasolina 3.Diesel 4.Fim). Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a
4) deve ser solicitado um novo c�digo (at� que seja v�lido). O programa ser� encerrado quando o
c�digo informado for o n�mero 4, devendo ent�o mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combust�vel.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int codigo,a,g,d;
	
	cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
	cin >> codigo;
	a =0;
	g =0;
	d =0;
	
	while(codigo!=4){
		if(codigo ==1){
			a = a + 1;
		}else if(codigo == 2){
			g = g + 1;
		}else if(codigo == 3){
			d = d + 1;
		}
			cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
			cin >> codigo;
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << a << endl;
	cout << "Gasolina: " << g << endl;
	cout << "Diesel: " << d << endl;
	

    return 0;
}
