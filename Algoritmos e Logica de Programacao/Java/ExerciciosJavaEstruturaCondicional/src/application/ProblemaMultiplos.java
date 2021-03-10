package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaMultiplos {

	public static void main(String[] args) {
		/*
		 * Problema "multiplos" (adaptado de URI 1044)
Fazer um programa para ler dois n�meros inteiros, e dizer se um n�mero � m�ltiplo do outro. Os
n�meros podem ser digitados em qualquer ordem.
		 * */

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int a, b;
		
		System.out.println("Digite dois numeros inteiros: ");
		a = sc.nextInt();
		b = sc.nextInt();
		
		if((a % b == 0)||( b % a == 0)){
			System.out.println("Sao multiplos");
		}else {
			System.out.println("Nao sao multiplos");
		}
		
		sc.close();
		
	}

}
