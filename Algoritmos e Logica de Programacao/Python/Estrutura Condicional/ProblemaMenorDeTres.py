'''Problema "menor_de_tres"
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.'''


a :int; b: int; c: int; menor: int;

a = int(input("Primeiro valor:"))
b = int(input("Segundo valor:"))
c = int(input("Terceiro valor:"))

if a < b and a < c:
    menor = a
elif b < a and b < c:
    menor = b
else:
    menor = c

print(f"MENOR = {menor}")