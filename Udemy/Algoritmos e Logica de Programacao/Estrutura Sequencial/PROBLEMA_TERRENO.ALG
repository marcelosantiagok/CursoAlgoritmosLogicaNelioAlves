Algoritmo "Problema_Terreno"
  //Problema "terreno"Fazer um programa para ler as medidas da largura
  //e comprimento de um terreno retangular com uma casa decimal,
  //bem como o valor do metro quadrado do terreno com duas casas decimais.
  //Em seguida, o programa deve mostrar o valor da área do terreno,
  //bem como o valor do preço do terreno, ambos com duas casas decimais,
  //conforme exemplo.
  
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