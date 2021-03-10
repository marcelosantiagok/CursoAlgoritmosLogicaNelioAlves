'''Problema "dardo"
No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.'''
a:float; b:float; c:float; maior: float;

print("Digite as tres distancias: ")
a = float(input())
b = float(input())
c = float(input())

if a > b and a > c:
    maior = a
elif b > a and b > c:
    maior = b
else:
    maior = c

print(f"MAIOR DISTANCIA = {maior:.2f}")