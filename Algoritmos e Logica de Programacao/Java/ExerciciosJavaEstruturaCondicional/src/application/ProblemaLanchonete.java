package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaLanchonete {

	public static void main(String[] args) {
		/*
		 * Problema "lanchonete" (adaptado de URI 1038)
Uma lanchonete possui v�rios produtos. Cada produto possui um c�digo
e um pre�o. Voc� deve fazer um programa para ler o c�digo e a
quantidade comprada de um produto (suponha um c�digo v�lido), e da�
informar qual o valor a ser pago, com duas casas decimais, conforme
tabela de produtos ao lado.
C�digo do produto 					Pre�o do produto
1										 R$ 5.00
2 										 R$ 3.50
3 										 R$ 4.80
4 										 R$ 8.90
5 										 R$ 7.32
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		

		int codigo, qtd;
		double preco;
		System.out.print("Codigo do produto comprado: ");
		codigo = sc.nextInt();
		preco = 0.0;
		qtd = 0;
		if(codigo == 1) {
			preco = 5.00;
		}else if(codigo == 2) {
			preco = 3.50;
		}else if(codigo == 3) {
			preco = 4.80;
		}else if(codigo == 4) {
			preco = 8.90;
		}else if(codigo == 5) {
			preco = 7.32;
		}
		
		System.out.print("Quantidade comprada");
		qtd = sc.nextInt();
		
		System.out.print("Valor a pagar: R$ "+String.format("%.2f",preco * qtd));
		
		sc.close();

	}

}
