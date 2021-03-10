Algoritmo "troco_verificado"
//Fazer um programa para calcular o troco no processo de pagamento
//de um produto de uma mercearia. O programa deve ler o preço unitário
//do produto, a quantidade de unidades compradas deste produto,
//e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar
//o valor do troco a ser devolvido ao cliente.
//Se o dinheiro dado pelo cliente não for suficiente,
//mostrar uma mensagem informando o valor restante conforme exemplo.

Var
      preco, dinheiro, troco : real
      qtd : inteiro

Inicio
      escreva("Preço unitário do produto: ")
      leia(preco)
      escreva("Quantidade comprada: ")
      leia(qtd)
      escreva("Dinheiro recebido: ")
      leia(dinheiro)
      
      se dinheiro > (preco*qtd) entao
      troco <- dinheiro - (preco * qtd)
      escreva("TROCO = ",troco:4:2)
            senao
      troco <- (preco*qtd)- dinheiro
                 escreva("DINHEIRO INSUFICIENTE. FALTAM ", troco:4:2, " REAIS")
      fimse

Fimalgoritmo