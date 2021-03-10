'''Problema "mais_velho"
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.'''


n = int(input("Quantas pessoas voce vai digitar? "))
nome : [str] = [0 for x in range(n)]
idade : [int] = [0 for x in range(n)]
maior : int;
maior = 0
posicao : int;
posicao = 0

for i in range(0,n):
    print(f"Dados da {i+1}a pessoa: ")
    nome[i] = str(input("Nome: "))
    idade[i] = int(input("Idade: "))

maior = idade[0]
for i in range(0,n):
    if idade[i] > maior:
        maior = idade[i]
        posicao = i

print(f"PESSOA MAIS VELHA: {nome[posicao]}")