Algoritmo "Problema_Terreno"

Var
  largura, comprimento, valmetroquadrado, area, preco : REAL
  

Inicio
      escreva("Digite a largura do terreno: ")
      leia(largura)
      escreva("Digite o comprimento do terreno: ")
      leia(comprimento)
      escreva("Digite o valor do metro quadrado: ")
      leia(valmetroquadrado)
      area <- comprimento * largura
      preco <- valmetroquadrado * area
      escreval("Area do terreno = ", area:5:2)
      escreval("Preco do Terreno = ", preco:7:2)

Fimalgoritmo