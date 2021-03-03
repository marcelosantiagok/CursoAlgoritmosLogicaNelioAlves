package application;

import java.util.Locale;
import java.util.Scanner;

public class SenhaFixa {

	public static void main(String[] args) {
		
		/*
		 * Problema "senha_fixa" (adaptado de URI 1114)
Escreva um programa que repita a leitura de uma senha at� que ela seja v�lida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta � o valor 2002.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite a senha: ");
		int senha = sc.nextInt();
		while(senha!=2002) {
			System.out.print("Senha Invalida! Tente novamente: ");
			senha = sc.nextInt();
		}
		
		System.out.println("Acesso permitido!");
		

		sc.close();

	}

}
