package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaSomaMatrizes {

	public static void main(String[] args) {
		/*
		 * Problema "soma_matrizes"
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantas linhas vai ter cada matriz? ");
        int m = sc.nextInt();
        System.out.print("Quantas colunas vai ter cada matriz? ");
        int n = sc.nextInt();
        System.out.println("Digite os valores da matriz A: ");
        int[][] a = new int[m][n];
        int[][] b = new int[m][n];
        int[][] c = new int[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("Digite os valores da matriz B: ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                b[i][j] = sc.nextInt();
            }
        }

        System.out.println("MATRIZ SOMA: ");

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
		
		sc.close();

	}

}
