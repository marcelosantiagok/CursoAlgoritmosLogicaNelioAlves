'''Problema "divisao" (adaptado de URI 1116)
Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.'''

n = int(input("Quantos casos voce vai digitar? "))
for i in range(0,n):
    numerador = int(input("Entre com o numerador: "))
    denominador = int(input("Entre com o denominador: "))
    divisao: int;
    if numerador < 0:
        print("DIVISAO IMPOSSIVEL")
    else:
        divisao = numerador/denominador
        print(f"DIVISAO = {divisao:.2f}")