package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaSomaLinhas {

	public static void main(String[] args) {
		/*
		 * Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
        System.out.print("Qual a quantidade de linhas da matriz? ");
        int m = sc.nextInt();
        System.out.print("Qual a quantidade de colunas da matriz? ");
        int n = sc.nextInt();
        double[][] mat = new double[m][n];
        double[] vet = new double[m];
        double soma = 0.0;
        for(int i = 0; i < m; i++)
        {
            System.out.println("Digite os elementos da "+(i+1)+"a. linha: ");
            for (int j=0; j < n; j++)
            {
                mat[i][j] = sc.nextDouble();
            }
        }

        System.out.println("VETOR GERADOR: ");

        for (int i = 0; i < m; i++)
        {
            soma = 0;
            for (int j = 0; j < n; j++)
            {
                soma = soma + mat[i][j];
            }
            vet[i] = soma;
        }

        for (int i = 0; i < m; i++)
        {
            System.out.println(vet[i]);
        }
		
		sc.close();

	}

}
