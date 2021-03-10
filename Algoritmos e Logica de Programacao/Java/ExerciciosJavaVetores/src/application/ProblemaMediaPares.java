package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaMediaPares {

	public static void main(String[] args) {
		/*
		 * Problema "media_pares "
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		int n = sc.nextInt();
		int[] numero = new int[n];
		double media = 0.0;
		double somaPares = 0.0;
		int contPares =0;
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			numero[i] = sc.nextInt();
			if(numero[i]%2==0) {
				somaPares = somaPares + numero[i];
				contPares++;
			}
		}
		
		if(contPares ==0) {
			System.out.println("NENHUM NUMERO PAR");
		}else {
			media = (double)somaPares / contPares;
			System.out.println("MEDIA DOS PARES = "+String.format("%.1f", media));
		}
		
		sc.close();
	}

}
