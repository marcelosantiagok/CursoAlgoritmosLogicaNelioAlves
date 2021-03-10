'''Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo.'''

preco: float; qtd: int; dinheiro: float; troco: float;

preco = float(input("Preço unitário do produto: "))
qtd = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))
if dinheiro > preco * qtd:
    troco = dinheiro - (preco * qtd)
    print(f"TROCO = {troco:.2f}")
else:
    troco = (preco * qtd ) - dinheiro
    print(f"DINHEIRO INSUFICIENTE. FALTAM {troco:.2f} REAIS")