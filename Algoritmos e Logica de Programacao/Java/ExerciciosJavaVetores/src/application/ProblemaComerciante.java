package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaComerciante {

	public static void main(String[] args) {
		/*
		 * Problema "comerciante"
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Serao digitados dados de quantos produtos? ");
		int n = sc.nextInt();
		String[] nome = new String[n];
		double[] pcompra = new double[n];
		double[] pvenda = new double[n];
		double totalCompra =0.0;
		double totalVenda = 0.0;
		double lucroTotal = 0.0;
		double calculo = 0.0;
		int luc10 = 0,luc20 = 0,luc21 = 0;
		for(int i=0;i<n;i++) {
			System.out.println("Produto "+(i+1)+": ");
			System.out.print("Nome: ");
			nome[i] = sc.next();
			System.out.print("Preco de compra: ");
			pcompra[i] = sc.nextDouble();
			totalCompra = totalCompra + pcompra[i];
			System.out.print("Preco de venda: ");
			pvenda[i] = sc.nextDouble();
			totalVenda = totalVenda + pvenda[i];
			calculo = (pvenda[i] * 100 / pcompra[i]) - 100;
			if(calculo<10.0){
				luc10++;
			}else if(calculo < 21.0) {
				luc20++;
			}else {
				luc21++;
			}
			
		}
		
		lucroTotal = totalVenda - totalCompra;
		
		System.out.println("RELATORIO: ");
		System.out.println("Lucro abaixo de 10%: "+luc10);
		System.out.println("Lucro entre 10% e 20%: "+luc20);
		System.out.println("Lucro acima de 20%: "+luc21);
		System.out.println("Valor total de compra: "+String.format("%.2f", totalCompra));
		System.out.println("Valor total de venda: "+String.format("%.2f", totalVenda));
		System.out.println("Valor total de venda: "+String.format("%.2f", lucroTotal));
		sc.close();
		
		
		
	}

}
