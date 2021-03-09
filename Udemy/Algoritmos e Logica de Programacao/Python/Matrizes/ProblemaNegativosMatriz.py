'''Problema "negativos_matriz"
Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.'''

m = int(input("Qual a quantidade de linhas da matriz? "))
n = int(input("Qual a quantidade de colunas da matriz? "))
vet : [[int]] = [[0 for x in range(n)] for x in range(m)]

for i in range(m):
    for j in range(n):
        vet[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("VALORES NEGATIVOS: ")
for i in range(m):
    for j in range(n):
        if vet[i][j] < 0:
            print(vet[i][j])
