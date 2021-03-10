package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaAbaixoDaMedia {

	public static void main(String[] args) {
		/*
		 * Problema "abaixo_da_media"
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		int n = sc.nextInt();
		double media = 0.0;
		double soma =0.0;
		double[] numero = new double[n];
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			numero[i] = sc.nextDouble();
			soma = soma + numero[i];
		}
		
		media = (double)soma / n;
		System.out.println("MEDIA DO VETOR = "+String.format("%.3f", media));
		System.out.println("ELEMENTOS ABAIXO DA MEDIA: ");
		for(int i=0;i<n;i++) {
			if(numero[i]<media) {
				System.out.println(numero[i]);
			}
		}
		
		sc.close();
	}

}
