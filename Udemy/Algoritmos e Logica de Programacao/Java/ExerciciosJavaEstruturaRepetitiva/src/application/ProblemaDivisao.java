package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaDivisao {

	public static void main(String[] args) {
		/*
		 * Problema "divisao" (adaptado de URI 1116)
Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantos casos voce vai digitar?");
		int n = sc.nextInt();
		double numerador,denominador,divisao;
		for(int i=0;i<n;i++) {
			System.out.print("Entre com o numerador: ");
			numerador =sc.nextDouble();
			System.out.print("Entre com o denominador: ");
			denominador = sc.nextDouble();
			if(numerador < 0) {
				System.out.println("DIVISAO IMPOSSIVEL");
			}else {
				divisao = numerador/denominador;
				System.out.println("DIVISAO = "+String.format("%.2f", divisao));
			}
		}

		sc.close();

	}

}
