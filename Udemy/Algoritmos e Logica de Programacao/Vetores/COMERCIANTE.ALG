Algoritmo "comerciante"
//Um comerciante deseja fazer o levantamento do lucro das mercadorias
//que ele comercializa. Para isto, mandou digitar um conjunto de N mercadorias,
//cada uma contendo nome, preço de compra e preço de venda das mesmas.
//Fazer um programa que leia tais dados e determine e
//escreva quantas mercadorias proporcionaram:
//lucro < 10%
//10% = lucro = 20%
//lucro > 20%
//Determine e escreva também o valor total de compra e de venda
//de todas as mercadorias, assim como o lucro total.
Var
      N, i, lucabaixo, lucmedio, lucalto  : inteiro
      compra,venda, lucro : vetor[0..9] de real
      nome : vetor[0..9] de caractere
      somacompra, somavenda, lucrototal : real
Inicio
      escreva("Serao digitados dados de quantos produtos? ")
      leia(N)
      lucabaixo <- 0
      lucmedio <- 0
      lucalto <- 0
      para i de 0 ate N-1 faca
        escreval("Produto ",i+1,": ")
        escreva("Nome: ")
        leia(nome[i])
        escreva("Preco de compra: ")
        leia(compra[i])
        somacompra <- somacompra + compra[i]
        escreva("Preco de venda: ")
        leia(venda[i])
        somavenda <- somavenda + venda[i]
        lucro[i] <- ((venda[i] * 100) / compra[i]) - 100)
        
        lucrototal <- lucrototal + (venda[i] - compra[i])
        
        se lucro[i] < 10 entao
             lucabaixo <- lucabaixo + 1
             senao
             se lucro[i] < 20 entao
                  lucmedio <- lucmedio + 1
                  senao
                  lucalto <- lucalto + 1
             fimse
        fimse
        
      fimpara
      
      escreval("RELATORIO")
      escreval("Lucro abaixo de 10%: ",lucabaixo)
      escreval("Lucro entre 10% e 20%: ",lucmedio)
      escreval("Lucro acima de 20%: ",lucalto)
      escreval("Valor total de compra: ",somacompra:4:2)
      escreval("Valor total de venda: ",somavenda:4:2)
      escreval("Lucro total: ",lucrototal:3:2)
      
Fimalgoritmo