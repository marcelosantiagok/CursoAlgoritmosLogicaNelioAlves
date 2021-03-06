package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaNegativos {

	public static void main(String[] args) {
		/*
		 * Problema "negativos"
Fa�a um programa que leia um n�mero inteiro positivo N (m�ximo = 10) e depois N n�meros inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os n�meros negativos lidos.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantos numeros voce vai digitar? ");
		int n =sc.nextInt();
		int vet[] = new int[n];
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}
		
		System.out.println("NUMEROS NEGATIVOS: ");
		for(int i=0;i<n;i++) {
			if(vet[i]<0) {
				System.out.println(vet[i]);
			}
		}
		
		
		sc.close();
	}

}
