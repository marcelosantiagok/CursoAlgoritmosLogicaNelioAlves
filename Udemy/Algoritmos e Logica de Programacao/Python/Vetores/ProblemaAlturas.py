'''Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.'''

n = int(input("Quantas pessoas serao digitadas? "))
nome: [str] = [0 for x in range(n)]
idade: [int] = [0 for x in range(n)]
altura: [float] = [0 for x in range(n)]
media: float; contMenor: int; percent: float;
soma: float;
soma = 0.0
media = 0.0
contMenor = 0
percent = 0
for i in range(0,n):
    print(f"Dados da {i+1}a pessoa:")
    nome[i] = str(input("Nome: "))
    idade[i] = int(input("Idade: "))
    altura[i] = float(input("Altura: "))
    soma = soma + altura[i]
    if idade[i]<16:
        contMenor = contMenor + 1

media = soma / n
percent = contMenor * 100 / n
print(f"Altura média: {media:.2f}")
print(f"Pessoas com menos de 16 anos: {percent}%")

for i in range(0,n):
    if idade[i]<16:
        print(nome[i])