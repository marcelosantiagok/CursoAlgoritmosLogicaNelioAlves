package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaParesConsecutivos {

	public static void main(String[] args) {
		/*
		 * Problema "pares_consecutivos" (adaptado de URI 1159)
O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X
for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X
, se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação:
4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a
soma de 12+14+16+18+20.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite um numero inteiro: ");
		int n = sc.nextInt();
		int soma = 0;
		while(n!=0) {
			if(n%2!=0) {
				n= n+1;
			}
			soma = n * 5 + 20;
			System.out.println("SOMA = "+soma);
			System.out.println("Digite um numero inteiro: ");
			n = sc.nextInt();
		}
		

		sc.close();

	}

}
