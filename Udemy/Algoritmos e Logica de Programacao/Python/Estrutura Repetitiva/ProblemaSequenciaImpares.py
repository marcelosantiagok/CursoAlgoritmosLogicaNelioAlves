'''Problema "sequencia_impares" (adaptado de URI 1067)
Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.'''

x: int

x = int(input("Digite o valor de X: "))

for i in range (1,x+1):
    if i%2!=0:
        print(i)