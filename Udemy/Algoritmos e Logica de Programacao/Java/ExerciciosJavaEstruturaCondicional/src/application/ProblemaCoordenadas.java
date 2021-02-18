package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaCoordenadas {

	public static void main(String[] args) {
		/*
		 * Problema "coordenadas" (adaptado de URI 1041)
Leia os valores das coordenadas X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante ao qual pertence o
ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
mensagem �Origem�. Se o ponto estiver sobre um dos eixos escreva
�Eixo X� ou �Eixo Y�, conforme for a situa��o.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double x, y;
		
		System.out.print("Valor de X: ");
		x = sc.nextDouble();
		System.out.print("Valor de Y: ");
		y = sc.nextDouble();
		
		if((x > 0 )&& (y > 0)) {
			System.out.println("Q1");			
		}else if((x < 0 )&& (y > 0)) {
			System.out.println("Q2");
		}else if((x < 0 )&& (y < 0)) {
			System.out.println("Q3");
		}else if((x > 0 )&& (y < 0)) {
			System.out.println("Q4");
		}else if((x != 0 )&& (y == 0)) {
			System.out.println("Eixo X");
		}else if((x == 0 )&& (y != 0)) {
			System.out.println("Eixo Y");
		}else {
			System.out.println("Origem");
		}
		
		
		
		sc.close();

	}

}
