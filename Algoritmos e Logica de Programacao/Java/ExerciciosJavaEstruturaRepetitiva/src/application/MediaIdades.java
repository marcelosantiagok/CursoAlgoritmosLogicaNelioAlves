package application;

import java.util.Locale;
import java.util.Scanner;

public class MediaIdades {

	public static void main(String[] args) {
		/*
		 * Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
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
