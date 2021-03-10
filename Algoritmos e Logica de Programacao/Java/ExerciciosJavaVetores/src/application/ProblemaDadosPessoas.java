package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaDadosPessoas {

	public static void main(String[] args) {
		/*
		 * Problema "dados_pessoas"
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
		 * */

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantas pessoas serao digitadas? ");
		int n = sc.nextInt();
		double[] altura = new double[n];
		char[] genero = new char[n];
		double maior =0.0;
		double menor = 0.0;
		double mediaMulher = 0.0;
		double somaMulher = 0.0;
		int contMulher = 0;
		int contHomem = 0;
		for(int i=0;i<n;i++) {
			System.out.print("Altura da "+(i+1)+"a pessoa: ");
			altura[i] = sc.nextDouble();
			System.out.print("Genero da "+(i+1)+"a pessoa: ");
			genero[i] = sc.next().charAt(0);
			if((genero[i]=='F')||(genero[i]=='f')) {
				somaMulher = somaMulher + altura[i];
				contMulher++;
			}else if((genero[i]=='M')||(genero[i]=='m')) {
				contHomem++;
			}
		}
		
		maior = altura[0];
		menor = altura[0];
		
		for(int i=0;i<n;i++) {
			if(altura[i]>maior) {
				maior = altura[i];
			}
			
			if(altura[i]<menor) {
				menor = altura[i];
			}
		}
		
		mediaMulher = (double)somaMulher / contMulher;
		
		System.out.println("Menor altura = "+String.format("%.2f", menor));
		System.out.println("Maior altura = "+String.format("%.2f", maior));
		System.out.println("Media das alturas das mulheres = "+String.format("%.2f", mediaMulher));
		System.out.println("Numero de homens = "+contHomem);
		
		sc.close();
	}

}
