'''Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".'''

print("Digite as idades: ")
idade: int; cont: int;
cont = 0
soma = 0.0
media : float; soma: float;
idade = int(input())
if idade < 0:
    print("IMPOSSIVEL CALCULAR")
else:
    while idade > 0:
        cont = cont + 1
        soma = soma + idade
        idade = int(input())
    media = soma / cont
    print(f"MEDIA = {media:.2f}")