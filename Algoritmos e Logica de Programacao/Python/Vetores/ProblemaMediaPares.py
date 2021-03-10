'''Problema "media_pares "
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"'''

n = int(input("Quantos elementos vai ter o vetor? "))
vet : [int] = [0 for x in range(n)]
media : float;
media = 0.0
contPar : int;
contPar = 0
somaPar : float;
somaPar = 0.0
for i in range(0,n):
    vet[i] = int(input("Digite um numero: "))
    if vet[i]%2==0:
        somaPar = somaPar + vet[i]
        contPar = contPar + 1

if contPar == 0:
    print("NENHUM NUMERO PAR ")
else:
    media = somaPar / contPar
    print(f"MEDIA DOS PARES = {media:.1f}")