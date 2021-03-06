'''Problema "numeros_pares"
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.'''

n = int(input("Quantos numeros voce vai digitar? "))
numero : [int] = [0 for x in range(n)]
cont : int;
cont = 0
for i in range(0,n):
    numero[i] = int(input("Digite um numero: "))

print("NUMEROS PARES: ")
for i in range(0,n):
    if numero[i] % 2 == 0:
        print(f"{numero[i]} ",end="")
        cont = cont + 1
print()
print(f"QUANTIDADE DE PARES = {cont}")