Algoritmo "mais_velho"
//Fazer um programa para ler um conjunto de nomes de pessoas e
//suas respectivas idades. Os nomes devem ser armazenados em um vetor,
//e as idades em um outro vetor. Depois, mostrar na tela o nome da pessoa
//mais velha.
Var
       N, i, posicao, old : inteiro
       nome : vetor[0..9] de caractere
       idade : vetor[0..9] de inteiro

Inicio
      escreva("Quantas pessoas voce vai digitar? ")
      leia(N)
      old <- 0
      para i de 0 ate N-1 faca
           escreval("Dados da ",i+1,"a pessoa: ")
           escreva("Nome: ")
           leia(nome[i])
           escreva("Idade: ")
           leia(idade[i])
           se idade[i] > old entao
              old <- idade[i]
              posicao <- i
           fimse
      fimpara
              escreval("PESSOA MAIS VELHA = ",nome[posicao])
Fimalgoritmo