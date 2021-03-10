package application;

import java.util.Locale;
import java.util.Scanner;

public class MediaIdades {

	public static void main(String[] args) {
		/*
		 * Problema "media_idades"
Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa. Calcular
e imprimir a idade m�dia deste grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite as idades: ");
		int idades = sc.nextInt();
		int cont =0;
		double soma =0.0, media = 0.0;
		if(idades > 0) {
			while(idades > 0) {
				cont = cont + 1;
				soma = soma + idades;
				idades = sc.nextInt();
				
			}
			media = soma / cont;
			System.out.println("MEDIA = "+String.format("%.2f", media));
		}else {
			System.out.println("IMPOSSIVEL CALCULAR");
		}

		sc.close();

	}

}
