using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

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
             */

            /*
             Problema "media_idades"
            Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
            indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
            e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
            mostrar a mensagem "IMPOSSIVEL CALCULAR".
             */

            /*
             Problema "senha_fixa" (adaptado de URI 1114)
            Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
            senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
            for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
            encerrado. Considere que a senha correta é o valor 2002.
             */

            /*
             Problema "quadrante" (adaptado de URI 1115)
            Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
            sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
            algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
            escrever mensagem alguma).
             */

            /*
             Problema "validacao_de_nota" (adaptado de URI 1117)
            Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
            média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
            intervalo [0,10]). Cada nota deve ser validada separadamente.
             */

            /*
             Problema "combustivel" (adaptado de URI 1134)
            Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
            Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
            1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
            4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
            código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
            como as quantidades de cada combustível.
             */

            /*
             Problema "pares_consecutivos" (adaptado de URI 1159)
            O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X
            for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X
            , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação:
            4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a
            soma de 12+14+16+18+20.
             */

            /*
             Problema "tabuada"
            Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
             */

            /*
             Problema "soma_impares" (adaptado de URI 1071)
            Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
            impares entre eles.
             */

            /*
             Problema "sequencia_impares" (adaptado de URI 1067)
            Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
            se for o caso.
             */

            /*
             Problema "dentro_fora" (adaptado de URI 1072)
            Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
            Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
            conforme exemplo
             */

            /*
             Problema "par_impar" (adaptado de URI 1074)
            Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
            Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
            se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
            apenas NULO.
             */

            /*
             Problema "media_ponderada" (adaptado de URI 1079)
            Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
            teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
            que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
            que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
            pela soma dos pesos.
             */

            /*
             Problema "divisao" (adaptado de URI 1116)
            Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
            segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
             */

            /*
             Problema "fatorial" (adaptado de URI 1153)
            Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
            fatorial de N.
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
             */


        }
    }
}
