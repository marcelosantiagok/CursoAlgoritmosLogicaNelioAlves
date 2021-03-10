package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaBaskara {

	public static void main(String[] args) {
		/*
		 * Problema "baskara"
Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo grau. Usando a f�rmula
de Baskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais,
conforme exemplo. Se a equa��o n�o possuir ra�zes reais, mostrar uma mensagem.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double a, b, c,x1, x2, delta;
		
		System.out.print("Coeficiente a: ");
		a = sc.nextDouble();
		System.out.print("Coeficiente b: ");
		b = sc.nextDouble();
		System.out.print("Coeficiente c: ");
		c = sc.nextDouble();
		
		delta = Math.pow(b, 2) - 4 * a * c;
		x1 = (-b + Math.sqrt(delta)) / (2 * a);
		x2 = (-b - Math.sqrt(delta)) / (2 * a);
		
		if((delta > 0)&&(a > 0)){
		System.out.println("X1 = "+String.format("%.4f",x1));
		System.out.println("X2 = "+String.format("%.4f",x2));
		}else {
			System.out.println("Esta equacao nao possui raizes reais");
		}
		sc.close();
		
	}

}
