'''Problema "duracao"
Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos.'''

duracao: int; horas: int; minutos: int; segundos: int; resto: int;

duracao = int(input("Digite a duracao em segundos: "))

horas = duracao // 3600
resto = duracao % 3600
minutos = resto // 60
segundos = resto % 60

print(f"{horas}:{minutos}:{segundos}")