package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaAlturas {

	public static void main(String[] args) {
		/*
		 * Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantas pessoas serao digitadas?");
		int n =sc.nextInt();
		int[] idade = new int[n];
		double[] altura = new double[n];
		String[] nome = new String[n];
		double media =0.0;
		double soma = 0.0;
		double percent =0.0;
		int contMenor = 0;
		for(int i=0;i<n;i++) {
			System.out.println("Dados da "+(i+1)+"a pessoa:");
			System.out.print("Nome: ");
			nome[i] = sc.next();
			System.out.print("Idade: ");
			idade[i] = sc.nextInt();
			
			if(idade[i]<16) {
				contMenor++;
			}
			
			System.out.print("Altura: ");
			altura[i] = sc.nextDouble();
			soma = soma + altura[i];
		}
	
		
		media = (double)soma / n;
		percent = (double)contMenor * 100 / n;
		
		System.out.println("Altura média: "+String.format("%.2f", media));
		System.out.println("Pessoas com menos de 16 anos: "+String.format("%.1f%%", percent));
		
		for(int i=0;i<n;i++) {
			if(idade[i]<16) {
				System.out.println(nome[i]);
			}
		}
		
		sc.close();
	}

}
