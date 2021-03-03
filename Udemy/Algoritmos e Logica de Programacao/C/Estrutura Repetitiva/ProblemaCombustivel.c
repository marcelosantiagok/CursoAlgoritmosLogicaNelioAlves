/*
Problema "combustivel" (adaptado de URI 1134)
Um posto de combust�veis deseja determinar qual de seus produtos tem a prefer�ncia de seus clientes.
Escreva um algoritmo para ler o tipo de combust�vel abastecido (codificado da seguinte forma:
1.�lcool 2.Gasolina 3.Diesel 4.Fim). Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a
4) deve ser solicitado um novo c�digo (at� que seja v�lido). O programa ser� encerrado quando o
c�digo informado for o n�mero 4, devendo ent�o mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combust�vel.
*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	int codigo, alcool, gasolina, diesel;
	codigo = 10;
	
	alcool = 0;
	gasolina =0;
	diesel = 0;
	
	while(codigo!=4){
		printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
		scanf("%d",&codigo);
		if(codigo == 1){
			alcool++;
		}else if(codigo == 2){
			gasolina++;
		}else if(codigo == 3){
			diesel++;
		}
		
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alcool);
	printf("Gasolina: %d\n",gasolina);
	printf("Diesel: %d\n",diesel);

    return 0;
}
