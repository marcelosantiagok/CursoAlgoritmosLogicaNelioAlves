/*
Problema "aprovados"
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).
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
	
	printf("Quantos alunos serao digitados? ");
	int n =0;
	scanf("%d",&n);
	int i=0;
	char nome[n][50];
	double nota1[n], nota2[n],media[n];
	for(i=0;i<n;i++){
		printf("Digite nome, primeira e segunda nota do %do aluno: \n",i+1);
		limpar_entrada();
		ler_texto(nome[i],50);
		scanf("%lf",&nota1[i]);
		scanf("%lf",&nota2[i]);
		media[i] = (nota1[i] + nota2[i]) / 2.0;
	}
	
	printf("Alunos aprovados: \n");
	
	for(i=0;i<n;i++){
		if(media[i]>= 6.0){
			printf("%s\n",nome[i]);
		}
	}

    return 0;
}
