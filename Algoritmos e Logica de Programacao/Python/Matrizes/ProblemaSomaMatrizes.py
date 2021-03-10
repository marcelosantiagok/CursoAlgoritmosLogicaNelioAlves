'''Problema "soma_matrizes"
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.'''

m = int(input("Quantas linhas vai ter cada matriz? "))
n = int(input("Quantas colunas vai ter cada matriz? "))
vetA : [[int]] = [[0 for x in range(n)]for x in range(m)]
vetB : [[int]] = [[0 for x in range(n)]for x in range(m)]
vetC : [[int]] = [[0 for x in range(n)]for x in range(m)]
print("Digite os valores da matriz A: ")
for i in range(m):
    for j in range(n):
        vetA[i][j] = int(input(f"Elemento [{i},{j}]: "))


print("Digite os valores da matriz B: ")
for i in range(m):
    for j in range(n):
        vetB[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("MATRIZ SOMA: ")
for i in range(m):
    for j in range(n):
        vetC[i][j] = vetA[i][j] + vetB[i][j]
        print(f"{vetC[i][j]} ", end="")
    print()