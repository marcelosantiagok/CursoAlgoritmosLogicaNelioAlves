package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaPagamento {

	public static void main(String[] args) {
		/*
		 * Problema "pagamento"
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa, conforme exemplo.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		String nome;
		double valorPorHora, horas;
		
		System.out.print("Nome: ");
		nome = sc.nextLine();
		System.out.print("Valor por hora: ");
		valorPorHora = sc.nextDouble();
		System.out.print("Horas trabalhadas: ");
		horas = sc.nextDouble();
		System.out.println("O pagamento para "+nome+" deve ser "+String.format("%.2f", valorPorHora * horas));
		
		
		sc.close();

	}

}
