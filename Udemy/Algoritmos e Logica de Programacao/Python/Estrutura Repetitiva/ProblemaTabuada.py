'''Problema "tabuada"
Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.'''

n = int(input("Deseja a tabuada para qual valor? "))
for i in range(1,11):
    print(f"{n} x {i} = {n*i}")
