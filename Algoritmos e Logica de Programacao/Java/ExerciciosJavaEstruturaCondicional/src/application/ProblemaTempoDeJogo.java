package application;

import java.util.Locale;
import java.util.Scanner;

public class ProblemaTempoDeJogo {

	public static void main(String[] args) {
		/*
		 * Problema "tempo_de_jogo" (adaptado de URI 1046)
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.
		 * */
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int horaInicial, horaFinal, hora;
		hora = 24;
		System.out.print("Hora inicial: ");
		horaInicial = sc.nextInt();
		System.out.print("Hora final: ");
		horaFinal = sc.nextInt();
		if(horaInicial > horaFinal) {
			hora = (hora - horaInicial) + horaFinal;
		}else if(horaFinal > horaInicial) {
			hora = horaFinal - horaInicial;
		}
		
		System.out.println("O JOGO DUROU "+hora+" HORA(S) ");
		
		sc.close();

	}

}
