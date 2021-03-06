'''Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.'''

n = int(input("Quantos valores vai ter cada vetor? "))
a : [int] = [0 for x in range(n)]
b : [int] = [0 for x in range(n)]
c : [int] = [0 for x in range(n)]
print("Digite os valores do vetor A: ")
for i in range(0,n):
    a[i] = int(input())

print("Digite os valores do vetor A: ")
for i in range(0,n):
    b[i] = int(input())

print("VETOR RESULTANTE: ")
for i in range(0,n):
    c[i] = a[i] + b[i]
    print(c[i])