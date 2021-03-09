'''Problema "cada_linha"
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates.'''

n = int(input("Qual a ordem da matriz? "))
maior : int;
maiorLinha : [int] = [0 for x in range(n)]
vet : [[int]] = [[0 for x in range(n)]for x in range(n)]
for i in range(n):
    for j in range(n):
        vet[i][j] = int(input(f"Elemento [{i},{j}]: "))


for i in range(n):
    maior = vet[i][0]
    for j in range(n):
        if vet[i][j] > maior:
            maior = vet[i][j]
    maiorLinha[i] = maior

print("MAIOR ELEMENTO DE CADA LINHA: ")
for i in range(n):
    print(maiorLinha[i])