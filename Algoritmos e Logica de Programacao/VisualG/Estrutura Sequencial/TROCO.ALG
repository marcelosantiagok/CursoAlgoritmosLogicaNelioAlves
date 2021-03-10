Algoritmo "TROCO"

//Fazer um programa para calcular o troco no processo de pagamento
//de um produto de uma mercearia.
//O programa deve ler o preço unitário do produto,
//a quantidade de unidades compradas deste produto,
//e o valor em dinheiro dado pelo cliente
//(suponha que haja dinheiro suficiente). Seu programa deve
//mostrar o valor do troco a ser devolvido ao cliente.
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
      troco <- dinheiro - (preco*qtd)
      escreval("TROCO = ",troco:4:2)
      
Fimalgoritmo