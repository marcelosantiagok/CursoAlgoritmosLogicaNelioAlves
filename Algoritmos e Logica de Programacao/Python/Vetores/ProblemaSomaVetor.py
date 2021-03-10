'''Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor'''

n = int(input("Quantos numeros voce vai digitar? "))
soma : float; media: float;
soma = 0.0
media = 0.0
vet : [float] = [0 for x in range(n)]

for i in range(0,n):
        vet[i] = float(input("Digite um numero: "))
        soma = soma + vet[i]


media = soma / n
print("VALORES = ", end="")
for i in range(0,n):
        print(f"{vet[i]:.1f} ", end="")

print()
print(f"SOMA = {soma:.2f}")
print(f"MEDIA = {media:.2f}")