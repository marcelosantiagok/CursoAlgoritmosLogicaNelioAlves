Algoritmo "alturas"
//Fazer um programa para ler nome, idade e altura de N pessoas,
//conforme exemplo. Depois, mostrar na tela a altura média das pessoas,
//e mostrar também a porcentagem de pessoas com menos de 16 anos,
//bem como os nomes dessas pessoas caso houver.
Var
      N, i, cont, contM : inteiro
      nome : vetor[0..9] de caractere
      idade, altura : vetor[0..9] de real
      media, soma, porcentagem :  real
Inicio
      escreva("Quantas pessoas serao digitadas? ")
      leia(N)
      cont <- 0

      para i de 0 ate N-1 faca
      escreval("Dados da ",i+1, "a pessoa:")
      escreva("Nome: ")
      leia(nome[i])
      escreva("Idade: ")
      leia(idade[i])
         se idade[i] < 16 entao
               contM <- contM + 1
         fimse
      escreva("Altura: ")
      leia(altura[i])
      soma <- soma + altura[i]
      cont <- cont + 1
      fimpara
      media <- soma / cont
      
      escreval
      porcentagem <-  contM * 100 / cont
      escreval("Altura média: ",media:3:2)
      escreval("Pessoas com menos de 16 anos: ", porcentagem:4:2,"%")
      
      para i de 0 ate N-1 faca
          se idade[i] < 16 entao
             escreval(nome[i])
          fimse
      fimpara

      
Fimalgoritmo