package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaExperiencias {

	public static void main(String[] args) {
		/*
		 * Problema "experiencias" (adaptado de URI 1094)
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
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int qtdCobaias = 0,totalCobaias = 0,c=0,r=0,s=0;
		char tipo;
		double percent = 0.0;
		
		System.out.print("Quantos casos de teste serao digitados?");
		int n = sc.nextInt();
		for(int i=0;i<n;i++) {
			System.out.print("Quantidade de cobaias: ");
			qtdCobaias = sc.nextInt();
			sc.nextLine();
			System.out.print("Tipo de cobaia: ");
			tipo = sc.next().charAt(0);
			totalCobaias = totalCobaias + qtdCobaias;
			if((tipo == 'C')||(tipo == 'c')) {
				c = c + qtdCobaias;
			}else if((tipo == 'R')||(tipo == 'r')) {
				r= r + qtdCobaias;
			}else if((tipo == 'S')||(tipo == 's')) {
				s = s + qtdCobaias;
			}
		}
		
		System.out.println("RELATORIO FINAL: ");
		System.out.println("Total: "+totalCobaias+" cobaias");
		System.out.println("Total de coelhos: "+c);
		System.out.println("Total de ratos: "+r);
		System.out.println("Total de sapos: "+s);
		
		percent = (c * 100.00)/totalCobaias; 
		System.out.println("Percentual de coelhos: "+String.format("%.2f", percent));
		percent = (r * 100.00)/totalCobaias; 
		System.out.println("Percentual de ratos: "+String.format("%.2f", percent));
		percent = (s * 100.00)/totalCobaias; 
		System.out.println("Percentual de sapos: "+String.format("%.2f", percent));
		
		sc.close();

	}

}
