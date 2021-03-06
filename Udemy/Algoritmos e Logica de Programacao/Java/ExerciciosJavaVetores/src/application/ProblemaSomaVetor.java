package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaSomaVetor {

	public static void main(String[] args) {
		/*
		 * Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantos numeros voce vai digitar? ");
		int n =sc.nextInt();
		double[] vet = new double[n];
		double soma =0.0;
		double media =0.0;
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
			soma = soma + vet[i];
		}
		
		media = (double)soma / n;
		System.out.print("VALORES = ");
		for(int i=0;i<n;i++) {
			System.out.print(String.format("%.2f ", vet[i]));
		}
		System.out.println();
		
		System.out.println("SOMA = "+String.format("%.2f", soma));
		System.out.println("MEDIA = "+String.format("%.2f", media));
		
		sc.close();
	}

}
