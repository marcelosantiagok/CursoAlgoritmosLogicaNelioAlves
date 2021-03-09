package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaAcimaDiagonal {

	public static void main(String[] args) {
		/*
		 * Problema "acima_diagonal"
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Qual a ordem da matriz? ");
        int n = sc.nextInt();
        int i = 0;
        int j = 0;
        int soma = 0;
        int[][] vet = new int[n][n];
        for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
            System.out.print("Elemento ["+i+","+j+"]: ");
                vet[i][j] = sc.nextInt();
            }
        }

        for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
		        if((i!=j)&&(j>i)){
			        soma = soma + vet[i][j];
		        }
	        }
        }

        System.out.println("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = "+soma);
		
		sc.close();
	}

}
