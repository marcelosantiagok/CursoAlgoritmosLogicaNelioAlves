package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaDentroFora {

	public static void main(String[] args) {
		/*
		 * Problema "dentro_fora" (adaptado de URI 1072)
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantos numeros voce vai digitar? ");
		int n = sc.nextInt();
		int numero =0,dentro=0,fora=0;
		
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			numero = sc.nextInt();
			if((numero>9)&&(numero<21)) {
				dentro++;
			}else {
				fora++;
			}
		}
		System.out.println(dentro+" DENTRO");
		System.out.println(fora+" FORA");

		sc.close();
		
	}

}
