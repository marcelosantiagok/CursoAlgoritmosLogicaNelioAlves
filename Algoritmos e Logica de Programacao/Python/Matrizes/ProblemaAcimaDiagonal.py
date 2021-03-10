'''Problema "acima_diagonal"
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).'''

n = int(input("Qual a ordem da matriz? "))
vet : [[int]] = [[0 for x in range(n)]for x in range(n)]
soma: int;
soma = 0
for i in range(n):
    for j in range(n):
        vet[i][j] = int(input(f"Elemento [{i},{j}]: "))

for i in range(n):
    for j in range(n):
        if i!=j and j>i:
            soma = soma + vet[i][j]

print(f"SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = {soma}")