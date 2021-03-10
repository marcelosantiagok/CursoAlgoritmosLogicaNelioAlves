package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaFatorial {

	public static void main(String[] args) {
		/*
		 * Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Digite o valor de N: ");
		int n = sc.nextInt();
		int fat = 1;
		for(int i = n;i>0;i--) {
			fat = fat * i;
		}
		
		System.out.println("FATORIAL = "+fat);

		sc.close();

	}

}
