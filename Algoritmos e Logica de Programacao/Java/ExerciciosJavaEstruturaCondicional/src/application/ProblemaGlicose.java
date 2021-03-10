package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaGlicose {

	public static void main(String[] args) {
		/*
		 * Problema "glicose"
Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.
Normal Até 100 mg/dl
Elevado Maior que 100 até 140 mg/dl
Diabetes Maior de 140 mg/dl
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Digite a medida da glicose: ");
		double glicose = sc.nextDouble();
		if(glicose < 101.00) {
			System.out.println("Classificacao: normal ");
		}else if(glicose < 141.00) {
			System.out.println("Classificacao: elevado ");
		}else {
			System.out.println("Classificacao: diabetes ");
		}
		
		sc.close();

	}

}
