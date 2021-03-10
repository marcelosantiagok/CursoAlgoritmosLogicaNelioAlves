using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;

namespace ExercicioEstruturaRepetitiva
{
    class Program
    {
        static void Main(string[] args)
        {


            /*
             Problema "crescente" (adaptado de URI 1113)
            Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
            mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
            programa deve finalizar quando forem digitados dois valores iguais.
             

            Console.WriteLine("Digite dois numeros: ");
            int a, b;
            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());
            while (a != b)
            {
                if(a > b)
                {
                    Console.WriteLine("DECRESCENTE!");
                }
                else
                {
                    Console.WriteLine("CRESCENTE!");
                }
                Console.WriteLine("Digite outros dois numeros: ");
                a = int.Parse(Console.ReadLine());
                b = int.Parse(Console.ReadLine());
            }

            */


            /*
             Problema "media_idades"
            Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
            indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
            e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
            mostrar a mensagem "IMPOSSIVEL CALCULAR".

            Console.WriteLine("Digite as idades: ");
            int num, cont;
            double soma;
            cont = 0;
            num = int.Parse(Console.ReadLine());
            soma = 0.0;
            while (num > 0)
            {
                soma = soma + num;
                cont = cont + 1;
                num = int.Parse(Console.ReadLine());
      
            }

            if(soma > 0)
            {
                Console.WriteLine("MEDIA = " + (soma / cont).ToString("F2", CultureInfo.InvariantCulture));
            }
            else
            {
                Console.WriteLine("IMPOSSIVEL CALCULAR");
            }


            */


            /*
             Problema "senha_fixa" (adaptado de URI 1114)
            Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
            senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
            for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
            encerrado. Considere que a senha correta é o valor 2002.

            int senha;

            Console.Write("Digite a senha: ");
            senha = int.Parse(Console.ReadLine());
            while (senha != 2002)
            {
                Console.Write("Senha Invalida! Tente novamente: ");
                senha = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("Acesso permitido!");

            */

            /*
             Problema "quadrante" (adaptado de URI 1115)
            Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
            sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
            algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
            escrever mensagem alguma).


            Console.WriteLine("Digite os valores das coordenadas X e Y: ");
            int x, y;
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());
            while((x != 0)&& (y != 0)){
                if((x > 0) && (y > 0))
                {
                    Console.WriteLine("QUADRANTE Q1");
                }else if((x < 0)&&(y > 0))
                {
                    Console.WriteLine("QUADRANTE Q2");
                }else if ((x < 0) && (y < 0))
                {
                    Console.WriteLine("QUADRANTE Q3");
                }else if((x > 0)&&(y < 0))
                {
                    Console.WriteLine("QUADRANTE Q4");
                }
                Console.WriteLine("Digite os valores das coordenadas X e Y: ");
                x = int.Parse(Console.ReadLine());
                y = int.Parse(Console.ReadLine());
            }


            */
            /*
             Problema "validacao_de_nota" (adaptado de URI 1117)
            Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
            média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
            intervalo [0,10]). Cada nota deve ser validada separadamente.
  

            double nota1, nota2,media;
            Console.Write("Digite a primeira nota: ");
            nota1 = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
         
            while((nota1 < 0.0)||(nota1 > 10.0))
            {
                Console.Write("Valor invalido! Tente novamente: ");
                nota1 = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            }
            Console.Write("Digite a segunda nota: ");
            nota2 = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            while ((nota2 < 0.0)||(nota2 > 10.0))
            {
                Console.Write("Valor invalido! Tente novamente: ");
                nota2 = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            }

            media = (nota1 + nota2) / 2.0;

            Console.WriteLine("MEDIA = "+media.ToString("F2",CultureInfo.InvariantCulture));


            */

            /*
             Problema "combustivel" (adaptado de URI 1134)
            Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
            Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
            1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
            4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
            código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
            como as quantidades de cada combustível.

            Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            int codigo = int.Parse(Console.ReadLine());
            int a, g, d;
            a = 0;
            g = 0;
            d = 0;
            while (codigo != 4)
            {
                if(codigo == 1)
                {
                    a = a + 1;
                }else if(codigo == 2)
                {
                    g = g + 1;
                }else if(codigo == 3)
                {
                    d = d + 1;
                }
                Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
                codigo = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("MUITO OBRIGADO ");
            Console.WriteLine("Alcool: "+a);
            Console.WriteLine("Gasolina: "+g);
            Console.WriteLine("Diesel: "+d);

            */

            /*
             Problema "pares_consecutivos" (adaptado de URI 1159)
            O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X
            for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X
            , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação:
            4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a
            soma de 12+14+16+18+20.

            Console.WriteLine("Digite um numero inteiro: ");
            int n = int.Parse(Console.ReadLine());
            int soma = 0;
            while (n != 0)
            {
                if (n % 2 == 0)
                {
                    soma = n * 5 + 20;
                    Console.WriteLine("SOMA = " + soma);
                }
                else
                {
                    n = n + 1;
                    soma = n * 5 + 20;
                    Console.WriteLine("SOMA = " + soma);
                }
                Console.WriteLine("Digite um numero inteiro: ");
                n = int.Parse(Console.ReadLine());
            }
            */

            /*
             Problema "tabuada"
            Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
            

            Console.Write("Deseja a tabuada para qual valor? ");
            int n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= 10; i++)
            {
                Console.WriteLine(n+" x "+i+" = "+n*i);
            }

            */


            /*
             Problema "soma_impares" (adaptado de URI 1071)
            Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
            impares entre eles.

            Console.WriteLine("Digite dois numeros: ");
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int soma, troca,i;
            soma = 0;
            troca = 0;
            if (a > b)
            {
                troca = a;
                a = b;
                b = troca;
            }

            for (i = a + 1; i < b; i++)
            {
                if (i % 2 != 0)
                {
                    soma = soma + i;
                }
            }

            Console.WriteLine("SOMA DOS IMPARES = "+soma);

            */


            /*
             Problema "sequencia_impares" (adaptado de URI 1067)
            Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
            se for o caso.

            int x = 0;
            Console.Write("Digite o valor de X: ");
            x = int.Parse(Console.ReadLine());

            for(int i = 0; i < x; i++)
            {
                if (i % 2 != 0)
                {
                    Console.WriteLine(i);
                }
            }

            */


            /*
             Problema "dentro_fora" (adaptado de URI 1072)
            Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
            Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
            conforme exemplo

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            int x, dentro,fora;
            x = 0;
            dentro = 0;
            fora = 0;
            for (int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());
                if ((x > 9) && (x < 21))
                {
                    dentro = dentro + 1;
                }
                else {
                    fora = fora + 1;
                }
            }

            Console.WriteLine(dentro+" DENTRO");
            Console.WriteLine(fora + " FORA");

            */


            /*
             Problema "par_impar" (adaptado de URI 1074)
            Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
            Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
            se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
            apenas NULO.

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            int x = 0;
            for(int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());
                if(x == 0)
                {
                    Console.WriteLine("NULO");
                }else if(x > 0)
                {
                    if(x % 2 == 0)
                    {
                        Console.WriteLine("PAR POSITIVO");
                    }
                    else
                    {
                        Console.WriteLine("IMPAR POSITIVO");
                    }
                }else if(x < 0)
                {
                    if(x %2 == 0)
                    {
                        Console.WriteLine("PAR NEGATIVO");
                    }
                    else
                    {
                        Console.WriteLine("IMPAR NEGATIVO");
                    }
                }
            }
            

            */


            /*
             Problema "media_ponderada" (adaptado de URI 1079)
            Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
            teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
            que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
            que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
            pela soma dos pesos.

            Console.Write("Quantos casos voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            double a, b, c, media;
            media = 0;
            for(int i =0; i < n; i++)
            {
                Console.WriteLine("Digite tres numeros: ");
                a = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                b = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                c = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                media = ((a * 2) + (b * 3) + (c * 5)) / 10;
                Console.WriteLine("MEDIA = "+media.ToString("F1",CultureInfo.InvariantCulture));
            }


            */

            /*
             Problema "divisao" (adaptado de URI 1116)
            Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
            segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.

            Console.Write("Quantos casos voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());
            double numerador, denominador,divisao;
            for(int i =0; i < n; i++)
            {
                Console.Write("Entre com o numerador: ");
                numerador = int.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                Console.Write("Entre com o denominador: ");
                denominador = int.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                if(numerador < 0)
                {
                    Console.WriteLine("DIVISAO IMPOSSIVEL ");                
                }
                else{
                    divisao = numerador / denominador;
                    Console.WriteLine("DIVISAO = " + divisao.ToString("F2", CultureInfo.InvariantCulture));
                }

            }

            */

            /*
             Problema "fatorial" (adaptado de URI 1153)
            Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
            fatorial de N.

          
            int i;
            Console.Write("Digite o valor de N: ");
            int n = int.Parse(Console.ReadLine());

            int fat = 1;
            for (i = n; i > 0; i--)
            {
                fat = fat * i;
            }

            Console.WriteLine("FATORIAL = "+fat);


            */

            /*
             Problema "experiencias" (adaptado de URI 1094)
            Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
            organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
            quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
            laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
            informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
            utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
            valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
            inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
            de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
            cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
            percentual deve ser apresentado com dois dígitos após o ponto.

            Console.Write("Quantos casos de teste serao digitados? ");
            int n = int.Parse(Console.ReadLine());

            int totalCobaias, c, r, s,qtd;
            totalCobaias = 0;
            c = 0;
            r = 0;
            s = 0;

            double percent;
            char tipo; 

            for(int i = 0; i < n; i++)
            {
                Console.Write("Quantidade de cobaias: ");
                qtd = int.Parse(Console.ReadLine());
                totalCobaias = totalCobaias + qtd;
                Console.Write("Tipo de cobaia: ");
                tipo = char.Parse(Console.ReadLine());
                if((tipo == 'C')||(tipo == 'c')){
                    c = c + qtd;
            }else if((tipo == 'R')||(tipo == 'r'))
                {
                    r = r + qtd;
                }else if((tipo =='S')||(tipo == 's'))
                {
                    s = s + qtd;
                }
            }

            Console.WriteLine("RELATORIO FINAL: ");

            Console.WriteLine("Total: "+totalCobaias+" cobaias");
            Console.WriteLine("Total de coelhos: "+c);
            Console.WriteLine("Total de ratos: " + r);
            Console.WriteLine("Total de sapos: " + s);
            percent = (c * 100.00) / totalCobaias;
            Console.WriteLine("Percentual de coelhos: " + percent.ToString("F2", CultureInfo.InvariantCulture));
            percent = (r * 100.00) / totalCobaias;
            Console.WriteLine("Percentual de ratos: " + percent.ToString("F2", CultureInfo.InvariantCulture));
            percent = (s * 100.00) / totalCobaias;
            Console.WriteLine("Percentual de sapos: " + percent.ToString("F2", CultureInfo.InvariantCulture));
            */

        }
    }
}
