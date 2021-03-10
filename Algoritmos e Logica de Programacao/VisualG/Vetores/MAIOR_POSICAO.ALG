Algoritmo "maior_posicao"
//Faça um programa que leia N números reais e armazene-os em um vetor.
//Em seguida, mostrar na tela o maior número do vetor
//(supor não haver empates). Mostrar também a posição do maior elemento,
// considerando a primeira posição como 0 (zero).
Var
      N, i, posicao : inteiro
      numero : vetor[0..9] de real
      maior : real
Inicio
      escreva("Quantos numeros voce vai digitar? ")
      leia(N)
      
      para i de 0 ate N-1 faca
       escreva("Digite um numero: ")
       leia(numero[i])
      fimpara
      maior <- 0.0
      para i de 0 ate N-1 faca
           se numero[i] > maior entao
              posicao <- i
              maior <- numero[i]
           fimse
      fimpara
      
      escreval("MAIOR VALOR = ",maior:3:1)
      escreval("POSICAO DO MAIOR VALOR = ",posicao)

Fimalgoritmo