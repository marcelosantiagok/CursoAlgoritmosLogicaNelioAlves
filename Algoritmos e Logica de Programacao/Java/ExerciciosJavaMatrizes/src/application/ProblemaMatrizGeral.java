package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaMatrizGeral {

	public static void main(String[] args) {
		/*
		 * Problema "matriz_geral"
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Qual a ordem da matriz? ");
        int n = sc.nextInt();
        double[][] mat = new double[n][n];
        int i=0;
        int j=0;
        double soma = 0.0;
        int escolha =0;
        for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
                System.out.print("Elemento ["+i+","+j+"]: ");
                mat[i][j] = sc.nextDouble();
	        }
        }

        for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
		        if(mat[i][j]>0.0){
			        soma = soma + mat[i][j];
		        }
	        }
        }

        System.out.println("SOMA DOS POSITIVOS: "+soma);
        System.out.print("Escolha uma linha: ");
        escolha = sc.nextInt();

        System.out.print("LINHA ESCOLHIDA: ");

        for (i=0; i<n; i++) {
            System.out.print(mat[escolha][i]+" ");
        }

        System.out.println();

        System.out.print("Escolha uma coluna: ");
        escolha = sc.nextInt();

        System.out.print("COLUNA ESCOLHIDA: ");

        for (i=0; i<n; i++) {
            System.out.print(mat[i][escolha]+" ");
        }

        System.out.println();

        System.out.print("DIAGONAL PRINCIPAL: ");

        for (i=0; i<n; i++) {
            System.out.print(mat[i][i]+" ");
        }

        System.out.println();
        
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                if (mat[i][j] < 0) {
                    mat[i][j] = Math.pow(mat[i][j], 2);
                }
            }
        }
        System.out.println("MATRIZ ALTERADA: ");

        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }
		
		sc.close();

	}

}
