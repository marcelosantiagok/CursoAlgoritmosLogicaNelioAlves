'''Problema "multiplos" (adaptado de URI 1044)
Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.'''

x: int; y: int;

print("Digite dois numeros inteiros: ")
x = int(input())
y = int(input())

if x % y == 0 or y % x == 0:
    print("Sao multiplos")
else:
    print("Nao sao multiplos")