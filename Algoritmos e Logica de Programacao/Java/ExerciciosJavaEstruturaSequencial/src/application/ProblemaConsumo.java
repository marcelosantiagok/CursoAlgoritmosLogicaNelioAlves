package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaConsumo {

	public static void main(String[] args) {
		/*
		 * Problema "consumo"
Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.
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
