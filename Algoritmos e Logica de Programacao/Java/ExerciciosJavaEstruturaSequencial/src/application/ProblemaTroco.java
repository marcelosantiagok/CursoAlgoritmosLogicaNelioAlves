package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaTroco {

	public static void main(String[] args) {
		/*
		 * Problema "troco"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o pre�o unit�rio do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double preco, dinheiro, troco;
		int qtd;
		
		System.out.print("Pre�o unit�rio do produto: ");
		preco = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		qtd = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiro = sc.nextDouble();
		
		troco = dinheiro - preco * qtd;
		System.out.println("TROCO = "+String.format("%.2f", troco));
		
		sc.close();
	}

}
