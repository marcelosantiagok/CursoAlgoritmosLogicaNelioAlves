package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaOperadora {

	public static void main(String[] args) {
		/*
		 * Problema "operadora"
Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int minutos;
		double valor = 50.00;
		System.out.println("Digite a quantidade de minutos: ");
		minutos = sc.nextInt();
		if(minutos > 100) {
			valor = valor + ((minutos - 100) * 2);
		}
		
		System.out.println("Valor a pagar: R$ "+String.format("%.2f", valor));
		
		sc.close();
	}

}
