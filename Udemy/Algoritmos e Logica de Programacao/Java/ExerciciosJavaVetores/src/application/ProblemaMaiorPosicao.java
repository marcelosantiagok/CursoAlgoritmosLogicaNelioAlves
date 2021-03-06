package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaMaiorPosicao {

	public static void main(String[] args) {
		/*
		 * Problema "maior_posicao"
Fa�a um programa que leia N n�meros reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior n�mero do vetor (supor n�o haver empates). Mostrar tamb�m a posi��o do maior elemento,
considerando a primeira posi��o como 0 (zero).
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quanto numeros voce vai digitar? ");
		int n = sc.nextInt();
		double[] vet = new double[n];
		double soma =0.0;
		int posicao =0;
		double maior = 0.0;
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
			soma = soma + vet[i];
		}
		
		maior = vet[0];
		
		for(int i=0;i<n;i++) {
			if(vet[i]>maior) {
				maior = vet[i];
				posicao = i;
			}
		}
		
		System.out.println("MAIOR VALOR = "+maior);
		System.out.println("POSICAO DO MAIOR VALOR = "+posicao);
		
		sc.close();

	}

}
