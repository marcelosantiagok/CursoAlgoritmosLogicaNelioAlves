package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaCombustivel {

	public static void main(String[] args) {
		/*
		 * Problema "combustivel" (adaptado de URI 1134)
Um posto de combust�veis deseja determinar qual de seus produtos tem a prefer�ncia de seus clientes.
Escreva um algoritmo para ler o tipo de combust�vel abastecido (codificado da seguinte forma:
1.�lcool 2.Gasolina 3.Diesel 4.Fim). Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a
4) deve ser solicitado um novo c�digo (at� que seja v�lido). O programa ser� encerrado quando o
c�digo informado for o n�mero 4, devendo ent�o mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combust�vel.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
		int codigo = sc.nextInt();
		int a=0,g=0,d=0;
		while(codigo!=4) {
			if(codigo == 1) {
				a++;
			}else if(codigo ==2) {
				g++;
			}else if(codigo ==3) {
				d++;
			}
			System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
			codigo = sc.nextInt();
		}
		System.out.println("MUITO OBRIGADO");
		System.out.println("Alcool: "+a);
		System.out.println("Gasolina: "+g);
		System.out.println("Diesel: "+d);

		sc.close();

	}

}
