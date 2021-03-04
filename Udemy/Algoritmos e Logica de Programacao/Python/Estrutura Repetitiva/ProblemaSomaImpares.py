'''Problema "soma_impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.'''

print("Digite dois numeros: ")
x = int(input())
y = int(input())
troca: int; soma: int;
soma = 0;
troca =0;

if x > y:
    troca = x
    x = y
    y = troca
for i in range(x+1,y):
    if i%2!=0:
        soma = soma + i

print(f"SOMA DOS IMPARES = {soma}")