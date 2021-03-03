package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaCrescente {

	public static void main(String[] args) {
		/*
		 * Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		int x,y;
		System.out.println("Digite dois numeros: ");
		x = sc.nextInt();
		y = sc.nextInt();
		while(x!=y) {
			if(x>y) {
				System.out.println("DECRESCENTE!");
			}else {
				System.out.println("CRESCENTE!");
			}
			System.out.println("Digite outros dois numeros: ");
			x = sc.nextInt();
			y = sc.nextInt();
		}
		
		

		sc.close();
	}

}
