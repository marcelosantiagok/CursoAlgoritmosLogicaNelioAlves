'''Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.'''

m = int(input("Qual a quantidade de linhas da matriz? "))
n = int(input("Qual a quantidade de colunas da matriz? "))
vet : [[float]] = [[0 for x in range(n)] for x in range(m)]
gerado : [float] = [0 for x in range(m)]
soma : float;
soma = 0.0
for i in range(m):
    print(f"Digite os elementos da {i+1}a. linha: ")
    for j in range(n):
        vet[i][j] = float(input())


for i in range(m):
    soma = 0.0
    for j in range(n):
        soma = soma + vet[i][j]
    gerado[i] = soma

print("VETOR GERADO")
for i in range(m):
    print(gerado[i])