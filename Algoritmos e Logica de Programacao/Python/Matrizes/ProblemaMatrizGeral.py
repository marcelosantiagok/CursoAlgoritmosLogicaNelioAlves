'''Problema "matriz_geral"
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.'''

import math

n = int(input("Qual a ordem da matriz? "))
vet: [[float]] = [[0 for x in range(n)]for x in range(n)]
positivos: float;
positivos = 0
for i in range(n):
    for j in range(n):
        vet[i][j] = float(input(f"Elemento [{i},{j}]: "))

for i in range(n):
    for j in range(n):
        if vet[i][j] > 0:
            positivos = positivos + vet[i][j]

print(f"SOMA DOS POSITIVOS: {positivos:.2f}")

escolha = int(input("Escolha uma linha: "))
for i in range(n):
    print(f"{vet[escolha][i]} ",end="")

print()
escolha = int(input("Escolha uma coluna: "))
for i in range(n):
    print(f"{vet[i][escolha]} ",end="")

print()
print("DIAGONAL PRINCIPAL: ")
for i in range(n):
    print(f"{vet[i][i]} ",end="")

print()
print("MATRIZ ALTERADA: ")
for i in range(n):
    for j in range(n):
        if vet[i][j] < 0:
            vet[i][j] = pow(vet[i][j],2)

for i in range(n):
    for j in range(n):
        print(f"{vet[i][j]} ",end="")
    print()