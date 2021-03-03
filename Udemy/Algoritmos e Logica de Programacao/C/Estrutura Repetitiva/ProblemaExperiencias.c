/*
Problema "experiencias" (adaptado de URI 1094)
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.
*/
#include<stdio.h>
#include<stdlib.h>
int main (){

	int n,i, qtd,c,r,s, somaqtd;
	char tipo;
	
	double percentual;
	
	percentual = 0.0;
	c =0;
	r=0;
	s=0;

	printf("Quantos casos de teste serao digitados? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Quantidade de cobaias: ");
		scanf("%d",&qtd);
		somaqtd = somaqtd + qtd;
		printf("Tipo de cobaia: ");
		scanf(" %c",&tipo);
		if((tipo == 'C')||(tipo =='c')){
			c = c + qtd;
		}else if((tipo == 'R')||(tipo == 'r')){
			r = r + qtd;
		}else if((tipo == 'S')||(tipo == 's')){
			s = s + qtd;
		}
		
	}
	
		printf("RELATORIO FINAL: \n");
		printf("Total: %d cobaias \n",somaqtd);
		printf("Total de coelhos: %d\n",c);
		printf("Total de ratos: %d\n",r);
		printf("Total de sapos: %d\n",s);
		percentual = (double)(c * 100) / somaqtd;
		printf("Percentual de coelhos: %.2lf\n",percentual);
		percentual = 0.0;
		percentual = (double)(r * 100) / somaqtd;
		printf("Percentual de ratos: %.2lf\n",percentual);
		percentual = 0.0;
		percentual = (double)(s * 100) / somaqtd;
		printf("Percentual de sapos: %.2lf\n",percentual);

    return 0;
}
