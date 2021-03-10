package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaSomaImpares {

	public static void main(String[] args) {
		/*
		 * Problema "soma_impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite dois numeros: ");
		int x = sc.nextInt();
		int y = sc.nextInt();
		int troca = 0;
		int soma =0;
		if(x>y) {
			troca = x;
			x = y;
			y = troca;
		}
		for(int i=x+1;i<y;i++) {
			if(i%2!=0) {
				soma = soma + i;
			}
		}
		
		System.out.println("SOMA DOS IMPARES = "+soma);
		

		sc.close();

	}

}
