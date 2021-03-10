package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaTrocoVerificado {

	public static void main(String[] args) {
		/*
		 * Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double preco, dinheiro, troco;
		int qtd;
		
		System.out.print("Preço unitário do produto: ");
		preco = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		qtd = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiro = sc.nextDouble();
		
		if(dinheiro > preco * qtd) {
			troco = dinheiro - (preco * qtd);
			System.out.println("TROCO = "+String.format("%.2f", troco));
		}else {
			troco = (preco * qtd) - dinheiro;
			System.out.println("DINHEIRO INSUFICIENTE. FALTAM "+String.format("%.2f", troco)+" REAIS");
		}
		
		sc.close();

	}

}
