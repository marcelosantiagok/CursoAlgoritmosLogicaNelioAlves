package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaConsumo {

	public static void main(String[] args) {
		/*
		 * Problema "consumo"
Fazer um programa para ler a dist�ncia total (em km) percorrida por um carro, bem como o total de
combust�vel gasto por este carro ao percorrer tal dist�ncia. Seu programa deve mostrar o consumo
m�dio do carro, com tr�s casas decimais.
		 * */

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double distancia, combustivel;
		
		System.out.print("Distancia percorrida: ");
		distancia = sc.nextDouble();
		System.out.print("Combustivel gasto: ");
		combustivel = sc.nextDouble();
		
		System.out.println("Consumo medio = "+String.format("%.3f", distancia/combustivel));
		
		
		sc.close();
		
	}

}
