using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;

namespace ExerciciosMatrizes
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
             Problema "diagonal_negativos"
            Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
            contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
            negativos da matriz.

            Console.Write("Qual a ordem da matriz? ");
            int n = int.Parse(Console.ReadLine());
            int[,] mat = new int[n, n];
            int cont = 0;
            for(int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write("Elemento ["+i+","+j+"]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                    if (mat[i, j] < 0)
                    {
                        cont++;
                    }
                }
            }

            Console.WriteLine("DIAGONAL PRINCIPAL: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(mat[i, i]+" ");
            }

            Console.WriteLine();

            Console.WriteLine("QUANTIDADE DE NEGATIVOS = "+cont);

            */

            /*
             Problema "soma_linhas"
            Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
            de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
            seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.

            Console.Write("Qual a quantidade de linhas da matriz? ");
            int m = int.Parse(Console.ReadLine());
            Console.WriteLine("Qual a quantidade de colunas da matriz? ");
            int n = int.Parse(Console.ReadLine());
            double[,] mat = new double[m, n];
            double[] vet = new double[m];
            double soma = 0.0;
            for(int i = 0; i < m; i++)
            {
                Console.WriteLine("Digite os elementos da "+(i+1)+"a. linha: ");
                for (int j=0; j < n; j++)
                {
                    mat[i, j] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                }
            }

            Console.WriteLine("VETOR GERADOR: ");

            for (int i = 0; i < m; i++)
            {
                soma = 0;
                for (int j = 0; j < n; j++)
                {
                    soma = soma + mat[i,j];
                }
                vet[i] = soma;
            }

            for (int i = 0; i < m; i++)
            {
                Console.WriteLine(vet[i].ToString("F2",CultureInfo.InvariantCulture));
            }

            */


            /*
             Problema "negativos_matriz"
            Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
            exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.

            Console.Write("Qual a quantidade de linhas da matriz? ");
            int m = int.Parse(Console.ReadLine());
            Console.Write("Qual a quantidade de colunas da matriz? ");
            int n = int.Parse(Console.ReadLine());
            int[,] mat = new int[m, n];
 
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());

                }
            }

            Console.WriteLine("VALORES NEGATIVOS: ");

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (mat[i, j] < 0)
                    {
                        Console.WriteLine(mat[i,j]);
                    }

                }
            }
   
            */

            /*
             Problema "cada_linha"
            Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
            de cada linha. Suponha não haver empates.

            Console.Write(" Qual a ordem da matriz ? ");
            int n = int.Parse(Console.ReadLine());
            int[,] mat = new int[n, n];
            int[] maiorLinha = new int[n];
            int maior = 0;
            for (int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA: ");

            for (int i = 0; i < n; i++)
            {
                maior = mat[i, 0];
                for (int j = 0; j < n; j++)
                {
                    if (mat[i, j] > maior)
                    {
                        maior = mat[i, j];
                    }
                }
                maiorLinha[i] = maior;
            }

            for (int i = 0; i < n; i++)
            {
                Console.WriteLine(maiorLinha[i]);
            }

            */


            /*
             Problema "soma_matrizes"
            Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
            cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
            dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.

            Console.Write("Quantas linhas vai ter cada matriz? ");
            int m = int.Parse(Console.ReadLine());
            Console.Write("Quantas colunas vai ter cada matriz? ");
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine("Digite os valores da matriz A: ");
            int[,] a = new int[m, n];
            int[,] b = new int[m, n];
            int[,] c = new int[m, n];
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    a[i, j] = int.Parse(Console.ReadLine());
                }
            }
            Console.WriteLine("Digite os valores da matriz B: ");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    b[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine("MATRIZ SOMA: ");

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    c[i, j] = a[i, j] + b[i, j];
                    Console.Write(c[i,j]+" ");
                }
                Console.WriteLine();
            }

            */

            /*
             Problema "acima_diagonal"
            Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
            contendo números inteiros. Mostrar a soma dos elementos acima da
            diagonal principal. Um exemplo de números acima da diagonal
            principal é mostrado ao lado (no caso as células com fundo cinza).

            Console.Write("Qual a ordem da matriz? ");
            int n = int.Parse(Console.ReadLine());
            int i = 0;
            int j = 0;
            int soma = 0;
            int[,] vet = new int[n,n];
	        for(i=0;i<n;i++){
		        for(j=0;j<n;j++){
                Console.Write("Elemento ["+i+","+j+"]: ");
                    vet[i, j] = int.Parse(Console.ReadLine());
                }
            }
	
	        for(i=0;i<n;i++){
		        for(j=0;j<n;j++){
			        if((i!=j)&&(j>i)){
				        soma = soma + vet[i,j];
			        }
		        }
	        }

            Console.WriteLine("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = "+soma);

            */

            /*
             Problema "matriz_geral"
            Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
            seguintes ações:
            a) calcular e imprimir a soma de todos os elementos positivos da matriz.
            b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
            c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
            d) imprimir os elementos da diagonal principal da matriz.
            e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
            a matriz alterada.


            Console.Write("Qual a ordem da matriz? ");
            int n = int.Parse(Console.ReadLine());
	        double[,] mat = new double[n,n];
	        int i=0;
	        int j=0;
	        double soma = 0.0;
	        int escolha =0;
	        for(i=0;i<n;i++){
		        for(j=0;j<n;j++){
                    Console.Write("Elemento ["+i+","+j+"]: ");
                    mat[i,j] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
		        }
	        }
	
	        for(i=0;i<n;i++){
		        for(j=0;j<n;j++){
			        if(mat[i,j]>0.0){
				        soma = soma + mat[i,j];
			        }
		        }
	        }

            Console.WriteLine("SOMA DOS POSITIVOS: "+soma.ToString("F1",CultureInfo.InvariantCulture));

            Console.Write("Escolha uma linha: ");
            escolha = int.Parse(Console.ReadLine());

            Console.Write("LINHA ESCOLHIDA: ");

            for (i=0; i<n; i++) {
                Console.Write(mat[escolha,i].ToString("F1",CultureInfo.InvariantCulture)+" ");
            }

            Console.WriteLine();

            Console.Write("Escolha uma coluna: ");
            escolha = int.Parse(Console.ReadLine());

            Console.Write("COLUNA ESCOLHIDA: ");
    
            for (i=0; i<n; i++) {
                Console.Write(mat[i,escolha].ToString("F1", CultureInfo.InvariantCulture) + " ");
            }

            Console.WriteLine();

            Console.Write("DIAGONAL PRINCIPAL: ");

            for (i=0; i<n; i++) {
                Console.Write(mat[i,i].ToString("F1", CultureInfo.InvariantCulture) + " ");
            }

            Console.WriteLine();

            for (i=0; i<n; i++) {
                for (j=0; j<n; j++) {
                    if (mat[i,j] < 0) {
                        mat[i,j] = Math.Pow(mat[i,j], 2);
                    }
                }
            }
            Console.WriteLine("MATRIZ ALTERADA: ");

            for (i=0; i<n; i++) {
                for (j=0; j<n; j++) {
                    Console.Write(mat[i,j].ToString("F1", CultureInfo.InvariantCulture)+" ");
                }
                Console.WriteLine();
            }
             
             
            */


        }
    }
}
