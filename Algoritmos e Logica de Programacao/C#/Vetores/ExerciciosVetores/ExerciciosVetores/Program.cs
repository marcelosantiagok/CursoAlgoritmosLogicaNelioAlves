using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;

namespace ExerciciosVetores
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
             Problema "negativos"
            Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
            e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.


            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            int[] vet = new int[n];

            for(int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("NUMEROS NEGATIVOS: ");
            for (int i = 0; i < n; i++)
            {
                if (vet[i] < 0)
                {
                    Console.WriteLine(vet[i]);
                }
            }

            */


            /*
             Problema "soma_vetor"
            Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
            - Imprimir todos os elementos do vetor
            - Mostrar na tela a soma e a média dos elementos do vetor

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            double[] vet = new double[n];
            double soma = 0.0;
            double media = 0.0;
            for(int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                soma = soma + vet[i];
            }

            media = soma / n;

            Console.Write("VALORES = ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(vet[i].ToString("F1",CultureInfo.InvariantCulture)+" ");
            }
            Console.WriteLine();
            Console.WriteLine("SOMA = "+soma.ToString("F2",CultureInfo.InvariantCulture));
            Console.WriteLine("MEDIA = " + media.ToString("F2", CultureInfo.InvariantCulture));

            */

            /*
             Problema "alturas"
            Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
            tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
            bem como os nomes dessas pessoas caso houver.

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            string[] nome = new string[n];
            int[] idade = new int[n];
            double[] altura = new double[n];
            double somaAltura;
            double media;
            double percent = 0.0;
            int cont16 = 0;
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Dados da "+(i+1)+"a pessoa:");
                Console.Write("Nome: ");
                nome[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idade[i] = int.Parse(Console.ReadLine()) ;
                Console.Write("Altura: ");
                altura[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                
      
            }

            somaAltura = 0.0;
            media = 0.0;
            for (int i = 0; i < n; i++)
            {
                if (idade[i] < 16)
                {
                    cont16++;
                }
                somaAltura = somaAltura + altura[i];
            }

            media = (double)somaAltura / n;
            percent = cont16 * 100 / n;

            Console.WriteLine("Altura media: " +media.ToString("F2", CultureInfo.InvariantCulture));
            Console.WriteLine("Pessoas com menos de 16 anos: "+percent.ToString("F2",CultureInfo.InvariantCulture)+"%");

            for (int i = 0; i < n; i++)
            {
                if (idade[i] < 16)
                {
                    Console.WriteLine(nome[i]);
                }
            }

            */

            /*
             Problema "numeros_pares"
            Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
            tela todos os números pares, e também a quantidade de números pares.


            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            int[] vet = new int[n];
            int cont = 0;
            for(int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("NUMEROS PARES: ");
            for (int i = 0; i < n; i++)
            {
                if (vet[i] % 2 == 0)
                {
                    Console.Write(vet[i]+" ");
                    cont++;
                }
            }
            Console.WriteLine();

            Console.WriteLine("QUANTIDADE DE PARES = "+cont);

            */

            /*
             Problema "maior_posicao"
            Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
            o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
            considerando a primeira posição como 0 (zero).

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            double[] vet = new double[n];
            int posicao = 0;
            double maior = 0.0;
            for (int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            }

            maior = vet[0];

            for (int i = 0; i < n; i++)
            {
                if (vet[i] > maior)
                {
                    maior = vet[i];
                    posicao = i;
                }
            }

            Console.WriteLine("MAIOR VALOR = "+maior.ToString("F1",CultureInfo.InvariantCulture));
            Console.WriteLine("POSICAO DO MAIOR VALOR = "+posicao);


            */

            /*
             Problema "soma_vetores"
            Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
            terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
            o vetor C gerado.

            Console.Write("Quantos valores vai ter cada vetor? ");
            int n = int.Parse(Console.ReadLine());
            int[] a = new int[n];
            int[] b= new int[n];
            int[] c = new int[n];
            Console.WriteLine("Digite os valores do vetor A: ");
            for (int i = 0; i < n; i++)
            {
                a[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("Digite os valores do vetor B: ");
            for (int i = 0; i < n; i++)
            {
                b[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("VETOR RESULTANTE: ");
            for (int i = 0; i < n; i++)
            {
                c[i] = a[i] + b[i];
                Console.WriteLine(c[i]);
            }

            */

            /*
             Problema "abaixo_da_media"
            Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
            mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
            os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.


            Console.Write("Quantos elementos vai ter o vetor? ");
            int n = int.Parse(Console.ReadLine());
            double[] vet = new double[n];
            double media = 0.0;
            double somaVetor = 0.0;
            for (int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                somaVetor = somaVetor + vet[i];
            }

            media = somaVetor / n;

            Console.WriteLine("MEDIA DO VETOR = "+media.ToString("F3",CultureInfo.InvariantCulture));
            Console.WriteLine("ELEMENTOS ABAIXO DA MEDIA: ");

            for (int i = 0; i < n; i++)
            {
                if (vet[i] < media)
                {
                    Console.WriteLine(vet[i].ToString("F2",CultureInfo.InvariantCulture));
                }
            }

            */



            /*
             Problema "media_pares "
            Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
            aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
            digitado, mostrar a mensagem "NENHUM NUMERO PAR"
             */

            /*

            Console.Write("Quantos elementos vai ter o vetor? ");
            int n = int.Parse(Console.ReadLine());
            int[] vet = new int[n];
            double media = 0.0;
            int somaVetor = 0;
            int contPar = 0;
            for (int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
                if (vet[i] % 2 == 0)
                {
                    somaVetor = somaVetor + vet[i];
                    contPar++;
                }
            }

            media = (double)somaVetor / contPar;
            if (contPar == 0)
            {
                Console.WriteLine("NENHUM NUMERO PAR ");
            }
            else
            {
                Console.WriteLine("MEDIA DOS PARES = "+media.ToString("F1",CultureInfo.InvariantCulture));
            }

            */
            /*
             Problema "mais_velho"
            Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
            devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
            da pessoa mais velha.

            Console.Write("Quantas pessoas voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            string[] nome = new string[n];
            int[] idade = new int[n];
            int maisVelha = 0;
            int posicao = 0;
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Dados da "+(i+1)+"a pessoa: ");
                Console.Write("Nome: ");
                nome[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idade[i] = int.Parse(Console.ReadLine());
            }
            maisVelha = idade[0];
            for (int i = 0; i < n; i++)
            {
                if (idade[i] > maisVelha)
                {
                    maisVelha = idade[i];
                    posicao = i;
                }
            }

            Console.WriteLine("PESSOA MAIS VELHA: "+nome[posicao]);

            */
            /*
             Problema "aprovados"
            Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
            no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
            os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
            igual a 6.0 (seis).



            Console.Write("Quantos alunos serao digitados?");
            int n = int.Parse(Console.ReadLine());
            string[] nome = new string[n];
            double[] nota1 = new double[n];
            double[] nota2 = new double[n];
            double media = 0.0;
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Digite nome, primeira e segunda nota do "+(i+1)+"o aluno: ");
                nome[i] = Console.ReadLine();
                nota1[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                nota2[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            }

            Console.WriteLine("Alunos Aprovados");

            for (int i = 0; i < n; i++)
            {
                media = (nota1[i] + nota2[i]) / 2.0;
                if(media >= 6.0)
                {
                    Console.WriteLine(nome[i]);
                }
            }

            */
            /*
             Problema "dados_pessoas"
            Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
            que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
            de homens.


            Console.WriteLine("Quantas pessoas serao digitadas? ");
            int n = int.Parse(Console.ReadLine());
            double[] altura = new double[n];
            char[] genero = new char[n];
            double menor = 0.0;
            double maior = 0.0;
            double somaAlturaMulher = 0.0;
            int contMulher = 0;
            int contHomem = 0;
            double mediaAlturaMulher = 0.0;
            for(int i = 0; i < n; i++)
            {
                Console.Write("Altura da "+(i+1)+"a pessoa: ");
                altura[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                Console.Write("Genero da "+(i+1)+"a pessoa: ");
                genero[i] = char.Parse(Console.ReadLine());

                if((genero[i] == 'F')||(genero[i] == 'f')) 
                {
                    somaAlturaMulher = somaAlturaMulher + altura[i];
                    contMulher = contMulher + 1;
                }else if ((genero[i] == 'M') || (genero[i] == 'm'))
                {
                    contHomem = contHomem + 1;
                }

            }

            menor = altura[0];
            maior = altura[0];
            mediaAlturaMulher = (double)somaAlturaMulher / contMulher;


            for (int i = 0; i < n; i++)
            {
                if (altura[i]> maior)
                {
                    maior = altura[i];
                }

                if(altura[i] < menor)
                {
                    menor = altura[i];
                }


            }

            Console.WriteLine("Menor altura = "+menor.ToString("F2",CultureInfo.InvariantCulture));
            Console.WriteLine("Maior altura = "+maior.ToString("F2",CultureInfo.InvariantCulture));
            Console.WriteLine("Media das alturas das mulheres = "+mediaAlturaMulher.ToString("F2",CultureInfo.InvariantCulture));
            Console.WriteLine("Numero de homens = "+contHomem);

            */

            /*
             Problema "comerciante"
            Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
            mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
            venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
            proporcionaram:
             lucro < 10%
             10% ≤ lucro ≤ 20%
             lucro > 20%
            Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
            o lucro total.

            Console.Write("Serao digitados dados de quantos produtos? ");
            int n = int.Parse(Console.ReadLine());
            string[] nome = new string[n];
            double[] pcompra = new double[n];
            double[] pvenda = new double[n];
            int luc10 = 0;
            int luc20 = 0;
            int luc21 = 0;
            double calculo = 0.0;
            double lucroTotal = 0.0;
            double totalVenda = 0.0;
            double totalCompra = 0.0;
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("Produto "+(i+1)+": ");
                Console.Write("Nome: ");
                nome[i] = Console.ReadLine();
                Console.Write("Preco de compra: ");
                pcompra[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                totalCompra = totalCompra + pcompra[i];
                Console.Write("Preco de venda: ");
                pvenda[i] = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                totalVenda = totalVenda + pvenda[i];
                calculo = (pvenda[i] * 100.00 / pcompra[i]) - 100.00;
                if (calculo < 10.00)
                {
                    luc10++;
                }
                else if (calculo < 21.00)
                {
                    luc20++;
                }
                else
                {
                    luc21++;
                }
            }

            
            lucroTotal = totalVenda - totalCompra;


            Console.WriteLine("RELATORIO: ");
            Console.WriteLine("Lucro abaixo de 10%: "+luc10);
            Console.WriteLine("Lucro entre 10% e 20%: "+luc20);
            Console.WriteLine("Lucro acima de 20%: "+luc21);
            Console.WriteLine("Valor total de compra: "+totalCompra.ToString("F2",CultureInfo.InvariantCulture));
            Console.WriteLine("Valor total de venda: "+totalVenda.ToString("F2",CultureInfo.InvariantCulture));
            Console.WriteLine("Lucro total: "+lucroTotal.ToString("F2",CultureInfo.InvariantCulture));

            */

            }
    }
}
