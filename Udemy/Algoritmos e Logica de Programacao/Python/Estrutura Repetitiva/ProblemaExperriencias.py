'''Problema "experiencias" (adaptado de URI 1094)
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.'''

n = int(input("Quantos casos de teste serao digitados? "))
total: int; c: int; r: int; s: int;
total = 0
c =0
r=0
s=0
qtdCobaias: int;
qtdCobaias = 0
tipo: str;
percent: float;
for i in range(0,n):
    qtdCobaias = int(input("Quantidade de cobaias: "))
    tipo = str(input("Tipo de cobaias: "))
    total = total+qtdCobaias
    if tipo == 'C' or tipo =='c':
        c = c + qtdCobaias
    elif tipo == 'R' or tipo == 'r':
        r = r + qtdCobaias
    elif tipo == 'S' or tipo =='s':
        s = s + qtdCobaias

print("RELATORIO FINAL: ")
print(f"Total: {total} cobaias ")
print(f"Total de coelhos: {c}")
print(f"Total de ratos: {r}")
print(f"Total de sapos: {s}")
percent = c * 100 / total
print(f"Percentual de coelhos: {percent:.2f}")
percent = r * 100 / total
print(f"Percentual de ratos: {percent:.2f}")
percent = s * 100 / total
print(f"Percentual de sapos: {percent:.2f}")