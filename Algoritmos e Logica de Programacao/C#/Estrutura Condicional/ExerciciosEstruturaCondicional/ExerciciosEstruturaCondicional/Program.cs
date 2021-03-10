using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;

namespace ExerciciosEstruturaCondicional
{
    class Program
    {
        static void Main(string[] args)
        {

            /*
             Problema "notas"
            Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
            uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
            ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
            mensagem "REPROVADO", conforme exemplos.

            
            

            double nota1, nota2;

            Console.Write("Digite a primeira nota: ");
            nota1 = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Digite a segunda nota: ");
            nota2 = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);

            if ((nota1 + nota2) < 60.00)
            {

                Console.WriteLine("NOTA FINAL = " + (nota1 + nota2).ToString("F1", CultureInfo.InvariantCulture));
                Console.WriteLine("REPROVADO");
            }
            else {
                Console.WriteLine("NOTA FINAL = " + (nota1 + nota2).ToString("F1", CultureInfo.InvariantCulture));
            }

            */




            /*
             Problema "baskara"
            Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
            de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
            conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.


            double a, b, c, x1, x2, delta;

            Console.Write("Coeficiente a: ");
            a = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Coeficiente b: ");
            b = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Coeficiente c: ");
            c = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);

            delta = Math.Pow(b, 2) - 4 * a * c;

            x1 = (-b + Math.Sqrt(Math.Pow(b, 2) - 4 * a * c)) / (2 * a);
            x2 = (-b - Math.Sqrt(Math.Pow(b, 2) - 4 * a * c)) / (2 * a);


            if((delta > 0) && (a > 0)){

                Console.WriteLine("X1 = " + x1.ToString("F4", CultureInfo.InvariantCulture));
                Console.WriteLine("X2 = " + x2.ToString("F4", CultureInfo.InvariantCulture));

            }else {
                Console.WriteLine("Esta equacao nao possui raizes reais");
            }

            */



            /*
             Problema "menor_de_tres"
            Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
            números lidos. Em caso de empate, mostrar apenas uma vez.

            int a, b, c, menor;

            Console.Write("Primeiro valor: ");
            a = int.Parse(Console.ReadLine());
            Console.Write("Segundo valor: ");
            b = int.Parse(Console.ReadLine());
            Console.Write("Terceiro valor: ");
            c = int.Parse(Console.ReadLine());

            menor = 0;

            if ((a < b) && (a < c))
            {
                menor = a;
            }
            else if ((b < a) && (b < c))
            {
                menor = b;
            }
            else {
                menor = c;
            }

            Console.WriteLine("MENOR = "+menor);

            */



            /*
             Problema "operadora"
            Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
            telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
            ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
             

            Console.WriteLine("Digite a quantidade de minutos: ");
            int minutos = int.Parse(Console.ReadLine());
            double valor = 50.00;

            if (minutos > 100)
            {
                valor = valor + ((minutos - 100) * 2);
            }
       

            Console.WriteLine("Valor a pagar: R$ "+valor.ToString("F2",CultureInfo.InvariantCulture));

            */



            /*
             Problema "troco_verificado"
            Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
            O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
            e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
            ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
            valor restante conforme exemplo.
             

            Console.Write("Preço unitário do produto: ");
            double preco = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Quantidade comprada: ");
            int qtd = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            double dinheiro = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double troco;

            if ((preco * qtd) < dinheiro)
            {
                troco = dinheiro - (preco * qtd);
                Console.WriteLine("TROCO = "+troco.ToString("F2",CultureInfo.InvariantCulture));
            }
            else {
                troco = (preco * qtd) - dinheiro;
                Console.WriteLine("DINHEIRO INSUFICIENTE. FALTAM "+troco.ToString("F2",CultureInfo.InvariantCulture)+" REAIS");

            }

            */


            /*
             Problema "glicose"
            Fazer um programa para ler a quantidade de glicose
            no sangue de uma pessoa e depois mostrar na tela a
            classificação desta glicose de acordo com a tabela de
            referência ao lado.
            Normal Até 100 mg/dl
            Elevado Maior que 100 até 140 mg/dl
            Diabetes Maior de 140 mg/dl

            Console.Write("Digite a medida da glicose: ");
            double glicose = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);

            if (glicose < 101.00)
            {
                Console.WriteLine("Classificacao: normal");
            }
            else if (glicose < 141.00)
            {
                Console.WriteLine("Classificacao: elevado");
            }
            else {
                Console.WriteLine("Classificacao: diabetes");
            }

            */


            /*
            Problema "dardo"
            No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
            Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
            foi a maior. 

            Console.WriteLine("Digite as tres distancias: ");
            double a = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double b = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            double c = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            double maior;

            maior = 0.0;

            if ((a > b) && (a > c))
            {
                maior = a;
            }
            else if ((b > a) && (b > c))
            {
                maior = b;
            }
            else {
                maior = c;
            }

            Console.WriteLine("MAIOR DISTANCIA = "+maior.ToString("F2",CultureInfo.InvariantCulture));

            */

            /*
             
             Problema "temperatura"
            Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
            isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
            informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
            duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
            deduzir a fórmula de Celsius para Fahrenheit): 
            
            double F, C;
            Console.Write("Voce vai digitar a temperatura em qual escala (C/F)? ");
            char sel = char.Parse(Console.ReadLine());
            if ((sel == 'F') || (sel == 'f'))
            {
                Console.Write("Digite a temperatura em Fahrenheit: ");
                F = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                C = 5.00 / 9.00 * (F - 32.00);
                Console.WriteLine("Temperatura equivalente em Celsius: "+C.ToString("F2",CultureInfo.InvariantCulture));
            } else if ((sel == 'C') || (sel == 'c')) {
                Console.WriteLine("Digite a temperatura em Celsius: ");
                C = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
                F = 9.00 * C / 5.00 + 32.00;
                Console.WriteLine("Temperatura equivalente em Fahrenheit: "+F.ToString("F2",CultureInfo.InvariantCulture));
            }

            */

            /*
             Problema "lanchonete" (adaptado de URI 1038)
            Uma lanchonete possui vários produtos. Cada produto possui um código
            e um preço. Você deve fazer um programa para ler o código e a
            quantidade comprada de um produto (suponha um código válido), e daí
            informar qual o valor a ser pago, com duas casas decimais, conforme
            tabela de produtos ao lado.
            Código do produto      Preço doproduto
            1                       R$ 5.00
            2                       R$ 3.50
            3                       R$ 4.80
            4                       R$ 8.90
            5                       R$ 7.32


            Console.Write("Codigo do produto comprado: ");
            int codigo = int.Parse(Console.ReadLine());
            double preco;
            preco = 0.0;
            if (codigo == 1)
            {
                preco = 5.00;
            }
            else if (codigo == 2)
            {
                preco = 3.50;
            }
            else if (codigo == 3)
            {
                preco = 4.80;
            }
            else if (codigo == 4)
            {
                preco = 8.90;
            }
            else if (codigo == 5) {
                preco = 7.32;
            }
            Console.Write("Quantidade comprada: ");
            int qtd = int.Parse(Console.ReadLine());
            Console.WriteLine("Valor a pagar: R$ "+(preco*qtd).ToString("F2",CultureInfo.InvariantCulture));


            Console.Write("Quantidade comprada:");

            */

            /*
             Problema "multiplos" (adaptado de URI 1044)
            Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
            números podem ser digitados em qualquer ordem.
             

            Console.WriteLine("Digite dois numeros inteiros: ");
            int x = int.Parse(Console.ReadLine());
            int y = int.Parse(Console.ReadLine());

            if ((x % y == 0) || (y % x == 0))
            {
                Console.WriteLine("Sao multiplos");
            }
            else {
                Console.WriteLine("Nao sao multiplos");
            }
        
            */


            /*
             Problema "aumento" (adaptado de URI 1048)
            Uma empresa vai conceder um aumento percentual de
            salário aos seus funcionários dependendo de quanto
            cada pessoa ganha, conforme tabela ao lado. Fazer um
            programa para ler o salário de uma pessoa, daí mostrar
            qual o novo salário desta pessoa depois do aumento,
            quanto foi o aumento e qual foi a porcentagem de
            aumento.
            Salário atual                           Aumento
            Até R$ 1000.00                          20%
            Acima de R$ 1000.00 até R$ 3000.00      15%
            Acima de R$ 3000.00 até R$ 8000.00      10%
            Acima de R$ 8000.00                     5%


            Console.Write("Digite o salario da pessoa: ");
            double salario = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            int porcentagem = 0;
            double aumento = 0.0;
            double novo = 0.0;
            if (salario < 1001.00)
            {
                porcentagem = 20;
                aumento = salario * porcentagem / 100;
                novo = salario + aumento;
            }
            else if (salario < 3001.00)
            {
                porcentagem = 15;
                aumento = salario * porcentagem / 100;
                novo = salario + aumento;
            }
            else if (salario < 8001.00)
            {
                porcentagem = 10;
                aumento = salario * porcentagem / 100;
                novo = salario + aumento;
            }
            else {
                porcentagem = 5;
                aumento = salario * porcentagem / 100;
                novo = salario + aumento;
            }

            Console.WriteLine("Novo salario = R$ "+novo.ToString("F2",CultureInfo.InvariantCulture));
            Console.WriteLine("Aumento = R$ " + aumento.ToString("F2", CultureInfo.InvariantCulture));
            Console.WriteLine("Porcentagem = " +porcentagem+"%");

            */

            /*
             Problema "tempo_de_jogo" (adaptado de URI 1046)
            Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
            pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
            horas.


            Console.Write("Hora inicial: ");
            int horaInicial = int.Parse(Console.ReadLine());
            Console.Write("Hora final: ");
            int horaFinal = int.Parse(Console.ReadLine());
            int hora = 24;

            if (horaInicial > horaFinal)
            {
                hora = (hora - horaInicial) + horaFinal;
            }
            else if(horaFinal > horaInicial) {
                hora = horaFinal - horaInicial;
            }

            Console.WriteLine("O JOGO DUROU "+hora+" HORA(S)");

            */

            /*
             Problema "coordenadas" (adaptado de URI 1041)
            Leia os valores das coordenadas X e Y de um ponto no plano
            cartesiano. A seguir, determine qual o quadrante ao qual pertence o
            ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
            mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
            “Eixo X” ou “Eixo Y”, conforme for a situação.
            
            Console.Write("Valor de X: ");
            double x = double.Parse(Console.ReadLine());
            Console.Write("Valor de Y: ");
            double y = double.Parse(Console.ReadLine());

            if ((x > 0) && (y > 0))
            {
                Console.WriteLine("Q1");
            }
            else if ((x < 0) && (y > 0))
            {
                Console.WriteLine("Q2");
            }
            else if ((x < 0) && (y < 0))
            {
                Console.WriteLine("Q3");
            }
            else if ((x > 0) && (y < 0))
            {
                Console.WriteLine("Q4");
            }
            else if ((x == 0) && (y != 0))
            {
                Console.WriteLine("Eixo Y");
            }
            else if ((x != 0) && (y == 0))
            {
                Console.WriteLine("Eixo X");
            }
            else {
                Console.WriteLine("Origem");
            }

            */

        }
    }
}
