Algoritmo "dados_pessoas"
//Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas.
// Fazer um programa que calcule e escreva a maior e a menor altura do grupo,
// a média de altura das mulheres, e o número de homens.
Var
      N, i, homem, cont : inteiro
      genero : vetor[0..9] de caractere
      altura : vetor[0..9] de real
      mediaM, soma, maior, menor : real

Inicio
      escreva("Quantas pessoas serao digitadas? ")
      leia(N)
      homem <- 0
      maior <- 0
      altura[0] <- 0
      para i de 0 ate N-1 faca
        escreva("Altura da ",i+1,"a pessoa: ")
        leia(altura[i])
        
        se altura[i] > maior entao
             maior <- altura[i]
        fimse
        
        escreva("Genero da ",i+1,"a pessoa: ")
        leia(genero[i])
        se genero[i] = "M" entao
             homem <- homem + 1
        fimse
        se genero[i] = "F" entao
           soma <- soma + altura[i]
           cont <- cont + 1
        fimse
        
      fimpara
      
      menor <- maior
      
      para i de 0 ate N-1 faca
           se altura[i] < menor entao
                menor <- altura[i]
           fimse

      fimpara
      

      mediaM <- soma / cont
      
      escreval("Menor altura = ",menor:3:2)
      escreval("Maior altura = ",maior:3:2)
      escreval("Media das alturas das mulheres = ",mediaM:3:2)
      escreval("Numero de homens = ",homem)
      
      


Fimalgoritmo