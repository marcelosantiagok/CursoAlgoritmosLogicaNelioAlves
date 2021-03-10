package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaTerreno {

	public static void main(String[] args) {
		/*
		 * Problema "terreno"
			Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
			casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
			o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
			duas casas decimais, conforme exemplo.
		 * */

		double largura, comprimento, area, preco;
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		System.out.print("Digite a largura do terreno: ");
		largura = sc.nextDouble();
		System.out.print("Digite o comprimento do terreno:");
		comprimento = sc.nextDouble();
		System.out.print("Digite o valor do metro quadrado: ");
		preco = sc.nextDouble();
		area = largura * comprimento;
		System.out.println("Area do terreno = "+ String.format("%.2f", area));
		System.out.println("Preco do terreno = "+ String.format("%.2f", preco * area));
		
		sc.close();
		
	}

}
