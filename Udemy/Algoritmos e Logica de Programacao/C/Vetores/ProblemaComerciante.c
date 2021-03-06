/*
Problema "comerciante"
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.

*/

#include<stdio.h>
#include<stdlib.h>
int main (){
	
	printf("Serao digitados dados de quantos produtos? ");
	int n =0;
	scanf("%d",&n);
	char nome[n][50];
	double pcompra[n];
	double pvenda[n];
	int i=0;
	double lucro = 0;
	int lucro10 = 0;
	int lucro20 = 0;
	int lucro21 = 0;
	double somaCompra = 0.0;
	double somaVenda = 0.0;
	double lucroTotal =0.0;
	
	for(i=0;i<n;i++){
		printf("Produto %d: \n",i+1);
		printf("Nome: ");
		scanf("%s",&nome[i][0]);
		printf("Preco de compra: ");
		scanf("%lf",&pcompra[i]);
		somaCompra = somaCompra + pcompra[i];
		printf("Preco de venda: ");
		scanf("%lf",&pvenda[i]);
		somaVenda = somaVenda + pvenda[i];
		lucro = (pvenda[i] * 100 / pcompra[i]) - 100;
		if(lucro<10.00){
			lucro10 = lucro10+1;
		}else if(lucro<20.00){
			lucro20 = lucro20+1;
		}else{
			lucro21 = lucro21+1;
		}
	}
	
	printf("RELATORIO: \n");
	printf("Lucro abaixo de 10%%: %d\n",lucro10);
	printf("Lucro entre 10%% e 20%%: %d\n",lucro20);
	printf("Lucro acima de 20%%: %d\n",lucro21);
	printf("Valor total de compra: %.2lf\n",somaCompra);
	printf("Valor total de venda: %.2lf\n",somaVenda);
	
	lucroTotal = somaVenda - somaCompra;
	printf("Lucro total: %.2lf",lucroTotal);
	
	
	
    return 0;
}
