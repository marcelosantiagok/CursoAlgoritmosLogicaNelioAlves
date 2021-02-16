'''Problema "idades"
Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.'''

idade1: int; idade2: int; nome1: str; nome2: str;
media: float;

print("Dados da primeira pessoa: ")
nome1 = input("Nome: ")
idade1 = int(input("Idade: "))
print("Dados da segunda pessoa: ")
nome2 = input("Nome: ")
idade2 = int(input("Idade: "))

media = float(idade1 + idade2) / 2
print(f"A idade média de {nome1} e {nome2} é de {media:.1f} anos")