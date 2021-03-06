package application;

import java.util.Locale;
import java.util.Scanner;

public class NumerosPares {

	public static void main(String[] args) {
		/*
		 * Problema "numeros_pares"
Fa�a um programa que leia N n�meros inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os n�meros pares, e tamb�m a quantidade de n�meros pares.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantos numeros voce vai digitar? ");
		int n = sc.nextInt();
		int[] numero = new int[n];
		int cont =0;
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			numero[i] = sc.nextInt();
		}
		
		System.out.println("NUMEROS PARES: ");
		for(int i=0;i<n;i++) {
			if(numero[i]%2==0) {
				System.out.print(numero[i]+" ");
				cont++;
			}
		}
		
		System.out.println();
		
		System.out.println("QUANTIDADE DE PARES = "+cont);
		
		sc.close();
	}

}
