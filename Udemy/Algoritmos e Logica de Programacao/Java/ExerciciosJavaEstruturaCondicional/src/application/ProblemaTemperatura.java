package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaTemperatura {

	public static void main(String[] args) {
		/*
		 * Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
deduzir a fórmula de Celsius para Fahrenheit):
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Voce vai digitar a temperatura em qual escala (C/F)? ");
		char sel;
		double C,F;
		sel = sc.next().charAt(0);
		if((sel == 'F')||(sel == 'f')) {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			F = sc.nextDouble();
			C = 5.0  / 9.0 * (F - 32.0);
			System.out.println("Temperatura equivalente em Celsius: "+String.format("%.2f", C));
		}else if((sel == 'C')||(sel == 'c')){
			System.out.print("Digite a temperatura em Celsius: ");
			C = sc.nextDouble();
			F = 9.0 * C / 5.0 + 32.0;
			System.out.println("Temperatura equivalente em Fahrenheit: "+String.format("%.2f", F));
		}
		
		sc.close();

	}

}
