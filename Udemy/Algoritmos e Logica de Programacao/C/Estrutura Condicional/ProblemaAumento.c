/*
roblema "aumento" (adaptado de URI 1048)
Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Até R$ 1000.00 >> 20%

Acima de R$ 1000.00
até R$ 3000.00 >> 15%

Acima de R$ 3000.00
até R$ 8000.00 >> 10%

Acima de R$ 8000.00

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	double salario, aumento, novo, porcentagem;

	printf("Digite o salario da pessoa: ");
	scanf("%lf",&salario);

	if(salario < 1001)
	{
		porcentagem = 20.00;
		aumento = salario * porcentagem / 100;
		novo = salario + aumento;
	}else if(salario < 3001)
	{
		porcentagem = 15.00;
		aumento = salario * porcentagem / 100;
		novo = salario + aumento;
	}else if(salario < 8001)
	{
		porcentagem = 10.00;
		aumento = salario * porcentagem / 100;
		novo = salario + aumento;
	}else
	{
		porcentagem = 5.00;
		aumento = salario * porcentagem / 100;
		novo = salario + aumento;
	}

	printf("Novo salario = R$ %.2lf\n",novo);
	printf("Aumento = R$ %.2lf\n",aumento);
	printf("Porcentagem = %.0lf %%",porcentagem);



return 0;
}
