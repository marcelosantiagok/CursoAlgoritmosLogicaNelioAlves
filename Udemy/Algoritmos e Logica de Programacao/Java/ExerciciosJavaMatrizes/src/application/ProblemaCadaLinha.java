package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaCadaLinha {

	public static void main(String[] args) {
		/*
		 * Problema "cada_linha"
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Qual a ordem da matriz ? ");
        int n = sc.nextInt();
        int[][] mat = new int[n][n];
        int[] maiorLinha = new int[n];
        int maior = 0;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j] = sc.nextInt();
            }
        }

        System.out.println("MAIOR ELEMENTO DE CADA LINHA: ");

        for (int i = 0; i < n; i++)
        {
            maior = mat[i][0];
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] > maior)
                {
                    maior = mat[i][j];
                }
            }
            maiorLinha[i] = maior;
        }

        for (int i = 0; i < n; i++)
        {
            System.out.println(maiorLinha[i]);
        }
		
		sc.close();
	}

}
