/*
Problema "senha_fixa" (adaptado de URI 1114)
Escreva um programa que repita a leitura de uma senha at� que ela seja v�lida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta � o valor 2002.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int senha;
	cout << "Digite a senha: ";
	cin >> senha;
	while(senha!=2002){
		cout << "Senha Invalida! Tente novamente: ";
		cin >> senha;
	}
	
	cout << "Acesso permitido!";
	

    return 0;
}
