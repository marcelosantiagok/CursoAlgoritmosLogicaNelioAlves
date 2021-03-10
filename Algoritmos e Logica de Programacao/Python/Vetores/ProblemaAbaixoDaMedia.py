'''Problema "abaixo_da_media"
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.'''

n = int(input("Quantos elementos vai ter o vetor? "))
vet : [float] = [0 for x in range(n)]
media: float; soma: float;
media =0.0
soma =0.0
for i in range(0,n):
    vet[i] = float(input("Digite um numero: "))
    soma = soma + vet[i]

media = soma / n

print(f"MEDIA DO VETOR = {media:.3f}")
print("ELEMENTOS ABAIXO DA MEDIA: ")

for i in range(0,n):
    if vet[i] < media:
        print(vet[i])