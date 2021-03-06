'''Problema "maior_posicao"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).'''

n = int(input("Quanto numeros voce vai digitar? "))
vet : [float] = [0 for x in range(n)]
maior : float; posicao: int;
for i in range(0,n):
   vet[i] = float(input("Digite um numero: "))

maior = vet[0]
for i in range(0,n):
    if vet[i] > maior:
        maior = vet[i]
        posicao = i

print(f"MAIOR VALOR = {maior:.1f}")
print(f"POSICAO DO MAIOR VALOR = {posicao}")