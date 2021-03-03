package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaSequenciaImpares {

	public static void main(String[] args) {
		/*
		 * Problema "sequencia_impares" (adaptado de URI 1067)
Leia um valor inteiro X. Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X,
se for o caso.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Digite o valor de X: ");
		int x = sc.nextInt();
		for(int i=0;i<x;i++) {
			if(i%2!=0) {
				System.out.println(i);
			}
		}

		sc.close();

	}

}
