package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaMediaPonderada {

	public static void main(String[] args) {
		/*
		 * Problema "media_ponderada" (adaptado de URI 1079)
Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		double media,a,b,c;
		a =0.0;
		b=0.0;
		c=0.0;
		System.out.print("Quantos casos voce vai digitar? ");
		int n = sc.nextInt();
		for(int i=0;i<n;i++) {
			System.out.println("Digite tres numeros: ");
			a = sc.nextDouble();
			b = sc.nextDouble();
			c = sc.nextDouble();
			media = ((a*2)+(b*3)+(c*5))/10;
			System.out.println("MEDIA = "+String.format("%.1f", media));
		}

		sc.close();

	}

}
