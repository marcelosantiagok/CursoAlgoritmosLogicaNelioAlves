/*
Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
*/
#include<stdio.h>
#include<stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");    
}


int main (){
	
	printf("Quantas pessoas serao digitadas? ");
	int n=0, cont=0,i=0;
	scanf("%d",&n);
	char nome[n][50];
	int idade[n];
	double altura[n];
	double percent;
	double alturatotal, alturamedia;
	int cont16 =0;

	for(i=0;i<n;i++){
		printf("Dados da %da pessoa: \n",i+1);
		printf("Nome: ");
		limpar_entrada();
		ler_texto(nome[i],50);
		printf("Idade: ");
		scanf("%d",&idade[i]);
		printf("Altura: ");
		scanf("%lf",&altura[i]);
		alturatotal = alturatotal + altura[i];
	}
	

	for(i=0;i<n;i++){
		if(idade[i]<16){
			cont16 = cont16+1;
		}
	}
	
	alturamedia = alturatotal / n;
	
	printf("\nAltura media = %.2lf\n", alturamedia);
	
	percent = cont16 * 100.00 / n;
	printf("Pessoas com menos de 16 anos: %.1lf%%\n",percent);
	
	for(i=0;i<n;i++){
		if(idade[i]<16){
			printf("%s\n",nome[i]);
		}
	}

    return 0;
}
