package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaMenorDeTres {

	public static void main(String[] args) {
		/*
		 * Problema "menor_de_tres"
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.
		 * */

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int a,b,c, menor;
		
		System.out.print("Primeiro valor: ");
		a = sc.nextInt();
		System.out.print("Segundo valor: ");
		b = sc.nextInt();
		System.out.print("Terceiro valor: ");
		c = sc.nextInt();
		
		menor = 0;
		
		if((a < b)&&(a < c)) {
			menor = a;
		}else if((b < a)&&(b < c)) {
			menor = b;
		}else {
			menor = c;
		}
		
		System.out.println("MENOR = "+menor);
	
		
		
		sc.close();
	}

}
