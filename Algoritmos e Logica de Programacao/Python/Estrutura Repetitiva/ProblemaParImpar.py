'''Problema "par_impar" (adaptado de URI 1074)
Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.'''

n = int(input("Quantos numeros voce vai digitar? "))
numero : int;
for i in range(0,n):
    numero = int(input("Digite um numero: "))
    if numero == 0:
        print("NULO")
    elif numero > 0:
        if numero % 2 == 0:
            print("PAR POSITIVO")
        else:
            print("IMPAR POSITIVO")
    else:
        if numero %2 == 0:
            print("PAR NEGATIVO")
        else:
            print("IMPAR NEGATIVO")

