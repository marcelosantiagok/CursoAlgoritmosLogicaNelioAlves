'''Problema "dados_pessoas"
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.'''

n = int(input("Quantas pessoas serao digitadas? "))
altura: [float] = [0 for x in range(n)]
genero: [str] = [0 for x in range(n)]
maior: float; menor: float
somaMulher: float;
contMulher: int;
contHomem: int;
mediaMulher: float;
maior = 0.0
menor = 0.0
somaMulher = 0.0
contMulher = 0
contHomem = 0
mediaMulher = 0.0

for i in range(0,n):
    altura[i] = float(input(f"Altura da {i+1}a pessoa: "))
    genero[i] = str(input(f"Genero da {i+1}a pessoa: "))
    if genero[i] == 'F' or genero[i] == 'f':
        somaMulher = somaMulher + altura[i]
        contMulher = contMulher + 1
    else:
        contHomem = contHomem + 1

menor = altura[0]
maior = altura[0]

mediaMulher = somaMulher / contMulher

for i in range(0,n):
    if altura[i]>maior:
        maior = altura[i]
    if altura[i]<menor:
        menor = altura[i]

print(f"Menor altura = {menor:.2f}")
print(f"Maior altura = {maior:.2f}")
print(f"Media das alturas das mulheres = {mediaMulher:.2f}")
print(f"Numero de homens = {contHomem}")