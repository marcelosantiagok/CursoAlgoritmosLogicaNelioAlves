package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaDardo {

	public static void main(String[] args) {
		/*
		 * Problema "dardo"
No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite as tres distancias: ");
		double a,b,c, maior;
		a = sc.nextDouble();
		b = sc.nextDouble();
		c= sc.nextDouble();
		
		if((a > b) && (a > c)){
			maior = a;
		}else if((b > a)&&(b > c)){
			maior = b;
		}else {
			maior = c;
		}
		
		System.out.println("MAIOR DISTANCIA = "+String.format("%.2f", maior));
				
		
		
		sc.close();

	}

}
