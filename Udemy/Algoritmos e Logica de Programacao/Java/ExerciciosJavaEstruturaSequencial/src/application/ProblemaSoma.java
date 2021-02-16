package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaSoma {

	public static void main(String[] args) {
	/*
	 * Problema "soma"
Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números.
	 * */

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int x, y;
		
		System.out.print("Digite o valor de X: ");
		x = sc.nextInt();
		System.out.print("Digite o valor de Y: ");
		y = sc.nextInt();
		System.out.println("SOMA = "+ (x+y));
		
		sc.close();
		
	}

}
