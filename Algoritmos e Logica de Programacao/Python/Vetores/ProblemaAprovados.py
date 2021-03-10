'''Problema "aprovados"
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).'''
n = int(input("Quantos alunos serao digitados? "))
nome: [str] = [0 for x in range(n)]
nota1: [float] = [0 for x in range(n)]
nota2: [float] = [0 for x in range(n)]
media : float;
media =0.0

for i in range(0,n):
    print(f"Digite nome, primeira e segunda nota do {i+1}o aluno:")
    nome[i] = str(input())
    nota1[i] = float(input())
    nota2[i] = float(input())

print("Alunos aprovados: ")
for i in range(0,n):
    media = (nota1[i] + nota2[i]) / 2.0
    if media >= 6.0:
        print(nome[i])