using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;

namespace ExerciciosEstruturaSequencial
{
    class Program
    {
        static void Main(string[] args)
        {


            /*
             ------------------------------------
          
             Problema "terreno"
            Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
            casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
            o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
            duas casas decimais, conforme exemplo.
            
            
            Console.WriteLine("Digite a largura do terreno: ");
            double largura = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.WriteLine("Digite o comprimento do terreno: ");
            double comprimento = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.WriteLine("Digite o valor do metro quadrado: ");
            double valor = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double area = largura * comprimento;
            double preco = area * valor;

            Console.WriteLine("Area do terreno = "+area.ToString("F2",CultureInfo.InvariantCulture));
            Console.WriteLine("Preco do terreno = "+preco.ToString("F2",CultureInfo.InvariantCulture));


            ------------------------------------

            */




            /*
             * ------------------------------------
             Problema "retangulo"
            Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
            da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.


            Console.Write("Base do retangulo: ");
            double Base = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Altura do retangulo: ");
            double Altura = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double area = Base * Altura;
            double perimetro = (2 * Base) + (2 * Altura);
            double diagonal = Math.Sqrt(Math.Pow(Base, 2) + Math.Pow(Altura, 2));

            Console.WriteLine("AREA = " + area.ToString("F4", CultureInfo.InvariantCulture));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CultureInfo.InvariantCulture));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CultureInfo.InvariantCulture));

            ------------------------------------

            */

            /*
             * 
             * ------------------------------------
             Problema "idades"
            Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
            nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.


            Console.WriteLine("Dados da primeira pessoa: ");
            Console.Write("Nome: ");
            string Nome1 = Console.ReadLine();
            Console.Write("Idade: ");
            int Idade1 = int.Parse(Console.ReadLine());


            Console.WriteLine("Dados da segunda pessoa: ");
            Console.Write("Nome: ");
            string Nome2 = Console.ReadLine();
            Console.Write("Idade: ");
            int Idade2 = int.Parse(Console.ReadLine());
            double media = (double)(Idade1 + Idade2) / 2;

            Console.WriteLine("A idade média de "+Nome1+" e "+Nome2+" é de "+media+" anos");
            ------------------------------------

            */


            /*
             * ------------------------------------
             * 
             Problema "soma"
            Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
            números.
             
            Console.Write("Digite o valorr de X: ");
            int x = int.Parse(Console.ReadLine());
            Console.Write("Digite o valorr de Y: ");
            int y = int.Parse(Console.ReadLine());
            Console.WriteLine("SOMA = "+(x+y));

            ------------------------------------
            */

            /*
             * ------------------------------------
             * 
             Problema "troco"
            Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
            O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
            e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
            mostrar o valor do troco a ser devolvido ao cliente.
             
          

            Console.Write("Preço unitário do produto: ");
            double preco = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Quantidade comprada: ");
            int qtd = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            double dinheiro = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            double troco = 0.0;
            double valorCompra = preco * qtd;
            if (dinheiro > valorCompra)
            {
                troco = dinheiro - valorCompra;
                Console.WriteLine("TROCO = "+troco.ToString("F2",CultureInfo.InvariantCulture));
            }
            else {
                troco = valorCompra - dinheiro;
                Console.WriteLine("FALTA R$"+troco.ToString("F2",CultureInfo.InvariantCulture)+" REAIS");
                
            }
            ------------------------------------

            */


            /*
             * ------------------------------------
             Problema "circulo"
            Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
            círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟􀬶. Você pode
            usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
            diretamente o valor 3.14159.


            Console.Write("Digite o valor do raio do circulo: ");
            double raio = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double area = Math.PI * Math.Pow(raio, 2);

            Console.WriteLine("AREA = "+area.ToString("F3",CultureInfo.InvariantCulture));
            ------------------------------------

            */

            /*
            Problema "pagamento"
            Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
            quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
            uma mensagem explicativa, conforme exemplo. 

            Console.Write("Nome: ");
            string Nome = Console.ReadLine();
            Console.Write("Valor por hora: ");
            double valorHora = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Horas trabalhadas: ");
            int hora = int.Parse(Console.ReadLine());
            double pagamento = valorHora * hora;
            Console.WriteLine("O pagamento para "+Nome+" deve ser "+pagamento.ToString("F2",CultureInfo.InvariantCulture));

            */


            /*
             Problema "consumo"
            Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
            combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
            médio do carro, com três casas decimais.

            Console.Write("Distancia percorrida: ");
            double distancia = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Combustível gasto: ");
            double combustivel = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double calc = distancia / combustivel;
            Console.WriteLine("Consumo medio = "+calc.ToString("F3",CultureInfo.InvariantCulture));
            

            */

            /*
             Problema "medidas"
            Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
            com quatro casas decimais):
            a) a área do quadrado que tem lado A
            b) a área do triângulo retângulo que base A e altura B
            c) a área do trapézio que tem bases A e B, e altura C
             */

            /*
             * 
            Console.Write("Digite a medida A: ");
            double a = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Digite a medida B: ");
            double b = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Digite a medida C: ");
            double c = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double quadrado, triangulo, trapezio;

            quadrado = a * a;
            triangulo = (a * b) / 2;
            trapezio = ((a + b) * c) / 2;

            Console.WriteLine("AREA DO QUADRADO = "+quadrado.ToString("F4",CultureInfo.InvariantCulture));
            Console.WriteLine("AREA DO TRIANGULO = "+triangulo.ToString("F4",CultureInfo.InvariantCulture));
            Console.WriteLine("AREA DO TRAPEZIO = "+trapezio.ToString("F4",CultureInfo.InvariantCulture));

            */

            /*
             Problema "duracao"
            Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
            formato horas:minutos:segundos.
             
             */
            /*
            Console.Write("Digite a duracao em segundos: ");
            int duracao = int.Parse(Console.ReadLine());
            int horas, minutos, segundos, resto;

            horas = (int)duracao / 3600;
            resto = (int)duracao % 3600;
            minutos = (int)resto / 60;
            segundos = (int)resto % 60;

            Console.WriteLine(horas+":"+minutos+":"+segundos);

            */
        }
    }
}
