Algoritmo "experiencias"
//Maria acabou de iniciar seu curso de graduação na faculdade de medicina
//e precisa de sua ajuda para organizar os experimentos de um laboratório
//o qual ela é responsável. Ela quer saber no final do ano,
//quantas cobaias foram utilizadas no laboratório e o percentual de cada
//tipo de cobaia utilizada. Este laboratório em especial utiliza três
//tipos de cobaias: sapos, ratos e coelhos. Para obter estas
//informações, ela sabe exatamente o número de experimentos que foram
//realizados, o tipo de cobaia utilizada e a quantidade de cobaias
//utilizadas em cada experimento. Faça um programa que leia um
//valor inteiro N que indica os vários casos de teste que vem a seguir.
//Cada caso de teste contém um inteiro que representa a quantidade de
//cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
//de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas,
//o total de cada tipo de cobaia utilizada e o percentual de cada
//uma em relação ao total de cobaias utilizadas, sendo que o
//percentual deve ser apresentado com dois dígitos após o ponto.
Var
      x, i, qtd, cont,  rato, sapo, coelho  : inteiro
      tipoCobaia : caractere
      pRato, pSapo, pCoelho : real

Inicio
      escreva("Quantos casos de teste serao digitados? ")
      leia(x)
      para i de 1 ate x faca
           escreva("Quantidade de cobaias: ")
           leia(qtd)
           cont <- cont + qtd
           escreva("Tipo de cobaia: ")
           leia(tipoCobaia)
           se (tipoCobaia = "C") ou (tipoCobaia = "c")entao
                coelho <- coelho + qtd
                senao
                se (tipoCobaia = "R") ou (tipoCobaia = "r") entao
                rato <- rato + qtd
                     senao
                          se (tipoCobaia = "S") ou (tipoCobaia = "s") entao
                          sapo <- sapo + qtd
                          fimse
                fimse
                qtd <- 0
           fimse

           
      fimpara
      escreval
      escreval("RELATORIO FINAL: ")
      escreval("Total: ",cont, " Cobaias")
      escreval("Total de coelhos: ",coelho)
      escreval("Total de ratos: ",rato)
      escreval("Total de sapos: ",sapo)
      escreval
      pCoelho <- coelho *100/cont
      pRato <- rato *100/cont
      pSapo <- sapo *100/cont
      escreval("Percentual de coelhos: ", pCoelho:4:2)
      escreval("Percentual de ratos: ", pRato:4:2)
      escreval("Percentual de sapos: ", pSapo:4:2)

Fimalgoritmo