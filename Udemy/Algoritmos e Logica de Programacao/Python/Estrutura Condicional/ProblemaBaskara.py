'''Problema "baskara"
Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.'''

import math

a: float; b: float; c: float; x1: float; x2: float; delta: float;

a = float(input("Coeficiente a: "))
b = float(input("Coeficiente b: "))
c = float(input("Coeficiente c: "))

delta = pow(b,2) - 4 * a * c

if delta > 0 and a > 0:
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    print(f"X1 = {x1:.4f}")
    print(f"X2 = {x2:.4f}")
else:
    print("Esta equacao nao possui raizes reais ")
