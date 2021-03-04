'''Problema "dentro_fora" (adaptado de URI 1072)
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo'''

n = int(input("Quantos numeros voce vai digitar? "))
x: int; dentro: int; fora: int;
x =0
dentro = 0
fora = 0
for i in range(0,n):
    x = int(input("Digite um numero: "))
    if x > 9 and x < 21:
        dentro = dentro + 1
    else:
        fora = fora + 1

print(f"{dentro} DENTRO")
print(f"{fora} FORA")