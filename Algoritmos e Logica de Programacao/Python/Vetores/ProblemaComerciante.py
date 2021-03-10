'''Problema "comerciante"
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.'''

n = int(input("Serao digitados dados de quantos produtos? "))
nome: [str] = [0 for x in range (n)]
pcompra: [float] = [0 for x in range (n)]
pvenda: [float] = [0 for x in range (n)]
totalCompra: float;
totalVenda: float;
luc10: int; luc20: int; luc21: int;
totalLucro: float;
calculo: float;
totalVenda = 0.0
totalCompra = 0.0
totalLucro = 0.0
luc10 = 0
luc20 = 0
luc21 = 0
calculo = 0.0
for i in range(0,n):
    print(f"Produto {i+1}: ")
    nome[i] = str(input("Nome: "))
    pcompra[i] = float(input("Preco de compra: "))
    totalCompra = totalCompra + pcompra[i]
    pvenda[i] = float(input("Preco de venda: "))
    totalVenda = totalVenda + pvenda[i]
    calculo = (pvenda[i] * 100.00 / pcompra[i]) - 100
    if calculo < 10.0:
        luc10 = luc10 + 1
    elif calculo < 21.0:
        luc20 = luc20 + 1
    else:
        luc21 = luc21 + 1

totalLucro = totalVenda - totalCompra

print("RELATORIO: ")
print(f"Lucro abaixo de 10%: {luc10}")
print(f"Lucro entre 10% e 20%: {luc20}")
print(f"Lucro acima de 20%: {luc21}")
print(f"Valor total de compra: {totalCompra:.2f}")
print(f"Valor total de venda: {totalVenda:.2f}")
print(f"Lucro total: {totalLucro:.2f}")