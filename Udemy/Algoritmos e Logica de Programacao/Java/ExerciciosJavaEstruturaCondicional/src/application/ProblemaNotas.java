package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaNotas {

	public static void main(String[] args) {
		/*
		 * Problema "notas"
Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos.
		 * */
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double nota1,nota2;
		System.out.print("Digite a primeira nota: ");
		nota1 = sc.nextDouble();
		System.out.print("Digite a segunda nota: ");
		nota2 = sc.nextDouble();
		
		if((nota1+nota2)> 60.00){
			System.out.println("NOTA FINAL = "+String.format("%.1f",nota1+nota2));
		}else {
			System.out.println("NOTA FINAL = "+String.format("%.1f",nota1+nota2));
			System.out.println("REPROVADO");
		}
		
		sc.close();
	}

}
