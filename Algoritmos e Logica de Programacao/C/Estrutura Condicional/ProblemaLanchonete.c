/*
Problema "lanchonete" (adaptado de URI 1038)
Uma lanchonete possui vários produtos. Cada produto possui um código 
e um preço. Você deve fazer um programa para ler o código e a 
quantidade comprada de um produto (suponha um código válido), e daí 
informar qual o valor a ser pago, com duas casas decimais, conforme 
tabela de produtos ao lado.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int codigo, qtd;
	double produto, valor;


	printf("Codigo do produto comprado: ");
	scanf("%d",&codigo);
	
	if(codigo == 1)
	{
		produto = 5.00;
	}else if(codigo == 2)
	{
		produto = 3.50;
	}else if(codigo == 3)
	{
		produto = 4.80;
	}else if(codigo == 4)
	{
		produto = 8.90;
	}else if(codigo == 5)
	{
		produto = 7.32;
	}
	
	printf("Quantidade comprada: ");
	scanf("%d",&qtd);
	
	valor = produto * qtd;
	
	printf("Valor a pagar: %.2lf", valor);
	
	return 0;
	
}
