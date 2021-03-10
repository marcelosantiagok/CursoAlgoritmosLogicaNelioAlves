'''Problema "glicose"
Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.'''

glicose: float;

glicose = float(input("Digite a medida da glicose: "))
if glicose < 101:
    print("Classificacao: normal ")
elif glicose < 141:
    print("Classificacao: elevado")
else:
    print("Classificacao: diabetes")