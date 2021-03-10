package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaDiagonalNegativos {

	public static void main(String[] args) {
		/*
		 * Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
        System.out.print("Qual a ordem da matriz? ");
        int n = sc.nextInt();
        int[][] mat = new int[n][n];
        int cont = 0;
        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                System.out.print("Elemento ["+i+","+j+"]: ");
                mat[i][j] = sc.nextInt();
                if (mat[i][j] < 0)
                {
                    cont++;
                }
            }
        }

        System.out.println("DIAGONAL PRINCIPAL: ");
        for (int i = 0; i < n; i++)
        {
            System.out.print(mat[i][i]+" ");
        }

        System.out.println();

        System.out.println("QUANTIDADE DE NEGATIVOS = "+cont);
		
		sc.close();
	}

}
