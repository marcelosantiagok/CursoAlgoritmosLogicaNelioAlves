package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaNegativosMatriz {

	public static void main(String[] args) {
		/*
		 * Problema "negativos_matriz"
Ler dois n�meros M e N (m�ximo = 10), e depois ler uma matriz MxN de n�meros inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os n�meros negativos da matriz.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
        System.out.print("Qual a quantidade de linhas da matriz? ");
        int m = sc.nextInt();
        System.out.print("Qual a quantidade de colunas da matriz? ");
        int n = sc.nextInt();
        int[][] mat = new int[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j] = sc.nextInt();

            }
        }

        System.out.println("VALORES NEGATIVOS: ");

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] < 0)
                {
                    System.out.println(mat[i][j]);
                }

            }
        }
		
		sc.close();

	}

}
