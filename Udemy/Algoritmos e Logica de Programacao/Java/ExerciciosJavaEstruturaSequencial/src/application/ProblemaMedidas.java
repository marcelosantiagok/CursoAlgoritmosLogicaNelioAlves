package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaMedidas {

	public static void main(String[] args) {
		/*
		 * Problema "medidas"
Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double a, b, c, quadrado, triangulo, trapezio;
		
		System.out.print("Digite a medida A: ");
		a = sc.nextDouble();
		System.out.print("Digite a medida B: ");
		b = sc.nextDouble();
		System.out.print("Digite a medida C: ");
		c = sc.nextDouble();
		
		quadrado = Math.pow(a, 2);
		triangulo = (a * b) / 2;
		trapezio = ((a + b) * c) / 2;
		
		System.out.println("AREA DO QUADRADO = "+String.format("%.4f", quadrado));
		System.out.println("AREA DO TRIANGULO = "+String.format("%.4f", triangulo));
		System.out.println("AREA DO TRAPEZIO = "+String.format("%.4f", trapezio));
		
		sc.close();
	}

}
