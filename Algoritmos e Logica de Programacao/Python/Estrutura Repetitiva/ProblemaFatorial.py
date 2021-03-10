'''Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.'''

n = int(input("Digite o valor de N: "))
fat: int;
fat =1
for i in range(n,0, -1):
    fat = fat * i
print(f"FATORIAL = {fat}")